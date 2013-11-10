#include "add_detail.h"
#include "ui_add_detail.h"
#include <QMessageBox>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include "base_name.h"
#include <QSqlError>

add_detail::add_detail(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::add_detail)
{
    ui->setupUi(this);
}

add_detail::~add_detail()
{
    delete ui;
}

void add_detail::on_btn_exit_clicked()
{
    this->close();
}

void add_detail::on_btn_apply_clicked()
{
    try
    {
        std::vector<QString> vec;
        vec.push_back(ui->edt_name->text());
        vec.push_back(ui->edt_firm->text());
        vec.push_back(ui->edt_type->text());
        vec.push_back(ui->edt_price->text());
        vec.push_back(ui->text_info->toPlainText());
        if (vec[0] == "" || vec[1] == "" || vec[2] == "" || vec[3] == "" || vec[4] == "")
            throw("Ошибка ввода данных. Проверьте правильность ввода и заполните все поля");

        if (ui->btn_apply->text() == "Изменить")
        {
            QString str = "update details_info set name = '" + vec[0] + "', firm = '" + vec[1] + "', type = '" +
                    vec[2] + "', price = " + vec[3] + ", info = '" + vec[4] + "' where id = " + QString::number(_id);
            QSqlQuery *qr = new QSqlQuery(QSqlDatabase::database(work_base));
            if(!qr->exec(str))
            {
                delete qr;
                throw qr->lastError().text().toStdString().c_str();
            }
            delete qr;
            QMessageBox::information(this, "OK", "Запись изменена.");
        }
        else
            if (ui->btn_apply->text() == "Добавить")
            {
                QString str = "insert into details_info (name, price, firm, type, info) values('" + vec[0] + "', " +vec[3] + ", '" + vec[1] + "', '" +
                        vec[2] + "','" + vec[4] +"')";
                QSqlQuery *qr = new QSqlQuery(QSqlDatabase::database(work_base));
                if(!qr->exec(str))
                {
                    delete qr;
                    throw qr->lastError().text().toStdString().c_str();
                }
                delete qr;
                QMessageBox::information(this, "OK", "Запись успешно добавлена в базу.");
            }
    }
    catch(const char *str_err)
    {
        QMessageBox::critical(this, tr("Oшибка"), str_err);
    }
}

void add_detail::SetParmsOnForm(const std::vector<QString> &vec, const int &id)
{
    if (vec.size() != 5)
        throw ("Ошибка. Количество параметров не равно 5.");
    ui->edt_name->setText(vec[0]);
    ui->edt_price->setText(vec[1]);
    ui->edt_firm->setText(vec[2]);
    ui->edt_type->setText(vec[3]);
    ui->text_info->setText(vec[4]);
    ui->btn_apply->setText("Изменить");
    _id = id;
}
