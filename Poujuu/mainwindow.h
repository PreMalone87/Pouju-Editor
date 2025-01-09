#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool write_file_as_html(const QString& file_path);
    bool write_file_as_text(const QString& file_path);
    void wanna_save();
    void insertBackspace_afterChar();


private slots:

    void on_textEdit_textChanged();

    void on_actionSave_triggered();

    void on_actionBold_triggered();

    void on_actionItalic_triggered();

    void on_actionFont_Size_triggered();

    void on_actionFont_Style_triggered();

    void on_actionFont_Color_triggered();

    void on_actionBackgroud_Color_triggered();

    void on_actionPalette_Color_triggered();

    void on_actionNew_triggered();

    void reset();

    void on_actionOpen_triggered();

    void on_actionSave_As_triggered();

    void on_actionSelect_All_triggered();

    void on_actionFind_triggered();

    //updates findDialog_Data, removes all the previous highlights, uses findDialog_data to highlight again
    void update_and_highlight(std::map<int, std::vector<std::pair<int,int>>>findDialog_data);

    //highlights
    void putCursor(QString);

    void reset_find_highlight();

    void on_actionScroll_triggered();

    void on_actionx1_triggered();

    void on_actionx2_triggered();

    void on_actionx3_triggered();

    void on_actionx4_triggered();

    void on_actionx5_triggered();

    void on_actionx10_triggered();



    //void on_actionsample_triggered();

    void on_actionChat_triggered();

signals:

    void change_title();
    void textEdit_textChanged(int linenumber, QString str);

private:

    std::map<int, std::vector<std::pair<int,int>>>findDialog_data;
    Ui::MainWindow *ui;
    QString unsaved_title = "*Pouju Editor";
    QString saved_title = "Pouju Editor";
    bool altered = false;
    QString file_path;
    QFont default_font;
    void scroll(int speed =10);
    bool interrupt_scroll = 0;



};

#endif // MAINWINDOW_H
