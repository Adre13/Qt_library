#ifndef ADD_BOOK_DIALOG_H
#define ADD_BOOK_DIALOG_H

#include <QDialog>

namespace Ui {
class add_book_dialog;
}

class add_book_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit add_book_dialog(QWidget *parent = nullptr);
    ~add_book_dialog();

    QString getWriter() const;
    QString getBookName() const;

private slots:
    void on_pushButton_ok_clicked();

private:
    Ui::add_book_dialog *ui;
};

#endif // ADD_BOOK_DIALOG_H
