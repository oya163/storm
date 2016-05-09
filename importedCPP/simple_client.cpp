/*

Copyright (c) 2003, Arvid Norberg
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in
      the documentation and/or other materials provided with the distribution.
    * Neither the name of the author nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.

*/

#include <mainwindow.h>
#include <simple_client.h>
#include <QDebug>



torrent_view view;
session_view ses_view;

int simple_client::load_file(std::string const& filename, std::vector<char>& v
                             , libtorrent::error_code& ec, int limit = 8000000)
{
    ec.clear();
    FILE* f = fopen(filename.c_str(), "rb");
    if (f == NULL)
    {
        ec.assign(errno, boost::system::system_category());
        return -1;
    }

    int r = fseek(f, 0, SEEK_END);
    if (r != 0)
    {
        ec.assign(errno, boost::system::system_category());
        fclose(f);
        return -1;
    }
    long s = ftell(f);
    if (s < 0)
    {
        ec.assign(errno, boost::system::system_category());
        fclose(f);
        return -1;
    }

    if (s > limit)
    {
        fclose(f);
        return -2;
    }

    r = fseek(f, 0, SEEK_SET);
    if (r != 0)
    {
        ec.assign(errno, boost::system::system_category());
        fclose(f);
        return -1;
    }

    v.resize(s);
    if (s == 0)
    {
        fclose(f);
        return 0;
    }

    r = fread(&v[0], 1, v.size(), f);
    if (r < 0)
    {
        ec.assign(errno, boost::system::system_category());
        fclose(f);
        return -1;
    }

    fclose(f);

    if (r != s) return -3;

    return 0;
}



struct torrent_entry
{
    torrent_entry(libtorrent::torrent_handle h) : handle(h) {}
    libtorrent::torrent_handle handle;
    libtorrent::torrent_status status;
};

// maps filenames to torrent_handles
typedef std::map<std::string, libtorrent::torrent_handle> handles_t;
typedef std::map<libtorrent::sha1_hash, std::string> files_t;

files_t hash_to_filename;

using libtorrent::torrent_status;

bool yes(libtorrent::torrent_status const&)
{ return true; }

int listen_port = 6881;
int allocation_mode = libtorrent::storage_mode_sparse;
std::string save_path(".");
int torrent_upload_limit = 0;
int torrent_download_limit = 0;
std::string monitor_dir;
std::string bind_to_interface = "";
int poll_interval = 5;
int max_connections_per_torrent = 50;
bool seed_mode = false;
int cache_size = 1024;

bool share_mode = false;
bool disable_storage = false;

bool quit = false;


//COPYING STUFFS FROM CLIENT_TEST

void simple_client::load_torrent(libtorrent::sha1_hash const& ih, std::vector<char>& buf, libtorrent::error_code& ec)
{
    files_t::iterator i = hash_to_filename.find(ih);
    if (i == hash_to_filename.end())
    {
        // for magnet links and torrents downloaded via
        // URL, the metadata is saved in the resume file
        // TODO: pick up metadata from the resume file
        ec.assign(boost::system::errc::no_such_file_or_directory, boost::system::generic_category());
        return;
    }
    load_file(i->second, buf, ec,8000000);
}


int simple_client::startTorrent(QString onlyFilename)
{
    QMessageBox infoBox;
    QString errorCode;
    std::string ecCode;

    using namespace libtorrent;
    namespace lt = libtorrent;

    int refresh_delay = 500;
#ifndef TORRENT_DISABLE_DHT
    bool start_dht = true;
#endif
    bool rate_limit_locals = false;

    ip_filter loaded_ip_filter;


    settings_pack sett;
    sett.set_str(settings_pack::listen_interfaces, "0.0.0.0:");

    lt::session ses(sett);

    ses.set_ip_filter(loaded_ip_filter);
    //ses.set_load_function(&simple_client::load_torrent);

    error_code ec;

#ifndef TORRENT_DISABLE_DHT
    dht_settings dht;
    dht.privacy_lookups = true;
    ses.set_dht_settings(dht);

    //
    if (start_dht)
    {
        sett.set_bool(settings_pack::use_dht_as_fallback, false);

        ses.add_dht_router(std::make_pair(
                               std::string("router.bittorrent.com"), 6881));
        ses.add_dht_router(std::make_pair(
                               std::string("router.utorrent.com"), 6881));
        ses.add_dht_router(std::make_pair(
                               std::string("router.bitcomet.com"), 6881));
    }

    //bdecode
    std::vector<char> in;


    if (load_file(onlyFilename.toLatin1().data(), in, ec, 8000000) == 0)
    {
        bdecode_node e;
        if (bdecode(&in[0], &in[0] + in.size(), e, ec) == 0)
            ses.load_state(e, session::save_dht_state);
    }

#endif


    if (ec)
    {
        ecCode = std::strcat("failed to open listen socket: ",ec.message().c_str());
        errorCode = QString(ecCode.c_str());
        infoBox.setText(errorCode);
        infoBox.exec();
        return 1;
    }

    add_torrent_params p;
    p.save_path = "./";
    p.ti = boost::make_shared<torrent_info>(onlyFilename.toLatin1().data(), boost::ref(ec), 0);

    if (ec)
    {
        infoBox.setText(ec.message().c_str());
        infoBox.exec();
        return 1;
    }

    torrent_handle h = ses.add_torrent(p, ec);

    // main loop
    std::vector<peer_info> peers;
    std::vector<partial_piece_info> queue;


    if (ec)
    {
        infoBox.setText(ec.message().c_str());
        infoBox.exec();
        return 1;
    }

    while(1){
        std::vector<torrent_status> torrents;
        ses.get_torrent_status(&torrents, &yes, 0);

        torrent_status& st = *torrents.begin();

        //torrent_handle
        if (h.is_valid())
        {
            num_of_peers = st.num_peers;
            qDebug() << "Num of peers = " << num_of_peers;
            qDebug() << "Num of seeds = " << st.num_seeds;
            qDebug() << "Download rate = " << st.download_rate/1000 << "kbps";
            qDebug() << "Upload rate = " << st.upload_rate/1000 << "kbps";
            qDebug() << "Total download = " << st.total_download /1000000 << "MB";
            qDebug() << "Total upload = " << st.total_upload / 1000000 << "MB";

            simple_client::set_num_of_peers(st.num_peers);

            if(h.is_finished())
            {
                break;
            }
        }
    };

    return 0;
}

void simple_client::set_num_of_peers(int num_of_peers){
    this->num_of_peers = num_of_peers;
}

int simple_client::get_num_of_peers(int num_of_peers){
    return this->num_of_peers;
}

