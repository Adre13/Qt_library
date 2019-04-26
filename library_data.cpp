#include "library_data.h"
#include <iostream>

bool library_data::write_book_to_file(const QString& book)
{
    QFile file("/home/max/Qt_progects/library_4/books.txt");
    if(!file.open(QFile::WriteOnly| QFile::Append))
        return false;
    file.write(book.toUtf8());
    file.close();
    return true;
}

library_data::library_data(int value) //TODO create load users data
{
    QFile file("/home/max/Qt_progects/library_2/books.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        return;
    }
    temp_list = QString(file.readAll()).split("\n");
    file.close();
    temp_list.pop_back();
    QStringList::iterator iter;
    for( iter = temp_list.begin(); iter != temp_list.end(); iter++)
    {
        book_list.push_back(iter->split(" | "));
    }
    for(auto i = 0; i < book_list.size(); i++)
    {
        if(book_list[i][0].toInt() >= this->ID)
        {
            this->ID = book_list[i][0].toInt() + 1;
        }
    }
}

int library_data::getRowCount()
{
    return book_list.size();
}

int library_data::getColumnCount()
{
    if(!book_list[0].isEmpty())
        return book_list[0].size();
    return 0;
}

QVariant library_data::getData(int row, int column)
{
    return book_list[row][column];
}

bool library_data::add_book(const QString &t_book)
{
    int size = book_list.size();
    QString book = QString::number(ID++);
    book += " | " + t_book + "1\n";
    book_list.push_back(book.split(" | "));
    return (size + 1 == book_list.size() && write_book_to_file(book));
}
