/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <MyTextEdit.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Chat
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QTextEdit *textEdit2;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label_3;
    MyTextEdit *textEdit1;
    QSpacerItem *horizontalSpacer;
    QLabel *id_label;

    void setupUi(QDialog *Chat)
    {
        if (Chat->objectName().isEmpty())
            Chat->setObjectName("Chat");
        Chat->resize(653, 409);
        gridLayout = new QGridLayout(Chat);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(Chat);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 1, 1, 1);

        textEdit2 = new QTextEdit(Chat);
        textEdit2->setObjectName("textEdit2");

        gridLayout->addWidget(textEdit2, 2, 1, 1, 3);

        pushButton = new QPushButton(Chat);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 0, 3, 1, 1);

        lineEdit = new QLineEdit(Chat);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 2, 1, 1);

        label_3 = new QLabel(Chat);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        textEdit1 = new MyTextEdit(Chat);
        textEdit1->setObjectName("textEdit1");

        gridLayout->addWidget(textEdit1, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(328, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        id_label = new QLabel(Chat);
        id_label->setObjectName("id_label");

        gridLayout->addWidget(id_label, 3, 0, 1, 1);


        retranslateUi(Chat);

        QMetaObject::connectSlotsByName(Chat);
    } // setupUi

    void retranslateUi(QDialog *Chat)
    {
        Chat->setWindowTitle(QCoreApplication::translate("Chat", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Chat", "Chat ID:", nullptr));
        pushButton->setText(QCoreApplication::translate("Chat", "OK", nullptr));
        label_3->setText(QString());
        id_label->setText(QCoreApplication::translate("Chat", "Your ID:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Chat: public Ui_Chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
