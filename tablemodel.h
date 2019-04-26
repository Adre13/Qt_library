#ifndef TABLEMODEL_H
#define TABLEMODEL_H

#include <QtWidgets>
#include "library_data.h"
#include "add_book_dialog.h"

class TableModel : public QAbstractTableModel
{
private:
    Q_OBJECT
    library_data* lib_data;

public:

    explicit TableModel(QObject *parent = nullptr);
    int rowCount(const QModelIndex&) const override;
    int columnCount(const QModelIndex&) const override;
    QVariant data(const QModelIndex& index, int role) const override;
    bool setData(const QModelIndex& index, const QVariant& value, int role) override;

    bool add_book();


};

#endif // TABLEMODEL_H
