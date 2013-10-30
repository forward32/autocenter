#ifndef START_FILLING_TABLE_H
#define START_FILLING_TABLE_H

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlQueryModel>
#include <QTableView>
#include <QString>
#include "base_name.h"

class Filling
{
public:
    static void FillTable(QTableView *tbl, std::vector<std::string> &vec, const QString &query)
    {
        QSqlQueryModel *queryModel = new QSqlQueryModel();
        tbl->setModel(queryModel);
        queryModel->setQuery(query, QSqlDatabase::database(work_base));
        std::vector<std::string>::iterator iter = vec.begin();
        for (int i = 0; iter != vec.end(); ++iter, ++i)
            queryModel->setHeaderData(i, Qt::Horizontal, QString::fromStdString(*iter));
    }

    static int GetCount(const QString &tbl_name)
    {
        QSqlQuery get_count(QSqlDatabase::database(work_base));
        get_count.exec("select COUNT(id) from " + tbl_name);
        get_count.next();
        if (get_count.isValid())
            return get_count.value(0).toInt();
        else
            return -1;
    }
};



#endif // START_FILLING_TABLE_H
