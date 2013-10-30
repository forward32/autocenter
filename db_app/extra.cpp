#include "extra.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include "base_name.h"

Extra::Extra()
{
    id = -1;
}

Extra::Extra(const int & id_val)
{
    id = id_val;
}

Extra::~Extra()
{

}

QString Extra::GetFullCarData() const
{
    QString res = "select body_type, drive_type, rudder_type, color, condition_type, conditioner, tv, navigation, outgo from full_car_info where id_gen_car = " + QString::number(id);
    return res;
}

QString Extra::GetGenerallCarData() const
 {
     QString res = "select firm, model, year, power, eng_type from general_car_info where id = " + QString::number(id);
     return res;
 }

void Extra::DeleteRecord(const QString &table_name, const QString &what,  const int &id) const
{
    QString str = "delete from " + table_name + " where " + what + "=" + QString::number(id);
    QSqlQuery *qr = new QSqlQuery(str, QSqlDatabase::database(work_base));
    qr->exec();
    delete qr;
}
