#ifndef CREATETORRENT_H
#define CREATETORRENT_H

#include <QFileInfo>
#include <QFileDialog>
#include <QProcess>
#include <QMessageBox>

namespace Ui {
class createTorrent;
}

class createTorrent : public QDialog
{
    Q_OBJECT

public:
    explicit createTorrent(QWidget *parent = 0);
    ~createTorrent();

private slots:
    void on_browseButton_clicked();
    void on_makeTorrent_Button_clicked();

    void on_cancelMakeTorrent_Button_clicked();

private:
    Ui::createTorrent *uiCreateTor;
    QString filePath;

};

#endif // CREATETORRENT_H
