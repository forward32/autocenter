#ifndef DETAILS_SEARCH_H
#define DETAILS_SEARCH_H

#include <QString>
#include "base_name.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QTableView>

class SearchDetail
{
public:
    SearchDetail();
    ~SearchDetail() {}
    SearchDetail(const QString &_name, const QString &_firm, const QString &_type, const int &_pr):
        name(_name), firm(_firm), type(_type), price(_pr) {}
    QString GetName() const;
    QString GetFirm() const;
    QString GetType() const;
    int GetPrice() const;

    void SetName(const QString &_name);
    void SetFirm(const QString &_firm);
    void SetType(const QString &_type);
    void SetPrice(const int &_pr);

    void SearchDetails(QTableView *tbl);
private:
    QString name, firm, type;
    int price;
};

#endif // DETAILS_SEARCH_H
