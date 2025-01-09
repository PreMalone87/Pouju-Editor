#include "finddialog.h"
#include "ui_finddialog.h"
#include<QPixmap>
#include<QDebug>

FindDialog::FindDialog(QWidget *parent, QString textEditData ) :
    QDialog(parent),textEditData(textEditData),
    ui(new Ui::FindDialog)
{
    ui->setupUi(this);
    qDebug("Dialog created");
    //QPixmap next_label_icon(":/icons/Resources/icons/up.png");
    //QPixmap prev_label_icon(":/icons/Resources/icons/down.png");

    //int width = ui->next_button_label->width();
    //int height = ui->prev_button_label->height();
    //ui->next_button_label->setPixmap(next_label_icon.scaled(height, width));
    //ui->prev_button_label->setPixmap(prev_label_icon.scaled(height, width));

    QObject::connect(this, FindDialog::findDialog_textChanged, this, FindDialog::update_find_dialogData_total);


}

FindDialog::~FindDialog()
{
    delete ui;
}

void FindDialog::on_next_button_clicked()
{
    //1.get current position of cursor
    //2.check if the line number and column number matches to any data in the findDialog_data
    //3.    if matches then get the next data's line number and column number
    //4.    if not then the next closest line and column number
    //5.    emit signal putCursor

    emit putCursor("next");
}


void FindDialog::on_lineEdit_textChanged(const QString &arg1)
{
    emit findDialog_textChanged();
}


void FindDialog::displayData(){
    qDebug() << "\n\n--------------------Display Data---------------------------\n\n";
    for(auto it:this->findDialog_data){
        qDebug()<<it.first<<" ";
        for(int i=0;i<it.second.size();i++){
            qDebug() <<it.second[i].first<<" "<<it.second[i].second<<"\n";
        }
    }
}

void FindDialog::update_find_dialogData_perLine(int lineNumber, QString str){

    qDebug() << "text edit updated at "<<lineNumber<<", str is "<<str<<"\n";

    if(this->textEditData == str){
        qDebug() << "text edit not changed\n";
        return;
    }

    //delete all data of line lineNumber
    if(findDialog_data.find(lineNumber) != findDialog_data.end()){
        this->findDialog_data.erase(lineNumber);
    }

    this->textEditData = str;

    int cur_line_number = 0;
    QString lineString = "";
    for(int i=0;i<str.size();i++){


        if(str[i] == '\n' || i==str.size()-1){

            if(i==str.size()-1)lineString.push_back(str[i]);

            if(lineNumber == cur_line_number){
                std::vector<std::pair<int,int>>data = this->textSearcher(lineString, ui->lineEdit->text());
                qDebug()<<"Updated line data size : "<<data.size()<<"\n";
                for(int i=0;i<data.size();i++){
                    this->findDialog_data[lineNumber].push_back(data[i]);
                }
                break;
            }
            cur_line_number++;
            lineString = "";
        }
        else{
            lineString.push_back(str[i]);
        }

    }

    this->displayData();
    emit update_and_highlight(this->findDialog_data);
}



void FindDialog::update_find_dialogData_total(){


    qDebug() << "Find Dialog updated\n";

    emit reset_highlights();

    this->findDialog_data.clear();

    QString lineString = "";
    QString str = this->textEditData;
    int lineNumber = 0;
    for(int i=0;i<str.size();i++){

        if(str[i] == '\n' || i==str.size()-1){
            std::vector<std::pair<int,int>>data = this->textSearcher(lineString, ui->lineEdit->text());
            for(int i=0;i<int(data.size());i++){
                this->findDialog_data[lineNumber].push_back(data[i]);
            }
            lineString = "";
            lineNumber++;
        }
        else{
            lineString.push_back(str[i]);
        }

    }

    this->displayData();
    emit update_and_highlight(this->findDialog_data);
}


std::vector<std::pair<int,int>>FindDialog::textSearcher(QString lineString, QString phrase){


    std::vector<std::pair<int,int>>pos;
    if(phrase.size() == 0)return pos;
    for(int i=0;i<lineString.size() - phrase.size()+1;i++){
        int len = 0;
        for(int j=0;j<phrase.size();j++){

            if(phrase[j] == lineString[i+j]){
                len++;
            }
            else{
                break;
            }

        }

        if(len == phrase.size()){
            pos.push_back(std::make_pair(i, i+len-1));
        }
    }

    return pos;
}



void FindDialog::on_prev_button_clicked()
{
    emit putCursor("prev");
}

