#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "search.h"
#include "addcar.h"
#include "extra.h"
#include <QTextEdit>
#include "fstream"
#include "string"
#include  "statistic.h"
#include <QTime>
#include "contract.h"
#include "start_filling_table.h"


MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    StartInit();
}

    // Init table how program starting
void MainWindow::StartInit()
{
    QString query = "select * from general_car_info";
    std::vector<std::string> vec;
    vec.push_back("№ в базе");
    vec.push_back("Марка");
    vec.push_back("Модель");
    vec.push_back("Год выпуска");
    vec.push_back("Мощность");
    vec.push_back("Цена");
    vec.push_back("Тип двигателя");
    vec.push_back("Наличие");

    Filling::FillTable(this->ui->CarsTable, vec, query);

    int count = Filling::GetCount("general_car_info");
    if (count == -1)
    {
        QMessageBox::critical(this, "Error", "Записей в базе не обнаружено.");
        return;
    }

    ui->lbl_all_records->setText("Всего записей в каталоге: " + QString::number(count));
    ui->lbl_finded->setText("Найдено записей: 0");
}

MainWindow::~MainWindow()
{
    delete ui;
}

    // Show MainWindow
void MainWindow::ShowForm(const QString &name, const QString &surname)
{
    SetSellerData(name, surname);
    ui->userdata->setText("Вы: " + name + " " + surname);
    show();
}

void MainWindow::SetSellerData(const QString &s1, const QString &s2)
{
    seller_name = s1;
    seller_surname = s2;
}

QString MainWindow::GetSellerName() const
{return seller_name;}

QString MainWindow::GetSellerSurName() const
{return seller_surname;}

    // If you clicked at "Найти"
void MainWindow::on_btn_search_car_clicked()
{
        // prepare data for search
    Search *temp_search = new Search();
    temp_search->SetFirm(ui->edtfirm->text());
    temp_search->SetModel(ui->edtmodel->text());
    temp_search->SetYears(ui->cmbstart->currentText().toInt(), ui->cmbstop->currentText().toInt());
    temp_search->SetPower(ui->edtpower->text().toInt());
    temp_search->SetPrice(ui->edt_start_price->text().toInt(), ui->edt_stop_price->text().toInt());
    if (ui->check_present->isChecked()) temp_search->SetPresent("Yes");
    else temp_search->SetPresent("No");

    if ((temp_search->GetPower() <= 0 || temp_search->GetPower() >= 1001) && ui->edtpower->text() != "")
    {
        QMessageBox::critical(this, "Ошибка", "Проверьте правильность ввода мощности. Мощность не должна быть отрицательной величиной или текстом.");
        return;
    }

    if (ui->chbox_from->isChecked())
        temp_search->SetCh(">=");
    else
        if (ui->edtpower->text() == ""){
            QMessageBox::critical(this, "Ошибка", "Если вы меняете флаг \"от-до\", укажите границу мощности искомых записей.");
            return;
        }
         else temp_search->SetCh("<=");

        // update data in table
    QString query = temp_search->GetSearchQuery();
    QSqlQueryModel *queryModel = (QSqlQueryModel *)ui->CarsTable->model();
        // do query and check results
    int count = 0;
    queryModel->setQuery(query, QSqlDatabase::database(work_base));
    count = ui->CarsTable->model()->rowCount();
    if (count == 0)
        QMessageBox::information(this, "Ок", "К сожалению, поиск не дал результатов. Измените параметры поиска.");
    ui->lbl_finded->setText("Найдено записей: " + QString::number(count));
    delete temp_search;
}

void MainWindow::on_CarsTable_clicked(const QModelIndex &index)
{
    int row = ui->CarsTable->selectionModel()->currentIndex().column();
    if (row == 0)
    {
        Extra *temp = new Extra(ui->CarsTable->selectionModel()->currentIndex().data().toInt());
        QString query_str = temp->GetFullCarData();
        delete temp;
        QSqlQuery *query = new QSqlQuery(QSqlDatabase::database("autocenter"));
        query->exec(query_str);
        if (query)
        {
            Parse *prs = new Parse();
            QString str = prs->ParseDataFull(query);
            QMessageBox::information(this, "Ok", str);
            delete prs;
        }
        else
            QMessageBox::critical(this, "Ошибка", "Произошел сбой работы программы.");
    }
    else
        QMessageBox::information(this, "Ok", "Для получения полной хар-ки нажмите на номер авто в базе данных.");
}

void MainWindow::on_btn_exit_clicked()
{
    close();
}

void MainWindow::on_chbox_from_clicked()
{
    ui->chbox_to->setChecked(false);
    ui->chbox_from->setChecked(true);
}

void MainWindow::on_chbox_to_clicked()
{
    ui->chbox_from->setChecked(false);
    ui->chbox_to->setChecked(true);
}

void MainWindow::on_btn_reset_clicked()
{
    StartInit();
}

void MainWindow::on_btn_add_car_clicked()
{
    addcar *var = new addcar();
    var->show();
}


        //################Create contract##############################
void MainWindow::on_btn_get_contract_clicked()
{
    contract *data_contract = new contract();
    data_contract->SetFlag(false);
    data_contract->NewShowCar(this);
}

void MainWindow::FillData(const QString &_name, const QString &_otch, const QString &_surname,
                          const QString & _data, const QString &_sale, const QString &tbl, const QString &prefix, const QString &column)
{
    name = _name;
    otch = _otch;
    surname = _surname;
    data = _data;
    sale_data = _sale;

    int num = GetMaxNumberSale(tbl, column);
    f_name = prefix + "contract_" + QString::number(num);
}

QString MainWindow::GetName() const {return name;}

QString MainWindow::GetOtch() const {return otch;}

QString MainWindow::GetSurname() const {return surname;}

QString MainWindow::GetData() const {return data;}

QString MainWindow::GetFname() const {return f_name;}

    // big-bad function...
bool MainWindow::CreateContractFile()
{
    if (ui->CarsTable->selectionModel()->currentIndex().column() == 0)
    {
        QString str = GetFname();
        std::string string_fname = "contracts/";
        string_fname += str.toStdString();
        const char *tru_name = string_fname.c_str();
        std::ofstream f(tru_name);
        if (!f.is_open())
        {
            QMessageBox::critical(this, "Error", "Не удалось создать файл. Проверьте, существует ли папка contracts в папке с запускаемым приложением.");
            return false;
        }

        QString for_write = "== Контракт продажи автомобиля: " + str + " ==\n\n";
        f << for_write.toStdString();
        for_write = "<Персональные данные>\n\nПокупатель: " + GetName() + " " + GetOtch() + " " + GetSurname() + "\n";
        for_write += "Дата рождения: " + GetData() + "\n";
        for_write += "_________________________________________________________________\n\n";
        f <<  for_write.toStdString();
        for_write = "Сотрудник отдела продаж: " + this->GetSellerName() + " " + this->GetSellerSurName() + "\n";

        QTime *tm = new QTime();
        QString full_sales_data = sale_data + " " + QString::number(tm->currentTime().hour()) +
                ":" + QString::number(tm->currentTime().minute());
        sale_time = QString::number(tm->currentTime().hour()) + ":" + QString::number(tm->currentTime().minute());
        for_write += "Дата составления контракта: " + full_sales_data + "\n";
        for_write += "_________________________________________________________________\n\n";
        f << for_write.toStdString();

        QSqlQuery *query = new QSqlQuery(QSqlDatabase::database(work_base));
        int id = ui->CarsTable->selectionModel()->currentIndex().data().toInt();
        query->exec("select id, firm, model, price from general_car_info where id = " + QString::number(id));
        query->next();

        if (!query->value(0).isValid())
        {
            delete tm;
            delete query;
            QMessageBox::critical(this, "Error", "Ошибка считывания из базы. Проверьте наличие базы данных или обратитесь к администратору.");
            return false;
        }

        WriteToSales(sale_data, sale_time, query, GetSellerName(), GetSellerSurName());

        for_write = "<Данные об автомобиле>\n\nМарка: "+query->value(1).toString()+"\nМодель: "+
                query->value(2).toString()+"\nЦена: "+query->value(3).toString()+"\n";
        for_write += "_________________________________________________________________\n\n";
        for_write += "Подпись сотрудника салона:_________________(_____________)\n";
        for_write += "Подпись покупателя автомобиля:_____________(_____________)\n";
        f << for_write.toStdString();

        delete tm;
        delete query;
        f.close();
        return true;
    }
    else
    {
        QMessageBox::information(this, "OK", "Щелкните по номеру в базе, а затем оформляйте заказ.");
        return false;
    }
}


bool MainWindow::CreateDetailFile(const int &_id)
{
    QString str = GetFname();
    std::string string_fname = "contracts/";
    string_fname += str.toStdString();
    const char *tru_name = string_fname.c_str();
    std::ofstream f(tru_name);
    if (!f.is_open())
    {
        QMessageBox::critical(this, "Error", "Не удалось создать файл. Проверьте, существует ли папка contracts в папке с запускаемым приложением.");
        return false;
    }

    QString for_write = "== Контракт продажи детали: " + str + " ==\n\n";
    f << for_write.toStdString();
    for_write = "<Персональные данные>\n\nПокупатель: " + GetName() + " " + GetOtch() + " " + GetSurname() + "\n";
    for_write += "Дата рождения: " + GetData() + "\n";
    for_write += "_________________________________________________________________\n\n";
    f <<  for_write.toStdString();
    for_write = "Сотрудник отдела продаж: " + this->GetSellerName() + " " + this->GetSellerSurName() + "\n";

    QTime *tm = new QTime();
    QString full_sales_data = sale_data + " " + QString::number(tm->currentTime().hour()) +
            ":" + QString::number(tm->currentTime().minute());
    sale_time = QString::number(tm->currentTime().hour()) + ":" + QString::number(tm->currentTime().minute());
    for_write += "Дата составления контракта: " + full_sales_data + "\n";
    for_write += "_________________________________________________________________\n\n";
    f << for_write.toStdString();

    QSqlQuery *query = new QSqlQuery(QSqlDatabase::database(work_base));
    query->exec("select id, name, price, firm, type, info from details_info where id = " + QString::number(_id));
    query->next();

    if (!query->value(0).isValid())
    {
        delete tm;
        delete query;
        QMessageBox::critical(this, "Error", "Ошибка считывания из базы. Проверьте наличие базы данных или обратитесь к администратору.");
        return false;
    }


    WriteToSalesDetail(sale_data, sale_time, query, GetSellerName(), GetSellerSurName(), count_for_detail);

    for_write = "<Данные об детали>\n\Наименование: "+query->value(1).toString()+"\nФирма-производитель: "+
            query->value(3).toString()+"\nЦена за штуку: "+query->value(2).toString()+"\n";
    for_write += "Количество проданных деталей: " + QString::number(count_for_detail) + "\n";
    for_write += "_________________________________________________________________\n\n";
    for_write += "Подпись сотрудника салона:_________________(_____________)\n";
    for_write += "Подпись покупателя автомобиля:_____________(_____________)\n";
    f << for_write.toStdString();

    delete tm;
    delete query;
    f.close();
    return true;
}

int MainWindow::GetMaxNumberSale(const QString &tbl, const QString &column)
{
    QSqlQuery *query = new QSqlQuery(QSqlDatabase::database(work_base));
    query->exec("select MAX(" + column +") from " + tbl);
    query->next();
    int result = query->value(0).toInt() + 1;
    delete query;

    return result;
}

void MainWindow::WriteToSales(const QString &data, const QString &time, QSqlQuery *query, const QString &name, const QString &surname)
{
    QString str_query = "insert into sales_car values(null, \'"+data+"\',\'"+ time + "\',\'" + name+" "+surname+"\',\'"+
            query->value(1).toString()+"\',\'"+query->value(2).toString()+"\',\'"+
            QString::number(query->value(3).toInt())+"\',"+QString::number(query->value(0).toInt())+","+
            QString::number(GetMaxNumberSale("sales_car", "sale_number"))+")";
    QSqlQuery *temp = new QSqlQuery(QSqlDatabase::database(work_base));
    temp->exec(str_query);
    delete temp;
}

void MainWindow::WriteToSalesDetail(const QString &data, const QString &time, QSqlQuery *query, const QString &name, const QString &surname, const int cnt)
{
    int cost = query->value(2).toInt() * cnt;
    QString str_query = "insert into sales_detail values(null, \'"+data+"\',\'"+ time + "\',\'" + name+" "+surname+"',"+
            QString::number(cost) + "," + QString::number(cnt) + "," + query->value(0).toString() + ")";
    QSqlQuery *temp = new QSqlQuery(QSqlDatabase::database(work_base));
    temp->exec(str_query);
    delete temp;
}


void MainWindow::on_btn_see_stat_clicked()
{
    statistic *form = new statistic();
    form->show();
}


void MainWindow::on_btn_del_clicked()
{
    int row = ui->CarsTable->selectionModel()->currentIndex().column();
    if (row == 0)
    {
        int val = ui->CarsTable->selectionModel()->currentIndex().data().toInt();
        if (QMessageBox::information(this, "Вы уверены?", "Вы точно хотите удалить запись с ID="+QString::number(val),
                                 QMessageBox::Ok, QMessageBox::Cancel) == QMessageBox::Ok)
        {
            Extra * tmp = new Extra();
            tmp->DeleteRecord("full_car_info", "id_gen_car", val);
            tmp->DeleteRecord("general_car_info", "id", val);
            QMessageBox::information(this, "OK", "Запись успешно удалена.");
            StartInit();
        }
    }
    else
        QMessageBox::information(this, "OK", "Для удаления записи щелкните по номеру в базе.");
}

    // big-bad function change of data
void MainWindow::on_btn_change_clicked(bool checked)
{
    int row = ui->CarsTable->selectionModel()->currentIndex().column();
    if (row == 0)
    {
        int val = ui->CarsTable->selectionModel()->currentIndex().data().toInt();
        if (QMessageBox::information(this, "Вы уверены?", "Вы точно хотите удалить запись с ID="+QString::number(val),
                                 QMessageBox::Ok, QMessageBox::Cancel) == QMessageBox::Ok)
        {
            std::vector<std::string> vec;
            QSqlQuery *qr = new QSqlQuery("select firm, model, year, power, price, eng_type, present from general_car_info where id="
                                          + QString::number(val), QSqlDatabase::database(work_base));
            qr->exec();
            qr->next();
            if (qr->isValid())
            {
                vec.push_back(qr->value(0).toString().toStdString());
                vec.push_back(qr->value(1).toString().toStdString());
                vec.push_back(qr->value(2).toString().toStdString());
                vec.push_back(qr->value(3).toString().toStdString());
                vec.push_back(qr->value(4).toString().toStdString());
                vec.push_back(qr->value(5).toString().toStdString());
                vec.push_back(qr->value(6).toString().toStdString());
            }
            else
                return;
            qr->exec("select body_type, drive_type, rudder_type, color, condition_type, conditioner, tv, navigation, outgo from full_car_info where id_gen_car = " + QString::number(val));
            qr->next();
            if (qr->isValid())
            {
                vec.push_back(qr->value(0).toString().toStdString());
                vec.push_back(qr->value(1).toString().toStdString());
                vec.push_back(qr->value(2).toString().toStdString());
                vec.push_back(qr->value(3).toString().toStdString());
                vec.push_back(qr->value(4).toString().toStdString());
                vec.push_back(qr->value(5).toString().toStdString());
                vec.push_back(qr->value(6).toString().toStdString());
                vec.push_back(qr->value(7).toString().toStdString());
                vec.push_back(qr->value(8).toString().toStdString());
            }
            else
                return;
            addcar *temp = new addcar();
            temp->InitElements(vec, val);
            temp->show();
        }
    }
    else
        QMessageBox::information(this, "OK", "Для изменения записи щелкните по номеру в базе.");
}


void MainWindow::SetCountForDetail(const int _cnt)
{
    count_for_detail = _cnt;
}
