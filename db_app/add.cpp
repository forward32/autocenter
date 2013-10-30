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

QString Add::GetLineForGeneralTable(const int &id)
{
    QString result = "insert into general_car_info values (" + QString::number(id) + ", \""+ firm +"\", \"" + model + "\", " + QString::number(year)+
            ", " + QString::number(power) + ", " + QString::number(price) + ", \"" + engine + "\", \"" + present + "\")";
    return result;
}

QString Add::GetLineForFullTable(const int &id, const int &key)
{
    QString result = "insert into full_car_info values (" + QString::number(id) + "," + QString::number(key) + ", \"" + body + "\", \"" + drive + "\", \"" +
            rudder + "\", \"" + color + "\", \"" + condition + "\", " + QString::number(cond) + ", " + QString::number(tv) + ", " +
            QString::number(navig) + ", " + QString::number(outgo) + ")";
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
    bool flag = TrueOrFalse(conder_val);
    if (flag) cond = 1; else cond = 0;
    flag = TrueOrFalse(tv_val);
    if (flag) tv = 1; else tv = 0;
    flag = TrueOrFalse(navig_val);
    if (flag) navig = 1; else navig = 0;
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
    return cond == true ? "1":"0";
}

QString Add::GetTV() const
{
    return tv == true ? "1":"0";
}

QString Add::GetNavigation() const
{
    return navig == true ? "1":"0";
}
