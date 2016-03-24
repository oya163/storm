#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_8_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    "/home/oyashi/Downloads",
                                                    tr("Torrents (*.torrent)"));
    //changes for me
    ui->fileLabel->setText(fileName);
}
