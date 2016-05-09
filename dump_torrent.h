#ifndef DUMP_TORRENT_H
#define DUMP_TORRENT_H

#include "libtorrent/entry.hpp"
#include "libtorrent/bencode.hpp"
#include "libtorrent/torrent_info.hpp"
#include "libtorrent/announce_entry.hpp"
#include "libtorrent/bdecode.hpp"
#include "libtorrent/magnet_uri.hpp"
#include <QObject>
#include <QString>


using namespace libtorrent;

class dump_torrent : public QObject
{
    Q_OBJECT
public:
    int load_file(std::string const& filename, std::vector<char>& v
                  , libtorrent::error_code& ec, int limit);
    int printInfo(int argc, char* argv[]);

signals:
    void setNumOfPieces(int numPieces);
    void setPiecesLength(int piecesLen);
    void setInfoHash(QString infoHash);
    void setComment(QString comment);
    void setCreatedBy(QString creator);
    void setMagnetLink(QString magnetLink);
    void setName(QString nameOfFile);
    void setNumOfFiles(int numPieces);
    void setFilesList(QList<QString>);

private:
    const char *fileName[4];
    QList<QString> fileList;

};

#endif // DUMP_TORRENT_H
