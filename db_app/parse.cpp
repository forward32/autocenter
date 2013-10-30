#include "parse.h"
#include <QVariant>

Parse::Parse(){}

Parse::~Parse(){}

QString Parse::ParseDataFull(QSqlQuery *query)
{
    QString str;

    while(query->next())
        str = "<<Полная характеристика выбранного автомобиля>>\n\n -Кузов автомобиля: " + query->value(0).toString() +
                "\n\n -Привод: " + query->value(1).toString() + "\n\n -Руль: " + query->value(2).toString() + "\n\n -Цвет кузова: " +
                query->value(3).toString() + "\n\n -Состояние автомобиля: " + query->value(4).toString() + "\n\n -Наличие кондиционера: " +
                query->value(5).toString() + "\n\n -Наличие TV: " + query->value(6).toString() + "\n\n -Наличие навигации: " +
                query->value(7).toString() + "\n\n -Расход топлива (л/100км) : " + query->value(8).toString();

    return str;
}

QString Parse::AllData(QSqlQuery *query)
{
    QString str;

    while (query->next())
        str = "<<Краткая характеристика выбранного автомобиля>>\n\n -Марка автомобиля: " + query->value(0).toString() +
                "\n\n -Модель автомобиля: " + query->value(1).toString() + "\n\n -Год выпуска: " + query->value(2).toString() +
                "\n\n -Мощность двигателя: " + query->value(3).toString() + "\n\n -Тип двигателя: " + query->value(4).toString() +"\n\n";

    return str;
}
