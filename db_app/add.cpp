#include "add.h"

Add::Add()
{
}

Add::~Add()
{
}

void Add::SetName(const QString &firm_val, const QString &model_val)
{
    firm = firm_val;
    model = model_val;
}


void Add::SetPresent(const QString &pr_val)
{
    present = pr_val;
}

void Add::SetColor(const QString &color_val)
{
    color = color_val;
}

void Add::SetBody(const QString &body_val)
{
    body = body_val;
}

void Add::SetCondition(const QString &condition_val)
{
    condition = condition_val;
}

QString Add::GetLineForGeneralTable()
{
    QString result = "insert into general_car_info (firm, model, year, power, price, eng_type, present) values ('"+
            firm +"\', \'" + model + "\', " + QString::number(year)+ ", " + QString::number(power) + ", "
            + QString::number(price) + ", \'" + engine + "\', \'" + present + "\')";
    return result;
}

QString Add::GetLineForFullTable(const int &key)
{
    QString result = "insert into full_car_info (id_gen_car, body_type, drive_type, rudder_type, color, condition_type, conditioner, tv, navigation, outgo) values ("+
            QString::number(key) + ",'" + body + "', '" + drive + "', '" +
            rudder + "', '" + color + "', '" + condition + "', '" + cond + "','"+tv + "', '"
            + navig + "', " + QString::number(outgo) + ")";
    return result;
}

void Add::SetDrive(const QString &drive_val)
{
    drive = drive_val;
}

void Add::SetEngine(const QString &eng_val)
{
    engine = eng_val;
}

void Add::SetOutgo(const double &outgo_val)
{
    outgo = outgo_val;
}

void Add::SetPower(const int &power_val)
{
    power =power_val;
}

void Add::SetPrice(const double &price_val)
{
    price = price_val;
}

void Add::SetRudder(const QString &rud_val)
{
    rudder = rud_val;
}

void Add::SetYear(const int &year_val)
{
    year = year_val;
}

void Add::SetExtraParam(const QString &conder_val, const QString &tv_val, const QString &navig_val)
{
    cond = conder_val;
    navig = navig_val;
    tv = tv_val;
}

bool Add::TrueOrFalse(const QString &_val)
{
    return _val == "Yes" ? true:false;
}

QString Add::GetFirm() const
{
    return firm;
}

QString Add::GetModel() const
{
    return model;
}

QString Add::GetColor() const
{
    return color;
}

int Add::GetYear() const
{
    return year;
}

int Add::GetPower() const
{
    return power;
}

int Add::GetPrice() const
{
    return price;
}

double Add::GetOutgo() const
{
    return outgo;
}

QString Add::GetEngine() const
{
    return engine;
}

QString Add::GetPresent() const
{
    return present;
}

QString Add::GetBody() const
{
    return body;
}

QString Add::GetDrive() const
{
    return drive;
}

QString Add::GetRudder() const
{
    return rudder;
}

QString Add::GetCondition() const
{
    return condition;
}

QString Add::GetCond() const
{
    return cond;
}

QString Add::GetTV() const
{
    return tv;
}

QString Add::GetNavigation() const
{
    return navig;
}
