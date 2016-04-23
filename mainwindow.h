#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dump_torrent.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setLineEdit(int num);
    //dump_torrent *dumpTorrent;

private slots:
    void on_pushButton_8_clicked();
    void on_pushButton_7_clicked();

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

private:
    Ui::MainWindow *ui;
    dump_torrent *dt = new dump_torrent();

};

#endif // MAINWINDOW_H
