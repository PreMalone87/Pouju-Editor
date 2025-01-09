#include "MyTextEdit.h"

MyTextEdit::MyTextEdit(QWidget* parent):QTextEdit(parent){
    this->interrupt_scroll = true; //anchoring the scroll bar
    qDebug() << "my text edit created";
}

void MyTextEdit::mouseDoubleClickEvent(QMouseEvent* event){
    this->interrupt_scroll = true;
}

bool MyTextEdit::get_interrupt_scroll(){
    return this->interrupt_scroll;
}

bool MyTextEdit::set_interrupt_scroll(bool scroll_value){
    this->interrupt_scroll = scroll_value;
}

void MyTextEdit::keyPressEvent(QKeyEvent* event){

    qDebug()<<event->key() << " "<< Qt::Key_Enter;
    if(event->key() == Qt::Key_Enter || event->key() == Qt::Key_Return){
        qDebug() << "enter pressed\n";
        emit this->my_chat_enter_pressed();
    }
    QTextEdit::keyPressEvent(event);

}
