#ifndef CLIENTTEST_H
#define CLIENTTEST_H

#include <iterator>

#include "libtorrent/config.hpp"

#ifdef TORRENT_WINDOWS
#include <direct.h> // for _mkdir and _getcwd
#include <sys/types.h> // for _stat
#include <sys/stat.h>
#endif

#ifdef _MSC_VER
#pragma warning(push, 1)
#endif

#include <boost/bind.hpp>
#include <boost/unordered_set.hpp>
#include <boost/asio/waitable_timer_service.hpp>

#ifdef _MSC_VER
#pragma warning(pop)
#endif

#include "libtorrent/extensions/ut_metadata.hpp"
#include "libtorrent/extensions/ut_pex.hpp"
#include "libtorrent/extensions/smart_ban.hpp"

#include "libtorrent/torrent_info.hpp"
#include "libtorrent/announce_entry.hpp"
#include "libtorrent/entry.hpp"
#include "libtorrent/bencode.hpp"
#include "libtorrent/session.hpp"
#include "libtorrent/identify_client.hpp"
#include "libtorrent/alert_types.hpp"
#include "libtorrent/ip_filter.hpp"
#include "libtorrent/magnet_uri.hpp"
#include "libtorrent/bitfield.hpp"
#include "libtorrent/peer_info.hpp"
#include "libtorrent/bdecode.hpp"
#include "libtorrent/add_torrent_params.hpp"
#include "libtorrent/time.hpp"
#include "libtorrent/create_torrent.hpp"
#include "libtorrent/torrent_status.hpp"

#include "importedHeader/torrent_view.hpp"
#include "importedHeader/session_view.hpp"
#include "importedHeader/print.hpp"

#include <QObject>
#include <QString>

#include <stdio.h> // for snprintf
#include <stdlib.h> // for atoi

#include <termios.h>
#include <string.h>
#include <sys/ioctl.h>
#include <signal.h>

class clienttest{
public:
    int load_file(std::string const& filename, std::vector<char>& v
                  , libtorrent::error_code& ec, int limit = 8000000);
    bool is_absolute_path(std::string const& f);


    std::string leaf_path(std::string f);
    std::string path_append(std::string const& lhs, std::string const& rhs);
    bool is_hex(char const *in, int len);
    bool yes(libtorrent::torrent_status const&);
    int peer_index(libtorrent::tcp::endpoint addr, std::vector<libtorrent::peer_info> const& peers);
    void signal_handler(int signo);
//    std::string path_to_url(std::string f);
//    void load_torrent(libtorrent::sha1_hash const& ih, std::vector<char>& buf, libtorrent::error_code& ec);

//    std::string path_to_url(std::string f);
//    void add_torrent(libtorrent::session& ses
//                     , handles_t& files
//                     , std::set<libtorrent::torrent_handle>& non_files
//                     , std::string torrent
//                     , int allocation_mode
//                     , std::string const& save_path
//                     , bool monitored_dir
//                     , int torrent_upload_limit
//                     , int torrent_download_limit);

    std::vector<std::string> list_dir(std::string path
                                      , bool (*filter_fun)(std::string const&)
                                      , libtorrent::error_code& ec);
    bool filter_fun(std::string const& p);
//    void scan_dir(std::string const& dir_path
//                  , libtorrent::session& ses
//                  , handles_t& files
//                  , std::set<libtorrent::torrent_handle>& non_files
//                  , int allocation_mode
//                  , std::string const& save_path
//                  , int torrent_upload_limit
//                  , int torrent_download_limit);

    char const* timestamp();
    void print_alert(libtorrent::alert const* a, std::string& str);
    int save_file(std::string const& filename, std::vector<char>& v);

    // returns true if the alert was handled (and should not be printed to the log)
    // returns false if the alert was not handled
//    bool handle_alert(libtorrent::session& ses, libtorrent::alert* a
//                      , handles_t& files, std::set<libtorrent::torrent_handle>& non_files);

    void print_piece(libtorrent::partial_piece_info* pp
                     , libtorrent::cached_piece_info* cs
                     , std::vector<libtorrent::peer_info> const& peers
                     , libtorrent::torrent_status const* ts
                     , std::string& out);

    void startDownloading(QString torrentFilename);






private:

};



#endif // CLIENTTEST_H
