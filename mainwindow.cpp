#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"
#include <QMessageBox>
#include "dump_torrent.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Storm");

    connect(dt,SIGNAL(setNumOfPieces(int)),this,SLOT(setNumPieces(int)));
    connect(dt,SIGNAL(setPiecesLength(int)),this,SLOT(setPiecesLength(int)));
    connect(dt,SIGNAL(setInfoHash(QString)),this,SLOT(setInfoHash(QString)));
    connect(dt,SIGNAL(setComment(QString)),this,SLOT(setComment(QString)));
    connect(dt,SIGNAL(setCreatedBy(QString)),this,SLOT(setCreatedBy(QString)));
    connect(dt,SIGNAL(setMagnetLink(QString)),this,SLOT(setMagnetLink(QString)));
    connect(dt,SIGNAL(setName(QString)),this,SLOT(setName(QString)));
    connect(dt,SIGNAL(setNumOfFiles(int)),this,SLOT(setNumOfFiles(int)));
    connect(dt,SIGNAL(setFilesList(QList<QString>)),this,SLOT(setFilesList(QList<QString>)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_8_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "/home/oyashi/Downloads",
                                                    tr("Torrents (*.torrent)"));
    QFileInfo f(filePath);

    if(filePath != NULL){

        ui->fileLabel->setText(f.fileName());
    }

    QByteArray fileNameChar = filePath.toLatin1();
    char *c_str1[] = {fileNameChar.data()};
    dt->printInfo(2, c_str1);
}

void MainWindow :: setNumPieces(int numPieces)
{
    ui->numPcsLbl->setText(QString::number(numPieces));
}

void MainWindow :: setPiecesLength(int piecesLength)
{
    ui->pcsLenLbl->setText(QString::number(piecesLength));
}

void MainWindow :: setInfoHash(QString infoHash)
{
    ui->infoHashLbl->setText(infoHash);
}

void MainWindow :: setComment(QString comment)
{
    ui->cmntLbl->setText(comment);
}

void MainWindow :: setCreatedBy(QString creator)
{
    ui->createByLbl->setText(creator);
}

void MainWindow :: setMagnetLink(QString magnetLink)
{
    ui->magLinkBrowser->setText(magnetLink);
}

void MainWindow :: setName(QString nameOfFile)
{
    ui->nameLbl->setText(nameOfFile);
}

void MainWindow :: setNumOfFiles(int numOfFiles)
{
    ui->numFilesLbl->setText(QString::number(numOfFiles));
}

void MainWindow::setFilesList(QList<QString> fileList){

    QStringList stringList;
    stringList.clear();

    while(ui->fileListDisplay->count()>0){
        ui->fileListDisplay->takeItem(0);
    }

    foreach( QString s, fileList){
        stringList << s;
    }
    ui->fileListDisplay->addItems(stringList);
}

void MainWindow::on_pushButton_7_clicked()
{
    QMessageBox msgBox;
    QMessageBox msgBox1;
    if(ui->fileLabel->text() != "NA"){
        msgBox.setText("Are you sure you want to start downloading?");
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::Yes);
        int ret = msgBox.exec();
        switch(ret){
        case (QMessageBox::Yes):
            msgBox1.setText("Your request is being processed");
            msgBox1.exec();
            break;

        case(QMessageBox::No):
            break;

        default:
            break;
        }


    }
    else {
        msgBox.setText("Please select a file");
        msgBox.exec();
    }

}
