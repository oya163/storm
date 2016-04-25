#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>

#include "dump_torrent.h"
#include "simple_client.h"
#include "clienttest.h"
#include "startthread.h"

namespace Ui {
class MainWindow;
}

struct torVariable{
    QString torFileName;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setLineEdit(int num);
    void displayHeader();
    bool quitProgram = false;


private slots:
    void on_openButton_clicked();
    void on_startButton_clicked();
    void on_quitButton_clicked();

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



};

#endif // MAINWINDOW_H
