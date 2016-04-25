#ifndef SIMPLE_CLIENT_H
#define SIMPLE_CLIENT_H

#include <QString>
#include <QObject>
#include "libtorrent/settings_pack.hpp"
#include "libtorrent/session.hpp"
#include "libtorrent/entry.hpp"
#include "libtorrent/bencode.hpp"
#include "libtorrent/torrent_info.hpp"
#include "libtorrent/announce_entry.hpp"
#include "libtorrent/bdecode.hpp"
#include "libtorrent/magnet_uri.hpp"


class simple_client
{
public:
    ~simple_client();
    int startTorrent(QString onlyfileName);

private:

signals:
    void displayName(QString displayName);


};

#endif // SIMPLE_CLIENT_H


