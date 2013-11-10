#include "search.h"

Search::Search()
{
}

Search::~Search()
{
}

void Search::SetCh(const QString &ch_val)
{
    ch = ch_val;
}

void Search::SetPresent(const QString &pr_val)
{
    present = pr_val;
}

void Search::SetFirm(const QString &firm_val)
{
    firm = firm_val;
}

void Search::SetModel(const QString &model_val)
{
    model = model_val;
}

void Search::SetPower(const int &power_val)
{
    power = power_val;
}

void Search::SetYears(const int &start, const int &stop)
{
    start_year = start;
    stop_year = stop;
}

void Search::SetPrice(const int &start, const int &stop)
{
    start_price = start;
    stop_price = stop;
}

int Search::GetPower() const
{
    return power;
}

QString Search::GetSearchQuery()
{
    QString query;
    if (!start_price) start_price = 1;
    if (!stop_price) stop_price = MAX_PRICE;
    if (firm == "" && model == "")
        query = "select * from general_car_info where power "+ ch +
                QString::number(power) + " and year >= " + QString::number(start_year) + " and year <= " + QString::number(stop_year)
                + " and price >= " + QString::number(start_price) + "and price <= " + QString::number(stop_price) + " and present = \'" +
                present + "\'";
    else
        if (firm == "" && model != "")
            query = "select * from general_car_info where model = \'" + model + "\' and power "+ ch +
                     QString::number(power) + " and year >= " + QString::number(start_year) + " and year <= " + QString::number(stop_year)
                    + " and price >= " + QString::number(start_price) + " and price <= " + QString::number(stop_price) + " and present = \'" +
                    present + "\'";
         else
            if (firm != "" && model == "")
                query = "select * from general_car_info where firm = \'" + firm + "\' and power "+ ch +
                         QString::number(power) + " and year >= " + QString::number(start_year) + " and year <= " + QString::number(stop_year)
                        + " and price >= " + QString::number(start_price) + " and price <= " + QString::number(stop_price) + " and present = \'" +
                        present + "\'";
             else
                query = "select * from general_car_info where firm = \'" + firm + "\' and model = \'" + model + "\' and power "+ ch +
                        QString::number(power) + " and year >= " + QString::number(start_year) + " and year <= " + QString::number(stop_year) + " and price >= " +
                        QString::number(start_price) + " and price <= " + QString::number(stop_price) + " and present = \'" +
                        present + "\'";
    return query;
}


