#include "chat.h"
#include "ui_chat.h"
#include <QFile>
#include <QTextStream>
#include<QMessageBox>
#include<QmouseEvent>
#include <QTimer>
#include<QProcess>
#include "MyTextEdit.h"
#include<QDir>
#include<QFuture>
#include<QtConcurrent>

Chat::Chat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Chat)
{
    this->other_filename = "";
    ui->setupUi(this);
    int random_number = rand();
    this->filename = QString::fromStdString((std::to_string(random_number) + "_chat.txt"));
    QString label = QString::fromStdString(("Your ID : " + std::to_string(random_number)));
    this->ui->id_label->setText(label);

    QTimer* timer = new QTimer;
    this->textEdit = ui->textEdit1;

    QObject::connect(timer, &QTimer::timeout, this, other_chat_online_listener_wrapper);

    timer->start(3000);

    QObject::connect(ui->textEdit1, MyTextEdit::my_chat_enter_pressed, this, Chat::my_chat_enter_pressed);
    QObject::connect(this, Chat::update_other_textEdit_signal, this, Chat::update_other_textEdit);
}

Chat::~Chat()
{
    delete ui;
}


//TODO : currently saves in local system, must update to GIT
void Chat::update_my_chat(){

    this->filepath = this->filename;
    QFile file(this->filepath);

    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::critical(this, "Error", "Unable to update chat");
    }

    QTextStream stream(&file);
    stream << ui->textEdit1->toPlainText();
    stream.flush();
    file.close();

}

void Chat::update_my_chat_online(){

    QString filePath = QCoreApplication::applicationFilePath();
    QList fileArr = filePath.split("/");
    filePath = "";
    for(int i=0;i<fileArr.length()-1;i++){
        filePath+=fileArr[i]+"/";
    }
    filePath+=+"sample.py";

    QStringList args = {filePath, this->filepath};
    //qDebug() << args;
    QProcess p;
    p.start("python", args);

    if(!p.waitForStarted()){
        qDebug()<<"Unable to start process\n";
    }


    if(!p.waitForFinished()){
        qDebug() << "Process is not ending\n";
    }

    QString p_opt = p.readAllStandardOutput();
    QString p_err = p.readAllStandardError();

    qDebug()<<p_opt<<"\n"<<p_err;
}

void Chat::on_textEdit1_textChanged()
{
    update_my_chat();
    //update_my_chat_online();
}


void Chat::on_pushButton_clicked()
{
    this->other_filename = this->ui->lineEdit->text() + "_chat.txt";
}

void Chat::other_chat_listener(){

    if(this->other_filename == "")return;
    qDebug()<< "other chat listener invoked\n";
    QString filepath = this->other_filename;
    QFile file(filepath);

    if(!file.open(QFile::ReadOnly | QFile::Text)){
        return;
        //QMessageBox::critical(this, "Error", "Unable to read chat");
    }

    QTextStream stream(&file);
    emit this->update_other_textEdit_signal(stream.readAll());
    //ui->textEdit2->setText(stream.readAll());
    file.close();
}

void Chat::update_other_textEdit(QString str){
    this->ui->textEdit2->setText(str);
}

void Chat::other_chat_online_listener(){


    if(this->other_filename == "")return;

    QString filePath = QCoreApplication::applicationFilePath();
    QList fileArr = filePath.split("/");
    filePath = "";
    for(int i=0;i<fileArr.length()-1;i++){
        filePath+=fileArr[i]+"/";
    }
    filePath+=+"sample2.py";

    QStringList args = {filePath, this->other_filename};
    //qDebug() << args;
    QProcess p;
    p.start("python", args);

    if(!p.waitForStarted()){
        qDebug()<<"Unable to start process\n";
    }

    if(!p.waitForFinished()){
        qDebug() << "Process is not ending\n";
    }
    QString p_opt = p.readAllStandardOutput();
    QString p_err = p.readAllStandardError();

    qDebug()<<p_opt<<"\n"<<p_err;

    this->other_chat_listener();
}


void Chat::other_chat_online_listener_wrapper(){
    QFuture<void> ft = QtConcurrent::run([this]{
        this->other_chat_online_listener();
    });


}

void Chat::my_chat_enter_pressed(){
    //QtConcurrent::run(this->update_my_chat_online);
    QtConcurrent::run([this](){this->update_my_chat_online();});

    //update_my_chat_online();
}



