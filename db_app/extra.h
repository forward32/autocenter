#ifndef EXTRA_H
#define EXTRA_H

#include <QString>
#include "parse.h"

class Extra
{
public:
    Extra();
    Extra(const int &);
    ~Extra();

    QString GetFullCarData() const;
    QString GetGenerallCarData() const;
    void DeleteRecord(const QString &table_name, const QString &what,  const int &id) const;

private:
    int id;
};

#endif // EXTRA_H
