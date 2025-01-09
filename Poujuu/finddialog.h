#ifndef FINDDIALOG_H
#define FINDDIALOG_H

#include <QDialog>
#include<vector>
#include<map>
#include<iostream>
#include<QTextEdit>

namespace Ui {
class FindDialog;
}

class FindDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FindDialog(QWidget *parent = nullptr, QString textEditData = "");
    ~FindDialog();

    //searches for a given phrase in the lineStr effieciently
    std::vector<std::pair<int,int>>textSearcher(QString lineStr, QString phrase);
    void setProperties(QTextEdit textEdit);

private slots:
    void on_next_button_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_prev_button_clicked();

    void displayData();
public slots:
    void update_find_dialogData_perLine(int, QString);

    void update_find_dialogData_total();

signals:

    void findDialog_textChanged();
    void update_and_highlight(std::map<int, std::vector<std::pair<int,int>>>findDialog_data);
    void putCursor(QString);
    void reset_highlights();
private:
    Ui::FindDialog *ui;
    QString textEditData;
    QTextEdit textEdit;
    std::map<int, std::vector<std::pair<int,int>>>findDialog_data;

};

#endif // FINDDIALOG_H
