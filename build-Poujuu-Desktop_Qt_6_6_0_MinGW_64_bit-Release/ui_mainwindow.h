/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <MyTextEdit.h>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionPrint;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionFind;
    QAction *actionSelect_All;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionFont_Size;
    QAction *actionFont_Style;
    QAction *actionFont_Color;
    QAction *actionBackgroud_Color;
    QAction *actionPalette_Color;
    QAction *actionBold;
    QAction *actionItalic;
    QAction *actionx1;
    QAction *actionx2;
    QAction *actionx3;
    QAction *actionx4;
    QAction *actionx5;
    QAction *actionx10;
    QAction *actionChat;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    MyTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuFormat;
    QMenu *menuFunctionalities;
    QMenu *menuTeleprompting;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/Resources/icons/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/Resources/icons/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/Resources/icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName("actionSave_As");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/Resources/icons/saveAs.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon3);
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName("actionPrint");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/Resources/icons/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon4);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName("actionCopy");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/Resources/icons/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon5);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName("actionCut");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/Resources/icons/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon6);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName("actionPaste");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/Resources/icons/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon7);
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName("actionFind");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/Resources/icons/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFind->setIcon(icon8);
        actionSelect_All = new QAction(MainWindow);
        actionSelect_All->setObjectName("actionSelect_All");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/Resources/icons/selectAll.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect_All->setIcon(icon9);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName("actionUndo");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/Resources/icons/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon10);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName("actionRedo");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/Resources/icons/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon11);
        actionFont_Size = new QAction(MainWindow);
        actionFont_Size->setObjectName("actionFont_Size");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/Resources/icons/font_size.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont_Size->setIcon(icon12);
        actionFont_Style = new QAction(MainWindow);
        actionFont_Style->setObjectName("actionFont_Style");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/Resources/icons/font_style.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont_Style->setIcon(icon13);
        actionFont_Color = new QAction(MainWindow);
        actionFont_Color->setObjectName("actionFont_Color");
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons/Resources/icons/font_color.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFont_Color->setIcon(icon14);
        actionBackgroud_Color = new QAction(MainWindow);
        actionBackgroud_Color->setObjectName("actionBackgroud_Color");
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icons/Resources/icons/font_bck_color.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBackgroud_Color->setIcon(icon15);
        actionPalette_Color = new QAction(MainWindow);
        actionPalette_Color->setObjectName("actionPalette_Color");
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/icons/Resources/icons/palette_color.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPalette_Color->setIcon(icon16);
        actionBold = new QAction(MainWindow);
        actionBold->setObjectName("actionBold");
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/icons/Resources/icons/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBold->setIcon(icon17);
        actionItalic = new QAction(MainWindow);
        actionItalic->setObjectName("actionItalic");
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/icons/Resources/icons/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalic->setIcon(icon18);
        actionx1 = new QAction(MainWindow);
        actionx1->setObjectName("actionx1");
        actionx2 = new QAction(MainWindow);
        actionx2->setObjectName("actionx2");
        actionx3 = new QAction(MainWindow);
        actionx3->setObjectName("actionx3");
        actionx4 = new QAction(MainWindow);
        actionx4->setObjectName("actionx4");
        actionx5 = new QAction(MainWindow);
        actionx5->setObjectName("actionx5");
        actionx10 = new QAction(MainWindow);
        actionx10->setObjectName("actionx10");
        actionChat = new QAction(MainWindow);
        actionChat->setObjectName("actionChat");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        textEdit = new MyTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuFormat = new QMenu(menubar);
        menuFormat->setObjectName("menuFormat");
        menuFunctionalities = new QMenu(menubar);
        menuFunctionalities->setObjectName("menuFunctionalities");
        menuTeleprompting = new QMenu(menuFunctionalities);
        menuTeleprompting->setObjectName("menuTeleprompting");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        toolBar->setAllowedAreas(Qt::AllToolBarAreas);
        toolBar->setOrientation(Qt::Horizontal);
        toolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuFormat->menuAction());
        menubar->addAction(menuFunctionalities->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addAction(actionPrint);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionSelect_All);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuFormat->addAction(actionFont_Size);
        menuFormat->addAction(actionFont_Style);
        menuFormat->addAction(actionFont_Color);
        menuFormat->addAction(actionBackgroud_Color);
        menuFormat->addAction(actionPalette_Color);
        menuFormat->addAction(actionBold);
        menuFormat->addAction(actionItalic);
        menuFunctionalities->addAction(menuTeleprompting->menuAction());
        menuFunctionalities->addAction(actionChat);
        menuTeleprompting->addAction(actionx1);
        menuTeleprompting->addAction(actionx2);
        menuTeleprompting->addAction(actionx3);
        menuTeleprompting->addAction(actionx4);
        menuTeleprompting->addAction(actionx5);
        menuTeleprompting->addAction(actionx10);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionFont_Style);
        toolBar->addAction(actionFont_Size);
        toolBar->addAction(actionFont_Color);
        toolBar->addAction(actionBackgroud_Color);
        toolBar->addAction(actionBold);
        toolBar->addAction(actionItalic);
        toolBar->addAction(actionFind);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionSave_As->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        actionPrint->setText(QCoreApplication::translate("MainWindow", "Print", nullptr));
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
        actionFind->setText(QCoreApplication::translate("MainWindow", "Find", nullptr));
        actionSelect_All->setText(QCoreApplication::translate("MainWindow", "Select All", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
        actionFont_Size->setText(QCoreApplication::translate("MainWindow", "Font Size", nullptr));
        actionFont_Style->setText(QCoreApplication::translate("MainWindow", "Font Style", nullptr));
        actionFont_Color->setText(QCoreApplication::translate("MainWindow", "Font Color", nullptr));
        actionBackgroud_Color->setText(QCoreApplication::translate("MainWindow", "Backgroud Color", nullptr));
        actionPalette_Color->setText(QCoreApplication::translate("MainWindow", "Palette Color", nullptr));
        actionBold->setText(QCoreApplication::translate("MainWindow", "Bold", nullptr));
        actionItalic->setText(QCoreApplication::translate("MainWindow", "Italic", nullptr));
        actionx1->setText(QCoreApplication::translate("MainWindow", "x1", nullptr));
        actionx2->setText(QCoreApplication::translate("MainWindow", "x2", nullptr));
        actionx3->setText(QCoreApplication::translate("MainWindow", "x3", nullptr));
        actionx4->setText(QCoreApplication::translate("MainWindow", "x4", nullptr));
        actionx5->setText(QCoreApplication::translate("MainWindow", "x5", nullptr));
        actionx10->setText(QCoreApplication::translate("MainWindow", "x10", nullptr));
        actionChat->setText(QCoreApplication::translate("MainWindow", "Chat", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuFormat->setTitle(QCoreApplication::translate("MainWindow", "Format", nullptr));
        menuFunctionalities->setTitle(QCoreApplication::translate("MainWindow", "Functionalities", nullptr));
        menuTeleprompting->setTitle(QCoreApplication::translate("MainWindow", "Teleprompting", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
