#ifndef FIND_DIALOG_H
#define FIND_DIALOG_H

#include <QDialog>

namespace Ui {
class Find_Dialog;
}

class Find_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Find_Dialog(QWidget *parent = nullptr);
    ~Find_Dialog();

private:
    Ui::Find_Dialog *ui;
};

#endif // FIND_DIALOG_H
