#include "find_dialog.h"
#include "ui_find_dialog.h"

Find_Dialog::Find_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Find_Dialog)
{
    ui->setupUi(this);
}

Find_Dialog::~Find_Dialog()
{
    delete ui;
}
