#ifndef SEARCH_H
#define SEARCH_H

#define MAX_PRICE 999000000

#include <QString>
#include <QMessageBox>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlQueryModel>

class Search
{
public:
    Search();
    ~Search();
    QString GetSearchQuery();

        // Set values for parametrs
    void SetFirm(const QString &firm_val);
    void SetModel(const QString &model_val);
    void SetCh(const QString &ch_val = "<=");
    void SetPower(const int &power_val = 50);
    void SetYears(const int &start = 1920, const int &stop = 2013);
    void SetPrice(const int &start = 1, const int &stop = MAX_PRICE);
    void SetPresent(const QString &pr_val);
        //Get values from parametrs
    int GetPower() const;

private:
    QString firm, model, ch, present;
    int power, start_year, stop_year, start_price, stop_price;
};

#endif // SEARCH_H
