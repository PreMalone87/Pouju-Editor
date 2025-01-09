/********************************************************************************
** Form generated from reading UI file 'find_template.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIND_TEMPLATE_H
#define UI_FIND_TEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLineEdit *lineEdit;
    QLabel *up;
    QLabel *down;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(352, 95);
        lineEdit = new QLineEdit(Dialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 30, 261, 31));
        up = new QLabel(Dialog);
        up->setObjectName("up");
        up->setGeometry(QRect(280, 40, 21, 16));
        down = new QLabel(Dialog);
        down->setObjectName("down");
        down->setGeometry(QRect(310, 40, 21, 16));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(280, 40, 21, 16));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(310, 40, 21, 16));
        pushButton_2->raise();
        pushButton->raise();
        lineEdit->raise();
        up->raise();
        down->raise();

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        up->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        down->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIND_TEMPLATE_H
