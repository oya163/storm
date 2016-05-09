#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>

#include "dump_torrent.h"
#include "simple_client.h"
#include "clienttest.h"
#include "startthread.h"
#include "createtorrent.h"

namespace Ui {
class MainWindow;
}

struct torVariable{
    QString torFileName;
    QString torProgress;
    int download_rate;
    boost::int64_t total_download;
    int upload_rate;
    boost::int64_t total_upload;
    int num_of_peers;
    int num_of_seeds;
    boost::int64_t all_time_download;
    boost::int64_t all_time_upload;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setLineEdit(int num);
    void displayHeader();


private slots:
    void on_openButton_clicked();
    void on_startButton_clicked();
    void on_quitButton_clicked();

    void on_createTorrent_Button_clicked();

    void on_pauseButton_clicked();

public slots:
    void setNumPieces(int numOfPieces);
    void setPiecesLength(int piecesLen);
    void setInfoHash(QString infoHash);
    void setComment(QString comment);
    void setCreatedBy(QString creator);
    void setMagnetLink(QString magnetLink);
    void setName(QString nameOfFile);
    void setNumOfFiles(int numPieces);
    void setFilesList(QList<QString>);
    void displayProgress(struct torVariable *);
    void displayResultFromSC(int result);

private:
    Ui::MainWindow *ui;
    dump_torrent *dt = new dump_torrent();
    clienttest *ct = new clienttest();
    QString onlyFilename, filePath, torrentFileName;
    torVariable *tv = new torVariable();
    createTorrent createTor;


signals:
    void stopProgram();



};

#endif // MAINWINDOW_H
