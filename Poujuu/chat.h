#ifndef CHAT_H
#define CHAT_H

#include <QDialog>
#include "MyTextEdit.h"

namespace Ui {
class Chat;
}

class Chat : public QDialog
{
    Q_OBJECT

public:
    explicit Chat(QWidget *parent = nullptr);
    ~Chat();

private slots:

    void on_textEdit1_textChanged();

    void on_pushButton_clicked();
    void other_chat_listener();

    void other_chat_online_listener_wrapper();
    void my_chat_enter_pressed();

    void update_other_textEdit(QString str);
private:
    Ui::Chat *ui;
    QString filename;
    QString other_filename;
    QString filepath;
    MyTextEdit* textEdit;

    void update_my_chat();
    void update_my_chat_online();
    void fetch_chat();
    void other_chat_online_listener();

signals:
    void update_other_textEdit_signal(QString);


};

#endif // CHAT_H
