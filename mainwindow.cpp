#include "ui_mainwindow.h"
#include "mainwindow.h"
#include "dump_torrent.h"
#include "simple_client.h"

#include <QFileDialog>
#include <QMessageBox>
#include <QErrorMessage>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QStringList>


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

    MainWindow::displayHeader();


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

    if(ui->fileLabel->text() != "NA"){
        msgBox.setText("Are you sure you want to start downloading?");
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::Yes);
        int ret = msgBox.exec();
        switch(ret){
        case (QMessageBox::Yes):

            displayProgress(tv);

            //connect signal
            connect(start_thread,SIGNAL(threadResult(int)),this,SLOT(displayResultFromSC(int)));
            connect(start_thread, SIGNAL(finished()), start_thread, SLOT(deleteLater()));

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
    MainWindow::tv->torFileName = nameOfFile;
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


void MainWindow::on_quitButton_clicked()
{
    quitProgram = true;
    exit(1);
}

void MainWindow::displayProgress(struct torVariable *tv){

    QTableWidgetItem *tableItems = new QTableWidgetItem(tv->torFileName);
    QTableWidgetItem *tableItems_1 = new QTableWidgetItem("Hi");
    QTableWidgetItem *tableItems_2 = new QTableWidgetItem("How are you");


    QList<QString> listOfString;
    QString test;
    for(int i = 1; i < 8;i++){
        test = i + " boy";
        listOfString.append(test);
    }

    ui->statusDisplay->insertRow(0);
    ui->statusDisplay->setItem(0,0,tableItems);
    ui->statusDisplay->setItem(0,1,tableItems_1);
    ui->statusDisplay->setItem(0,2,tableItems_2);
    ui->statusDisplay->insertRow(1);

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
    std::string msg;

    if(result == 0){    //success
        msg = strcat(onlyFilename.toLatin1().data(),"successfully downloaded");
        msgBox2.setText(QString(msg.c_str()));
        msgBox2.exec();
    }
    else if(result == 1){
        msg = strcat("Error downloading ",onlyFilename.toLatin1().data());
        msgBox2.setText(QString(msg.c_str()));
        msgBox2.exec();
    }
}
