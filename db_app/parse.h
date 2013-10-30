#ifndef DATA_H
#define DATA_H

#include <QtSql/QSqlQuery>
#include <QString>

class Parse
{
public:
    Parse();
    ~Parse();
    QString ParseDataFull(QSqlQuery *query);
    QString AllData(QSqlQuery *query);
};

#endif // DATA_H


