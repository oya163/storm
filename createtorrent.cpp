#include "createtorrent.h"
#include "ui_createtorrent.h"

createTorrent::createTorrent(QWidget *parent) :
    QDialog(parent),
    uiCreateTor(new Ui::createTorrent)
{
    uiCreateTor->setupUi(this);
    createTorrent::setFixedSize(664,472);

}

createTorrent::~createTorrent()
{
    delete uiCreateTor;
}

void createTorrent::on_browseButton_clicked()
{
    filePath = QFileDialog::getOpenFileName(this, tr("Open File"), "/home/oyashi/Documents");
    QFileInfo f(filePath);
    uiCreateTor->lineEdit->setText(filePath);
}

void createTorrent::on_makeTorrent_Button_clicked()
{
    QString program = "/home/oyashi/Downloads/libtorrent-rasterbar-1.1.0/examples/make_torrent";
    QString outputFile = uiCreateTor->outputFileLineEdit->text();


    QMessageBox msgBox;

    if(!filePath.isEmpty()){
        if(!outputFile.isEmpty()){
            QString outputFileName = outputFile + ".torrent";
            QStringList arguments;
            arguments << filePath << "-o" << outputFileName ;

            if(!uiCreateTor->trackerLineEdit->text().isEmpty()){
                arguments.append("-t");
                arguments.append(uiCreateTor->trackerLineEdit->text());

            }

            if(!uiCreateTor->trackerLineEdit_2->text().isEmpty()){
                arguments.append("-t");
                arguments.append(uiCreateTor->trackerLineEdit_2->text());

            }

            if(!uiCreateTor->commentLineEdit->text().isEmpty()){
                arguments.append("-c");
                arguments.append(uiCreateTor->commentLineEdit->text());

            }

            if(!uiCreateTor->webSeedLineEdit->text().isEmpty()){
                arguments.append("-w");
                arguments.append(uiCreateTor->webSeedLineEdit->text());

            }

            if(!uiCreateTor->createdByLineEdit->text().isEmpty()){
                arguments.append("-C");
                arguments.append(uiCreateTor->createdByLineEdit->text());

            }

            QProcess *myProcess = new QProcess(this);
            myProcess->start(program,arguments);

            if(myProcess->waitForFinished(1000)){
                msgBox.setText("Torrent created successfully");
                msgBox.exec();
            }
        }
        else{
            msgBox.setText("Please provide the output file name");
            msgBox.exec();
        }
    }
    else{
        msgBox.setText("Please select the input file");
        msgBox.exec();
    }




}

void createTorrent::on_cancelMakeTorrent_Button_clicked()
{
    this->hide();
}
