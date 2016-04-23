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
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
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
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(806, 661);
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
        groupBox->setGeometry(QRect(30, 10, 481, 71));
        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(130, 30, 99, 27));
        pushButton_8 = new QPushButton(groupBox);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(10, 30, 99, 27));
        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(250, 30, 99, 27));
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(360, 30, 99, 27));
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
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 806, 25));
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
        pushButton_7->setText(QApplication::translate("MainWindow", "Start", 0));
        pushButton_8->setText(QApplication::translate("MainWindow", "Open", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "Pause", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "Stop", 0));
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
