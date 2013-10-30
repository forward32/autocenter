#ifndef ADD_H
#define ADD_H

#include <QString>

class Add
{
public:
    Add();
    ~Add();

    bool TrueOrFalse(const QString &_val);
    QString GetLineForGeneralTable(const int &id);
    QString GetLineForFullTable(const int &id, const int &key);

        // Set values
    void SetName(const QString &firm_val, const QString &model_val);
    void SetEngine(const QString &eng_val);
    void SetBody(const QString &body_val);
    void SetRudder(const QString &rud_val);
    void SetColor(const QString &color_val);
    void SetDrive(const QString &drive_val);
    void SetCondition(const QString &condition_val);
    void SetPrice(const double &price_val);
    void SetYear(const int &year_val);
    void SetOutgo(const double &outgo_val);
    void SetPower(const int &power_val);
    void SetExtraParam(const QString &conder_val, const QString &tv_val, const QString &navig_val);
    void SetPresent(const QString &pr_val);

        // Get values
    QString GetFirm() const;
    QString GetModel() const;
    QString GetColor() const;
    int GetPower() const;
    int GetPrice() const;
    int GetYear() const;
    double GetOutgo() const;
    QString GetEngine() const;
    QString GetPresent() const;
    QString GetBody() const;
    QString GetDrive() const;
    QString GetRudder() const;
    QString GetCondition() const;
    QString GetCond() const;
    QString GetTV() const;
    QString GetNavigation() const;

private:
    QString firm, model, engine, body, rudder, color, drive, condition, present;
    double outgo;
    int power, year, price;
    bool cond, tv, navig;
};

#endif // ADD_H
