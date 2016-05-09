#ifndef SIMPLE_CLIENT_H
#define SIMPLE_CLIENT_H

#include <string.h>

#include <QString>
#include <QObject>
#include <QMessageBox>

#include "libtorrent/extensions/ut_metadata.hpp"
#include "libtorrent/extensions/ut_pex.hpp"
#include "libtorrent/extensions/smart_ban.hpp"

#include "libtorrent/torrent_info.hpp"
#include "libtorrent/announce_entry.hpp"
#include "libtorrent/entry.hpp";
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

#include "importedHeader/torrent_view.hpp"
#include "importedHeader/print.hpp"
#include "libtorrent/torrent_status.hpp"

#include "mainwindow.h"

class simple_client
{

public:
    void load_torrent(libtorrent::sha1_hash const& ih, std::vector<char>& buf, libtorrent::error_code& ec);

    int load_file(std::string const& filename, std::vector<char>& v
        , libtorrent::error_code& ec, int limit);

    int startTorrent(QString onlyfileName);
    void set_num_of_peers(int num_of_peers);
    int get_num_of_peers(int num_of_peers);


private:
    int num_of_peers;


signals:
    void displayName(QString displayName);
    void displayProg();




};

#endif // SIMPLE_CLIENT_H


