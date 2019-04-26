#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button_show_book_clicked()
{
    book_modal = new TableModel(this);
    ui->tableView->setModel(book_modal);
}

void MainWindow::on_button_add_book_clicked()
{
    book_modal->add_book();
//    if(book_modal->add_book())
//    {
//        book_modal = new TableModel(this);    //TODO call show_book_button !?
//        ui->tableView->setModel(book_modal);
//    }
}

