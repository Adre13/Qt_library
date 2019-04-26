#include "add_book_dialog.h"
#include "ui_add_book_dialog.h"
#include "mainwindow.h"
#include <iostream>
#include "tablemodel.h"

add_book_dialog::add_book_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_book_dialog)
{
    ui->setupUi(this);
}

add_book_dialog::~add_book_dialog()
{
    delete ui;
}

QString add_book_dialog::getWriter() const
{
    return ui->writer_line_edit->text();
}

QString add_book_dialog::getBookName() const
{
    return ui->book_name_line_edit_2->text();
}

void add_book_dialog::on_pushButton_ok_clicked()
{

}
