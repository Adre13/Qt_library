#include "tablemodel.h"

TableModel::TableModel(QObject *parent) : QAbstractTableModel(parent)
{
    lib_data = new library_data(0);
}

int TableModel::rowCount(const QModelIndex &) const
{
    return lib_data->getRowCount();
}

int TableModel::columnCount(const QModelIndex &) const
{
    return lib_data->getColumnCount();
}

QVariant TableModel::data(const QModelIndex & index, int role) const
{
    if(index.isValid() && role == Qt::DisplayRole)
        return lib_data->getData(index.row(), index.column());
    return QVariant();
}

bool TableModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    //TODO
}

bool TableModel::add_book()
{
    QString t_book;
    add_book_dialog add_book;
    add_book.setModal(true);
    //add_book.exec();
    if(add_book.exec() == QDialogButtonBox::Ok)
    {
        t_book += add_book.getWriter() + " | " + add_book.getBookName() + " | ";
    }
    if(lib_data->add_book(t_book))
    {
        QMessageBox::information(nullptr, "Information", "Operation Complete");

        return true;

    }else
    {
        QMessageBox::warning(nullptr, "Warning", "Something was wrong\n the book was not added!");
        return false;
    }
}
