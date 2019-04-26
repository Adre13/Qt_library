#ifndef LIBRARY_DATA_H
#define LIBRARY_DATA_H
#include <QtWidgets>


class library_data
{
private:

    QStringList temp_list;
    QList<QStringList> book_list;
    int ID = 1;

    bool write_book_to_file(const QString& book);

public:
    explicit library_data(int value);
    int getRowCount();
    int getColumnCount();
    QVariant getData(int row, int column);

    bool add_book(const QString &t_book);
};

#endif // LIBRARY_DATA_H
