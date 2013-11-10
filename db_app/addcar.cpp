#include "addcar.h"
#include "add.h"
#include "ui_addcar.h"
#include <QMessageBox>
#include "parse.h"
#include "base_name.h"
#include <QSqlError>

#define vec_size_init 16

addcar::addcar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addcar)
{
    ui->setupUi(this);
}

addcar::~addcar()
{
    delete ui;
}

void addcar::on_btn_exit_clicked()
{
    close();
}

void addcar::on_btn_add_clicked()
{
        // Prepare data
    Add *elem = new Add();
    elem->SetName(ui->edt_firm->text(), ui->edt_model->text());
    elem->SetColor(ui->edt_color->text());
    elem->SetBody(ui->cmb_body_type->currentText());
    elem->SetCondition(ui->cmb_condition->currentText());
    elem->SetDrive(ui->cmb_drive_type->currentText());
    elem->SetEngine(ui->cmb_eng_type->currentText());
    elem->SetOutgo(ui->edt_outgo->text().toDouble());
    elem->SetPower(ui->edt_power->text().toInt());
    elem->SetPrice(ui->edt_price->text().toInt());
    elem->SetRudder(ui->cmb_rudder_type->currentText());
    elem->SetYear(ui->edt_year->text().toInt());
    elem->SetExtraParam(ui->cmb_cond->currentText(), ui->cmb_tv->currentText(), ui->cmb_navig->currentText());
    elem->SetPresent(ui->cmb_present->currentText());


       // Big bad if
    if (elem->GetFirm() == "" || elem->GetModel() == "" || elem->GetColor() == "" || elem->GetYear() < 1920 || elem->GetYear() > 2013|| elem->GetPower() < 50 || elem->GetPower() > 1001 || elem->GetPrice() <= 0 || elem->GetOutgo() <= 0)
    {
        QMessageBox::critical(this, "Ошибка", "При добавлении/изменении записи произошла ошибка. Проверьте правильность ввода данных и заполните все поля.");
        return;
    }

    try
    {
        if (ui->btn_add->text() == "Изменить")
        {
            QString str = "update general_car_info set firm = '" + elem->GetFirm() + "', model = '" + elem->GetModel() +
                    "', year = " + QString::number(elem->GetYear()) + ", price = " + QString::number(elem->GetPrice()) +
                    ", eng_type = '" + elem->GetEngine() + "', present = '" + elem->GetPresent() + "', power = " + QString::number(elem->GetPower()) +
                    " where id = " + QString::number(_id);
            QSqlQuery *qr = new QSqlQuery(QSqlDatabase::database(work_base));
            if (!qr->exec(str))
                throw("Ошибка выполнения exec() для таблицы general_car_info.");
            str.clear();
            str = "update full_car_info set body_type = '" + elem->GetBody() + "', drive_type = '" + elem->GetDrive() +
                    "', rudder_type = '" + elem->GetRudder() + "', color = '" + elem->GetColor() +
                    "', condition_type = '" + elem->GetCondition() + "', conditioner = '" + elem->GetCond() +
                    "', tv = '" + elem->GetTV() + "', navigation = '" + elem->GetNavigation() + "', outgo = " +
                    QString::number(elem->GetOutgo()) + " where id_gen_car = " + QString::number(_id);
            if (!qr->exec(str))
                throw("Ошибка выполнения exec() для таблицы full_car_info.");
            QMessageBox::information(this, "OK", "Запись изменена.");
            delete qr;
        }
        else
        {

            QString general_car_info_query = elem->GetLineForGeneralTable();
            QSqlQuery *temp = new QSqlQuery(QSqlDatabase::database(work_base));

            if(!temp->exec(general_car_info_query))
                throw(temp->lastError().text().toStdString().c_str());

            int id_gen = GetMaxVal("general_car_info", "id");
            QString full_car_info_query = elem->GetLineForFullTable(id_gen);
            if(!temp->exec(full_car_info_query))
                throw(temp->lastError().text().toStdString().c_str());

            QMessageBox::information(this, "Ok", "Запись добавлена в базу данных.");
        }
    }
    catch(const char *str_err)
    {
        QMessageBox::critical(this, tr("Ошибка"), str_err);
    }
}

int addcar::GetMaxVal(const QString &db, const QString &column)
{
    QSqlQuery *temp = new QSqlQuery(QSqlDatabase::database(work_base));
    QString query = "select MAX(" + column + ") from " + db;

    if (!temp->exec(query))
        throw("Ошибка выполнения exec() для поиска максимального id.");

    if (temp->next())
    {
        int key = temp->value(0).toInt();
        delete temp;
        return key;
    }
    else
    {
        delete temp;
        throw("Ошибка выполнения next при поиске максимального id.");
    }

    return -1;
}

bool addcar::InitElements(std::vector<std::string> vec, const int &id)
{
    if (vec.size() != 16)
        throw("Количество характеристик должно равняться 16. Ошибка.");
    ui->edt_firm->setText(QString::fromStdString(vec[0]));
    ui->edt_model->setText(QString::fromStdString(vec[1]));
    ui->edt_year->setText(QString::fromStdString(vec[2]));
    ui->edt_power->setText(QString::fromStdString(vec[3]));
    ui->cmb_eng_type->setCurrentText(QString::fromStdString(vec[5]));
    ui->cmb_body_type->setCurrentText(QString::fromStdString(vec[7]));
    ui->cmb_drive_type->setCurrentText(QString::fromStdString(vec[8]));
    ui->cmb_rudder_type->setCurrentText(QString::fromStdString(vec[9]));
    ui->edt_color->setText(QString::fromStdString(vec[10]));
    ui->cmb_condition->setCurrentText(QString::fromStdString(vec[11]));
    ui->cmb_cond->setCurrentText(QString::fromStdString(vec[12]));
    ui->cmb_tv->setCurrentText(QString::fromStdString(vec[13]));
    ui->cmb_navig->setCurrentText(QString::fromStdString(vec[14]));
    ui->cmb_present->setCurrentText(QString::fromStdString(vec[6]));
    ui->edt_outgo->setText(QString::fromStdString(vec[15]));
    ui->edt_price->setText(QString::fromStdString(vec[4]));
    ui->btn_add->setText("Изменить");
    _id = id;
    return true;
}
