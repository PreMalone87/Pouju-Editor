#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QLabel>
#include<QFileDialog>
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
#include<QFontDialog>
#include<QDebug>
#include<QMessageBox>
#include<QColorDialog>
#include<QTextCursor>
#include "finddialog.h"
#include<QTextBlock>
#include<QTextCursor>
#include<QScrollBar>
#include<QTimer>
#include<QMouseEvent>
#include<QProcess>
#include "chat.h"
#include<QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    ui->textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
    this->file_path = "";
    this->default_font = ui->textEdit->font();
    /*
    QWidget *centralWidget = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(centralWidget);

    // Create a QLabel with rich text formatting
    QLabel *titleLabel = new QLabel("<h1><b><i>Wassup Poujuu", centralWidget);
    titleLabel->setAlignment(Qt::AlignCenter);

    // Add the QLabel to the layout
    layout->addWidget(titleLabel);

    // Set the central widget
    setCentralWidget(centralWidget);
    */
}


MainWindow::~MainWindow()
{
    this->wanna_save();
    delete ui;
}

void MainWindow::wanna_save(){
    if(this->altered){
        QMessageBox::StandardButtons reply = QMessageBox::question(this, "Save", "Do you wanna save?", QMessageBox::Yes | QMessageBox::No);
        qDebug() << reply <<"\n";
        if(reply == QMessageBox::Yes){
            this->on_actionSave_triggered();
        }

    }
}

int getCursorLineNumber(QTextEdit *textEdit) {
    QTextCursor cursor = textEdit->textCursor();
    int cursorPosition = cursor.position();
    QTextBlock block = textEdit->document()->findBlock(cursorPosition);
    int lineNumber = block.firstLineNumber();

    return lineNumber;
}


void MainWindow::on_textEdit_textChanged()
{
    this->altered = true;
    this->setWindowTitle(this->unsaved_title);
    this->ui->textEdit->cursor();

    emit textEdit_textChanged(getCursorLineNumber(ui->textEdit), ui->textEdit->toPlainText());
}




void MainWindow::on_actionSave_triggered()
{
    if(this->altered == false){ //already everything is saved
        return;
    }


    if(this->file_path == ""){ //empty file_path is an indicator of 1st time saving file
        QString filter = "All Files(*.*);;Text Files(*.txt);;Rich Text Files(*.rtf);;html file (*.html)";
        this->file_path = QFileDialog::getSaveFileName(this, "Save", "D:/",filter);
    }

    bool is_success = false;

    if(this->file_path.split(".")[1] == "html"){
        is_success = this->write_file_as_html(this->file_path);
    }
    else if(this->file_path.split(".")[1] == "txt"){
        is_success = this->write_file_as_text(this->file_path);
    }

    if(is_success){
        this->setWindowTitle(this->saved_title);
        this->altered = false;
    }
    else{ //resetting file path since unable to save to given file path
        this->file_path = "";
    }

}

bool MainWindow::write_file_as_html(const QString& file_path){

    QFile file(file_path);
    qDebug()<<file_path;

    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::critical(this, "Error", "Unable to write to file : "+ file_path);
        return 0;
    }

    QTextStream stream(&file);
    stream << ui->textEdit->toHtml();
    stream.flush();
    file.close();
    return 1;
}

bool MainWindow::write_file_as_text(const QString& file_path){

    QFile file(file_path);
    qDebug()<<file_path;

    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::critical(this, "Error", "Unable to write to file : "+ file_path);
        return 0;
    }

    QTextStream stream(&file);
    stream << ui->textEdit->toPlainText();
    stream.flush();
    file.close();
    return 1;
}

void MainWindow::on_actionBold_triggered()
{
    ui->textEdit->setFontWeight(QFont::Bold);
}


void MainWindow::on_actionItalic_triggered()
{
    ui->textEdit->setFontItalic(true);
}


void MainWindow::on_actionFont_Size_triggered()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok, this);
    if(ok){
        //ui->textEdit->setFont(font);
        ui->textEdit->setFontPointSize(font.pointSize());
    }

}


void MainWindow::on_actionFont_Style_triggered()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok, this);
    if(ok){
        //ui->textEdit->setFont(font);
        ui->textEdit->setFontFamily(font.family());
    }
}



void MainWindow::on_actionFont_Color_triggered()
{
    QColor color = QColorDialog::getColor(Qt::black,this, "Text Color");
    ui->textEdit->setTextColor(color);
}


void MainWindow::on_actionBackgroud_Color_triggered()
{
    QColor color = QColorDialog::getColor(Qt::black, this, "Text Background Color");
    ui->textEdit->setTextBackgroundColor(color);
}


void MainWindow::on_actionPalette_Color_triggered()
{
    QPalette palette = ui->textEdit->palette();
    QColor color = QColorDialog::getColor(Qt::black, this, "Palette Color");
    palette.setColor(QPalette::Base, color);
    ui->textEdit->setPalette(palette);
}


void MainWindow::on_actionNew_triggered()
{
    this->wanna_save();
    this->reset();
    this->insertBackspace_afterChar();
}

void MainWindow::insertBackspace_afterChar(){ //used to press backspace so that newfile doesn't initially posess the font characteristics of the prev file

    ui->textEdit->insertPlainText("H");
    QTextCursor cursor = ui->textEdit->textCursor();
    cursor.deletePreviousChar();

}

void MainWindow::reset(){

    this->altered = false;
    ui->textEdit->clear();
    ui->textEdit->setFont(this->default_font);

}

void MainWindow::on_actionOpen_triggered()
{

    this->wanna_save();

    QString filter = "All Files(*.*) ;; Text Files(*.txt) ;; Rich Text Files(*.rtf) ;; html files(*.html)";
    QString file_name = QFileDialog::getOpenFileName(this, "Open", "D:/", filter);

    qDebug() << "filename is : "<<file_name << "\n";

    QFile file(file_name);

    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::critical(this, "Error", "Unable to open file");
        return;
    }

    QString content;
    QTextStream stream(&file);
    content = stream.readAll();

    ui->textEdit->setText(content);
    file.close();
}


void MainWindow::on_actionSave_As_triggered()
{

    QString filter = "All Files(*.*);;Text Files(*.txt);;Rich Text Files(*.rtf);;html file(*.html)";
    QString file_path= QFileDialog::getSaveFileName(this, "Save", "D:/",filter);

    bool is_success = false;

    if(this->file_path.split(".")[1] == "html"){
        is_success = this->write_file_as_html(this->file_path);
    }
    else if(this->file_path.split(".")[1] == "txt"){
        is_success = this->write_file_as_text(this->file_path);
    }

    if(is_success){
        this->setWindowTitle(this->saved_title);
        this->altered = false;
        this->file_path = file_path;
    }

}


void MainWindow::on_actionSelect_All_triggered()
{
    ui->textEdit->selectAll();
}


void MainWindow::on_actionFind_triggered()
{
    FindDialog *find_dialog = new FindDialog(this, ui->textEdit->toPlainText());
    find_dialog->setWindowTitle("Find");

    QObject::connect(this, MainWindow::textEdit_textChanged, find_dialog, FindDialog::update_find_dialogData_perLine);
    QObject::connect(find_dialog, FindDialog::update_and_highlight, this, MainWindow::update_and_highlight);
    QObject::connect(find_dialog, FindDialog::putCursor, this, MainWindow::putCursor);
    QObject::connect(find_dialog, FindDialog::reset_highlights, this, MainWindow::reset_find_highlight);
    find_dialog->show();
    //find_dialog->exec();

}


void MainWindow::update_and_highlight(std::map<int, std::vector<std::pair<int,int>>>findDialog_data){



    qDebug() << "update and highlight trigerred\n";

    /*
    //update findDialog_data
    this->findDialog_data = findDialog_data;

    //remove all prev highlights by simulating a mouse click
    QTextCursor cursor = ui->textEdit->textCursor();
    QRect cursorRect = ui->textEdit->cursorRect(cursor);
    QPoint clickPosition = cursorRect.center();
    QMouseEvent clickEvent(QEvent::MouseButtonPress, clickPosition, Qt::LeftButton, Qt::LeftButton, Qt::NoModifier);
    QApplication::sendEvent(ui->textEdit->viewport(), &clickEvent);

    //highlight new texts
    cursor.movePosition(QTextCursor::Start);
    int cur_line = 0;
    for(auto it:findDialog_data){\

        int lineNumber = it.first;
        for(int i=lineNumber-cur_line;i<lineNumber;i++){
            cursor.movePosition(QTextCursor::Down);
            cur_line+=1;
        }

        std::vector<std::pair<int,int>>pos;
        for(int i=0;i<pos.size();i++){

            int colNumber = pos[i].first;
            int length = pos[i].second+1;

            cursor.movePosition(QTextCursor::Right, QTextCursor::MoveAnchor, colNumber);
            cursor.movePosition(QTextCursor::Right, QTextCursor::KeepAnchor, length);
        }

    }

    ui->textEdit->setTextCursor(cursor);
    */


    std::vector<QTextCursor>cursors;
    QTextCharFormat fmt;
    fmt.setBackground(Qt::gray);
    QList<QTextEdit::ExtraSelection> extraSelections = ui->textEdit->extraSelections();

    for(auto it:findDialog_data){

        for(int i=0;i<int(it.second.size());i++)
        {

            //qDebug() << "executed : "<<i<<"\n";
            int lineNumber = it.first;
            int columnNumber = it.second[i].first;
            int length = it.second[i].second - it.second[i].first + 1;

            /*
            QTextCursor cursor = ui->textEdit->textCursor();
            cursor.setPosition(QTextCursor::Start);

            //move the vertcal position
            for(int j=0;j<lineNumber;j++){
                cursor.movePosition(QTextCursor::Down);
            }

            //move horizontally
            cursor.movePosition(QTextCursor::Right, QTextCursor::MoveAnchor, columnNumber-2);
            cursor.movePosition(QTextCursor::Right, QTextCursor::KeepAnchor, length);
            //cursor.setPosition(columnNumber+length, QTextCursor::KeepAnchor);

            //set highlight color
            cursor.setCharFormat(fmt);
            cursors.push_back(cursor);
            */







            QTextDocument* document = ui->textEdit->document();
            QTextBlock block = document->findBlockByLineNumber(lineNumber);



            int blockTextLength = block.text().length();
            if (columnNumber >= blockTextLength) {
                qDebug() << "Column number is out of range for line" << lineNumber <<", len is : "<<columnNumber;
                continue;
            }

            // Ensure the length does not exceed the remaining characters in the line
            length = std::min(length, blockTextLength - columnNumber);

            int startPos = block.position() + columnNumber;
            int endPos = startPos + length;

            if (startPos >= document->characterCount() || endPos > document->characterCount()) {
                qDebug() << "Invalid start or end position";
                continue;
            }



            if (!block.isValid()) {
                qDebug() << "Invalid block at line" << lineNumber;
                continue;
            }


            QTextCursor cursor(document);
            cursor.setPosition(startPos);
            cursor.movePosition(QTextCursor::Right, QTextCursor::KeepAnchor, length);

            QTextEdit::ExtraSelection highlight;
            highlight.cursor = cursor;
            highlight.format.setBackground(Qt::gray);  // You can set any color you want


            extraSelections.append(highlight);

            //ui->textEdit->setExtraSelections(extraSelections);
        }
    }

    ui->textEdit->setExtraSelections(extraSelections);


}


void MainWindow::putCursor(QString reference){

    qDebug() << "putCursor trigerred\n";
    int lineNumber=0, columnNumber;

    QTextCursor cursor = ui->textEdit->textCursor();
    QTextBlock block = ui->textEdit->document()->begin();
    while(block.isValid() && block!=cursor.block()){
        lineNumber++;
    }
    columnNumber = cursor.positionInBlock();

    if(reference.toLower() == "next"){
        if(this->findDialog_data.find(lineNumber)!=this->findDialog_data.end()){
            //find the next key
        }
        else{
            //find the ceiling key
        }

    }
    else{
        if(this->findDialog_data.find(lineNumber)!=this->findDialog_data.end()){
            //find the prev key

        }
        else{
            //find the floor key
        }
    }




    cursor.movePosition(QTextCursor::Start);
    for(int i=0;i<lineNumber;i++){
        cursor.movePosition(QTextCursor::Down);
    }
    cursor.movePosition(QTextCursor::Right, QTextCursor::KeepAnchor, columnNumber);
    ui->textEdit->setTextCursor(cursor);
}


void MainWindow::reset_find_highlight(){

    /*
    QTextCursor cursor = ui->textEdit->textCursor();

    cursor.select(QTextCursor::Document);

    QTextCharFormat fmt;
    fmt.setBackground(Qt::white);
    cursor.setCharFormat(fmt);
    */

    QList<QTextEdit::ExtraSelection>extraSelection = ui->textEdit->extraSelections();

    QTextCursor cursor(ui->textEdit->document());
    cursor.select(QTextCursor::Document);

    QTextEdit::ExtraSelection highlight;
    highlight.cursor = cursor;
    highlight.format.setBackground(Qt::white);

    extraSelection.append(highlight);
    ui->textEdit->setExtraSelections(extraSelection);
}

void delay(int milliseconds) {
    QEventLoop loop;
    QTimer::singleShot(milliseconds, &loop, &QEventLoop::quit);
    loop.exec();
}

void MainWindow::scroll(int speed){
    ui->textEdit->set_interrupt_scroll(false);
    //ui->textEdit->verticalScrollBar();
    QScrollBar* barV = ui->textEdit->verticalScrollBar();

    for(int i=0;i<100000;i++){

        barV->setValue(barV->value() + 1);
        delay(speed);
        if(ui->textEdit->get_interrupt_scroll() == true){
            break;
        }
    }

}
void MainWindow::on_actionScroll_triggered()
{
    ui->textEdit->set_interrupt_scroll(true);
    scroll(5);
}


void MainWindow::on_actionx1_triggered()
{
    ui->textEdit->set_interrupt_scroll(true);
    scroll(50);
}


void MainWindow::on_actionx2_triggered()
{
    ui->textEdit->set_interrupt_scroll(true);
    scroll(25);
}


void MainWindow::on_actionx3_triggered()
{
    ui->textEdit->set_interrupt_scroll(true);
    scroll(13);
}


void MainWindow::on_actionx4_triggered()
{
    ui->textEdit->set_interrupt_scroll(true);
    scroll(7);
}


void MainWindow::on_actionx5_triggered()
{
    ui->textEdit->set_interrupt_scroll(true);
    scroll(4);
}


void MainWindow::on_actionx10_triggered()
{
    ui->textEdit->set_interrupt_scroll(true);
    scroll(2);
}



/*
void MainWindow::on_actionsample_triggered()
{
    QStringList args = {"D:/sample.py"};
    QProcess p;
    p.start("python", args);
    p.waitForFinished();
}
*/

void MainWindow::on_actionChat_triggered()
{
    Chat* chatWindow = new Chat();
    chatWindow->setWindowTitle("Chat");
    chatWindow->setWindowIcon(QIcon(":/icons/Resources/icons/chat.png"));
    chatWindow->show();
}

