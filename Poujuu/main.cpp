#include "mainwindow.h"
#include<QObject>
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;    

    w.setWindowTitle("Poujuu Editor");
    w.setWindowIcon(QIcon(":/icons/Resources/icons/cry2.jfif"));

    w.show();
    return a.exec();
}
