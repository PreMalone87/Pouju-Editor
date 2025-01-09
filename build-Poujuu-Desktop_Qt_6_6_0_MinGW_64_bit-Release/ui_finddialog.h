/********************************************************************************
** Form generated from reading UI file 'finddialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDDIALOG_H
#define UI_FINDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FindDialog
{
public:
    QLineEdit *lineEdit;
    QPushButton *next_button;
    QPushButton *prev_button;

    void setupUi(QDialog *FindDialog)
    {
        if (FindDialog->objectName().isEmpty())
            FindDialog->setObjectName("FindDialog");
        FindDialog->resize(309, 40);
        lineEdit = new QLineEdit(FindDialog);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 10, 211, 21));
        next_button = new QPushButton(FindDialog);
        next_button->setObjectName("next_button");
        next_button->setGeometry(QRect(230, 10, 31, 21));
        prev_button = new QPushButton(FindDialog);
        prev_button->setObjectName("prev_button");
        prev_button->setGeometry(QRect(270, 10, 31, 21));
        next_button->raise();
        prev_button->raise();
        lineEdit->raise();

        retranslateUi(FindDialog);

        QMetaObject::connectSlotsByName(FindDialog);
    } // setupUi

    void retranslateUi(QDialog *FindDialog)
    {
        FindDialog->setWindowTitle(QCoreApplication::translate("FindDialog", "Dialog", nullptr));
        next_button->setText(QCoreApplication::translate("FindDialog", "next", nullptr));
        prev_button->setText(QCoreApplication::translate("FindDialog", "prev", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindDialog: public Ui_FindDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDDIALOG_H
