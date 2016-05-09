#include "ui_mainwindow.h"
#include "mainwindow.h"

#include <QFileDialog>
#include <QMessageBox>
#include <QErrorMessage>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QStringList>
#include <QItemSelectionModel>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Storm");
    ui->openButton->setFocus();


    connect(dt,SIGNAL(setNumOfPieces(int)),this,SLOT(setNumPieces(int)));
    connect(dt,SIGNAL(setPiecesLength(int)),this,SLOT(setPiecesLength(int)));
    connect(dt,SIGNAL(setInfoHash(QString)),this,SLOT(setInfoHash(QString)));
    connect(dt,SIGNAL(setComment(QString)),this,SLOT(setComment(QString)));
    connect(dt,SIGNAL(setCreatedBy(QString)),this,SLOT(setCreatedBy(QString)));
    connect(dt,SIGNAL(setMagnetLink(QString)),this,SLOT(setMagnetLink(QString)));
    connect(dt,SIGNAL(setName(QString)),this,SLOT(setName(QString)));
    connect(dt,SIGNAL(setNumOfFiles(int)),this,SLOT(setNumOfFiles(int)));
    connect(dt,SIGNAL(setFilesList(QList<QString>)),this,SLOT(setFilesList(QList<QString>)));

    //    connect();

    MainWindow::displayHeader();
    MainWindow::setFixedSize(812,847);
    MainWindow::move(300,0);


}

MainWindow::~MainWindow()
{
    delete ui;
    delete ct;
    delete dt;
    delete tv;
}

void MainWindow::on_openButton_clicked()
{
    filePath = QFileDialog::getOpenFileName(this, tr("Open File"),
                                            "/home/oyashi/Downloads",
                                            tr("Torrents (*.torrent)"));
    QFileInfo f(filePath);
    onlyFilename = f.fileName();

    if(filePath != NULL){

        ui->fileLabel->setText(f.fileName());
    }

    QByteArray fileNameChar = filePath.toLatin1();
    char *c_str1[] = {fileNameChar.data()};
    dt->printInfo(2, c_str1);
}

void MainWindow::on_startButton_clicked()
{
    QMessageBox msgBox;
    QMessageBox msgBox1;

    //initalize the StartThread with filpath
    StartThread *start_thread = new StartThread(MainWindow::filePath);
    simple_client *sc = new simple_client();

    if(ui->fileLabel->text() != "NA"){
        msgBox.setText("Are you sure you want to start downloading?");
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::Yes);
        int ret = msgBox.exec();
        switch(ret){
        case (QMessageBox::Yes):
            tv->torProgress = "Downloading";
            displayProgress(tv);

            //connect signal
            //            connect(sc,SIGNAL(displayProgress(torVariable)),this,SLOT(displayProgress(torVariable));
            connect(start_thread,SIGNAL(threadResult(int)),this,SLOT(displayResultFromSC(int)));
            //connect(start_thread, SIGNAL(finished()), start_thread, SLOT(deleteLater()));

            start_thread->start();

            //display processing message
            msgBox1.setText("Your request is being processed");
            msgBox1.exec();

            break;

        case(QMessageBox::No):
            break;
        }


    }
    else {
        msgBox.setText("Please select a file");
        msgBox.exec();
    }

}

void MainWindow :: setNumPieces(int numPieces)
{
    ui->numPcsLbl->clear();
    ui->numPcsLbl->setText(QString::number(numPieces));
}

void MainWindow :: setPiecesLength(int piecesLength)
{
    ui->pcsLenLbl->clear();
    ui->pcsLenLbl->setText(QString::number(piecesLength));
}

void MainWindow :: setInfoHash(QString infoHash)
{
    ui->infoHashLbl->clear();
    ui->infoHashLbl->setText(infoHash);
}

void MainWindow :: setComment(QString comment)
{
    ui->cmntLbl->clear();
    ui->cmntLbl->setText(comment);
}

void MainWindow :: setCreatedBy(QString creator)
{
    ui->createByLbl->clear();
    ui->createByLbl->setText(creator);
}

void MainWindow :: setMagnetLink(QString magnetLink)
{
    ui->magLinkBrowser->clear();
    ui->magLinkBrowser->setText(magnetLink);
}

void MainWindow :: setName(QString nameOfFile)
{
    MainWindow::tv->torFileName = nameOfFile;
    ui->nameLbl->clear();
    ui->nameLbl->setText(nameOfFile);
}

void MainWindow :: setNumOfFiles(int numOfFiles)
{
    ui->numFilesLbl->clear();
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
    ui->fileListDisplay->clear();
    ui->fileListDisplay->addItems(stringList);
}


void MainWindow::on_quitButton_clicked()
{

    exit(1);
}

void MainWindow::displayProgress(struct torVariable *tv){

    QTableWidgetItem *tableItems = new QTableWidgetItem(tv->torFileName);
    QTableWidgetItem *tableItems_1 = new QTableWidgetItem(tv->torProgress);
    QTableWidgetItem *tableItems_2 = new QTableWidgetItem(tv->download_rate);

    ui->statusDisplay->removeRow(0);
    ui->statusDisplay->insertRow(0);
    ui->statusDisplay->setItem(0,0,tableItems);
    ui->statusDisplay->setItem(0,1,tableItems_1);
    ui->statusDisplay->setItem(0,2,tableItems_2);

}

void MainWindow::displayHeader(){
    QStringList headerLabels;
    headerLabels << "File Name" << "Progress" << "Downloads" << "Uploads" << "Peers(D:S)" << "Down" << "Up";

    ui->statusDisplay->horizontalHeader()->setStretchLastSection(true);
    ui->statusDisplay->setColumnCount(7);
    ui->statusDisplay->setColumnWidth(0,250);
    ui->statusDisplay->setHorizontalHeaderLabels(headerLabels);
}

void MainWindow::displayResultFromSC(int result){
    QMessageBox msgBox2;
    QString msg;
    bool statusFinish = false;

    if(result == 0){    //success
        msg = QString(onlyFilename.toLatin1().data()) + " successfully downloaded";
        tv->torProgress = "Finished";
        displayProgress(tv);
        msgBox2.setText(msg);
        msgBox2.exec();
    }
    else if(result == 1){
        msg = "Error downloading " + QString(onlyFilename.toLatin1().data());
        tv->torProgress = "Error";
        displayProgress(tv);
        msgBox2.setText(msg);
        msgBox2.exec();
    }
}

void MainWindow::on_createTorrent_Button_clicked()
{
    createTor.show();
}


void MainWindow::on_deleteButton_clicked()
{
    ui->statusDisplay->removeRow(ui->statusDisplay->currentRow());
}

void MainWindow::on_pauseButton_clicked()
{

}
