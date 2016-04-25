/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *fileLabel;
    QLabel *label;
    QGroupBox *groupBox;
    QPushButton *startButton;
    QPushButton *openButton;
    QPushButton *resumeButton;
    QPushButton *deleteButton;
    QPushButton *quitButton;
    QPushButton *pauseButton;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *numPcsLbl;
    QLabel *pcsLenLbl;
    QLabel *cmntLbl;
    QLabel *infoHashLbl;
    QLabel *createByLbl;
    QLabel *nameLbl;
    QLabel *label_10;
    QLabel *numFilesLbl;
    QTextBrowser *magLinkBrowser;
    QListWidget *fileListDisplay;
    QLabel *label_3;
    QLabel *label_11;
    QTableWidget *statusDisplay;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(812, 847);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        fileLabel = new QLabel(centralWidget);
        fileLabel->setObjectName(QStringLiteral("fileLabel"));
        fileLabel->setGeometry(QRect(110, 90, 511, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 90, 81, 20));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 10, 671, 71));
        startButton = new QPushButton(groupBox);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setGeometry(QRect(110, 30, 99, 27));
        openButton = new QPushButton(groupBox);
        openButton->setObjectName(QStringLiteral("openButton"));
        openButton->setGeometry(QRect(10, 30, 99, 27));
        resumeButton = new QPushButton(groupBox);
        resumeButton->setObjectName(QStringLiteral("resumeButton"));
        resumeButton->setGeometry(QRect(210, 30, 99, 27));
        deleteButton = new QPushButton(groupBox);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(410, 30, 99, 27));
        quitButton = new QPushButton(groupBox);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setGeometry(QRect(510, 30, 99, 27));
        pauseButton = new QPushButton(groupBox);
        pauseButton->setObjectName(QStringLiteral("pauseButton"));
        pauseButton->setGeometry(QRect(310, 30, 99, 27));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 130, 141, 20));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 150, 141, 20));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 170, 141, 20));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 190, 141, 20));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 210, 141, 20));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 230, 141, 20));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 250, 141, 20));
        numPcsLbl = new QLabel(centralWidget);
        numPcsLbl->setObjectName(QStringLiteral("numPcsLbl"));
        numPcsLbl->setGeometry(QRect(170, 130, 461, 20));
        pcsLenLbl = new QLabel(centralWidget);
        pcsLenLbl->setObjectName(QStringLiteral("pcsLenLbl"));
        pcsLenLbl->setGeometry(QRect(170, 150, 461, 20));
        cmntLbl = new QLabel(centralWidget);
        cmntLbl->setObjectName(QStringLiteral("cmntLbl"));
        cmntLbl->setGeometry(QRect(170, 190, 471, 20));
        infoHashLbl = new QLabel(centralWidget);
        infoHashLbl->setObjectName(QStringLiteral("infoHashLbl"));
        infoHashLbl->setGeometry(QRect(170, 170, 461, 20));
        createByLbl = new QLabel(centralWidget);
        createByLbl->setObjectName(QStringLiteral("createByLbl"));
        createByLbl->setGeometry(QRect(170, 210, 461, 20));
        nameLbl = new QLabel(centralWidget);
        nameLbl->setObjectName(QStringLiteral("nameLbl"));
        nameLbl->setGeometry(QRect(170, 230, 461, 20));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 330, 131, 20));
        numFilesLbl = new QLabel(centralWidget);
        numFilesLbl->setObjectName(QStringLiteral("numFilesLbl"));
        numFilesLbl->setGeometry(QRect(170, 330, 121, 20));
        magLinkBrowser = new QTextBrowser(centralWidget);
        magLinkBrowser->setObjectName(QStringLiteral("magLinkBrowser"));
        magLinkBrowser->setGeometry(QRect(160, 250, 631, 71));
        fileListDisplay = new QListWidget(centralWidget);
        fileListDisplay->setObjectName(QStringLiteral("fileListDisplay"));
        fileListDisplay->setGeometry(QRect(30, 390, 761, 91));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 360, 171, 20));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 530, 171, 20));
        statusDisplay = new QTableWidget(centralWidget);
        statusDisplay->setObjectName(QStringLiteral("statusDisplay"));
        statusDisplay->setGeometry(QRect(30, 560, 761, 221));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 812, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        fileLabel->setText(QApplication::translate("MainWindow", "NA", 0));
        label->setText(QApplication::translate("MainWindow", "File Name:", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Menu", 0));
        startButton->setText(QApplication::translate("MainWindow", "Start", 0));
        openButton->setText(QApplication::translate("MainWindow", "Open", 0));
        resumeButton->setText(QApplication::translate("MainWindow", "Resume", 0));
        deleteButton->setText(QApplication::translate("MainWindow", "Delete", 0));
        quitButton->setText(QApplication::translate("MainWindow", "Quit", 0));
        pauseButton->setText(QApplication::translate("MainWindow", "Pause", 0));
        label_2->setText(QApplication::translate("MainWindow", "Number of Pieces :", 0));
        label_4->setText(QApplication::translate("MainWindow", "Piece Length :", 0));
        label_5->setText(QApplication::translate("MainWindow", "Info Hash :", 0));
        label_6->setText(QApplication::translate("MainWindow", "Comment :", 0));
        label_7->setText(QApplication::translate("MainWindow", "Created By :", 0));
        label_8->setText(QApplication::translate("MainWindow", "Name :", 0));
        label_9->setText(QApplication::translate("MainWindow", "Magnet Link :", 0));
        numPcsLbl->setText(QApplication::translate("MainWindow", "NA", 0));
        pcsLenLbl->setText(QApplication::translate("MainWindow", "NA", 0));
        cmntLbl->setText(QApplication::translate("MainWindow", "NA", 0));
        infoHashLbl->setText(QApplication::translate("MainWindow", "NA", 0));
        createByLbl->setText(QApplication::translate("MainWindow", "NA", 0));
        nameLbl->setText(QApplication::translate("MainWindow", "NA", 0));
        label_10->setText(QApplication::translate("MainWindow", "Num of Files :", 0));
        numFilesLbl->setText(QApplication::translate("MainWindow", "NA", 0));
        label_3->setText(QApplication::translate("MainWindow", "Files to be downloaded", 0));
        label_11->setText(QApplication::translate("MainWindow", "Status", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
