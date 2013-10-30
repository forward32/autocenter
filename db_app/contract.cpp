#include "contract.h"
#include "ui_contract.h"
#include <QMessageBox>

contract::contract(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::contract)
{
    ui->setupUi(this);
}

void contract::NewShowCar(MainWindow *win_val)
{
    win = win_val;
    show();
}


void contract::NewShowDetail(MainWindow *win_val,const int &id, const QString &_name, const QString &_surname)
{
    win = win_val;
    id_detail = id;
    name = _name;
    surname = _surname;
    show();
}

contract::~contract()
{
    delete ui;
}

void contract::on_btn_exit_clicked()
{
    close();
}

void contract::on_btn_docontract_clicked()
{
    if (ui->edt_name->text() == "" || ui->edt_otch->text() == "" ||
            ui->edt_surname->text() == "")
    {       
        QMessageBox::critical(this, "Ошибка", "Ошибка при составлении контракта, заполните все поля и повторите попытку.");
        return;
    }

    QString person_data = ui->sb_day_person->text() + "." + ui->sb_mnt_person->text() + "." + ui->sb_year_person->text();
    QString sale_data = ui->sb_day_sale->text() + "." + ui->sb_mnt_sale->text() + "." + ui->sb_year_sale->text();


    bool good = true;
    if (!flag)
    {
        win->FillData(ui->edt_name->text(), ui->edt_otch->text(), ui->edt_surname->text(), person_data, sale_data, "sales_car", "car_", "sale_number");
        good = win->CreateContractFile();
    }
    else
    {
        win->SetSellerData(name, surname);
        win->FillData(ui->edt_name->text(), ui->edt_otch->text(), ui->edt_surname->text(), person_data, sale_data, "sales_detail", "detail_", "id");
        win->SetCountForDetail(count_for_detail);
        good = win->CreateDetailFile(id_detail);
    }

    if (good)
        QMessageBox::information(this, "Ок", "Конракт " + win->GetFname() + " успешно создан.");
}


void contract::SetCountForDetail(const int _cnt)
{
    count_for_detail = _cnt;
}
