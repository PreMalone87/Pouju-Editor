#ifndef MYTEXTEDIT_H
#define MYTEXTEDIT_H

#include<QTextEdit>
#include<QMouseEvent>

class MyTextEdit: public QTextEdit{

    Q_OBJECT

public:

    MyTextEdit(QWidget* parent = nullptr);
    //~MyTextEdit();
    bool get_interrupt_scroll();
    bool set_interrupt_scroll(bool scroll_value);
protected:

    void mouseDoubleClickEvent(QMouseEvent* event);
    void keyPressEvent(QKeyEvent* event);
private:

    bool interrupt_scroll;


signals:
    void my_chat_enter_pressed();
};

#endif // MYTEXTEDIT_H
