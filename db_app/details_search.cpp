#include "details_search.h"
#include <QtSql/QSqlQueryModel>

SearchDetail::SearchDetail()
{
    name = "";
    firm = "";
    type = "";
    price = -1;
}

QString SearchDetail::GetName() const
{
    return name;
}

QString SearchDetail::GetFirm() const
{
    return firm;
}

QString SearchDetail::GetType() const
{
    return type;
}

int SearchDetail::GetPrice() const
{
    return price;
}

void SearchDetail::SetName(const QString &_name)
{
    name = _name;
}

void SearchDetail::SetFirm(const QString &_firm)
{
    firm = _firm;
}

void SearchDetail::SetType(const QString &_type)
{
    type = _type;
}

void SearchDetail::SetPrice(const int &_pr)
{
    price = _pr;
}

void SearchDetail::SearchDetails(QTableView *tbl)
{
    QString str = "select * from details_info where ";
    if (!name.isEmpty())
        str += " name = \'" + name + "\' and ";
    if (!firm.isEmpty())
        str += " firm = \'" + firm + "\' and ";
    if (!type.isEmpty())
        str += " type = \'" + type + "\' and ";
    if (price > 0 )
        str += " price = " + QString::number(price);
    else
        str += " price > 0";

    QSqlQueryModel *mdl =  (QSqlQueryModel *)tbl->model();
    mdl->setQuery(str, QSqlDatabase::database(work_base));
}
