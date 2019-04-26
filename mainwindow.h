#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "tablemodel.h"
#include "add_book_dialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
private:
    Q_OBJECT

    TableModel* book_modal;
    Ui::MainWindow *ui;

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void test_method();

private slots:
    void on_button_show_book_clicked();

    void on_button_add_book_clicked();

};

#endif // MAINWINDOW_H
