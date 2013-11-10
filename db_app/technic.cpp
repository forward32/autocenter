#include "technic.h"
#include "ui_technic.h"
#include <QMessageBox>
#include"details_search.h"
#include "extra.h"
#include "add_detail.h"
#include "contract.h"
#include "mainwindow.h"
#include "detail_stat.h"
#include <QInputDialog>
#include <QSqlError>

technic::technic(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::technic)
{
    ui->setupUi(this);
    StartInit();
}

technic::~technic()
{
    delete ui;
}

void technic::on_btn_exit_clicked()
{
    close();
}

void technic::ShowForm(const QString &name, const QString &surname)
{
    ui->lbl_user->setText("Вы: " + name + " " + surname);
    _name = name;
    _surname = surname;
    show();
}

void technic::StartInit()
{
    QString query = "select * from details_info order by id";
    std::vector<std::string> vec;
    vec.push_back("№ в базе");
    vec.push_back("Наименование");
    vec.push_back("Цена");
    vec.push_back("Производитель");
    vec.push_back("Тип детали");
    vec.push_back("Дополнительная информация");

    Filling::FillTable(this->ui->tbl_details, vec, query);

    int count = Filling::GetCount("details_info");
    if (count == -1)
    {
        QMessageBox::critical(this, "Error", "Записей в базе не обнаружено.");
        return;
    }

    this->ui->lbl_all_records->setText("Всего записей в каталоге: " + QString::number(count));
    this->ui->lbl_finded->setText("Найдено записей: 0");
}

void technic::on_btn_search_clicked()
{
    int count_before = ui->tbl_details->model()->rowCount();
    SearchDetail *temp = new SearchDetail(ui->edt_name->text(), ui->edt_firm->text(),
                                          ui->edt_type->text(), ui->edt_price->text().toInt());
    temp->SearchDetails(ui->tbl_details);
    int count = ui->tbl_details->model()->rowCount();
    if (count_before == count || count <= 0)
        QMessageBox::information(this, "OK", "К сожалению, поиск не дал результатов. Измените параметры поиска.");
    ui->lbl_finded->setText("Найдено записей: " + QString::number(count));
}

void technic::on_btn_start_clicked()
{
    StartInit();
}


void technic::on_tbl_details_clicked(const QModelIndex &index)
{
    (void)index;
    int column = ui->tbl_details->selectionModel()->currentIndex().column();
    if (column == 5)
    {
        QString str = ui->tbl_details->selectionModel()->currentIndex().data().toString();
        if (!str.isEmpty())
            QMessageBox::information(this, "Доп.информация", str);
    }
    else
        if (column != 0)
            QMessageBox::information(this, "Уведомление", "Для просмотра полной информации щелкните по полю дополнительной информации.");
}

void technic::on_btn_del_clicked()
{
    try
    {
        int row = ui->tbl_details->selectionModel()->currentIndex().column();
        if (row == 0)
        {
            int val = this->ui->tbl_details->selectionModel()->currentIndex().data().toInt();
            if (QMessageBox::information(this, "Вы уверены?", "Вы точно хотите удалить запись с ID="+QString::number(val),
                                     QMessageBox::Ok, QMessageBox::Cancel) == QMessageBox::Ok)
            {
                Extra * tmp = new Extra();
                tmp->DeleteRecord("details_info", "id", val);
                QMessageBox::information(this, "OK", "Запись успешно удалена.");
                StartInit();
            }
        }
        else
            QMessageBox::information(this, "OK", "Для удаления записи щелкните по номеру в базе.");
    }
    catch(const char *str_err)
    {
        QMessageBox::critical(this, tr("Oшибка"), str_err);
    }
}

void technic::on_btn_add_clicked()
{
    add_detail *temp = new add_detail();
    temp->show();
}


void technic::on_btn_change_clicked()
{
    try
    {
    int row = ui->tbl_details->selectionModel()->currentIndex().column();
    if (row == 0)
    {
        int val = this->ui->tbl_details->selectionModel()->currentIndex().data().toInt();
        if (QMessageBox::information(this, "Вы уверены?", "Вы точно хотите изменить запись с ID="+QString::number(val),
                                 QMessageBox::Ok, QMessageBox::Cancel) == QMessageBox::Ok)
        {
            QString str = "select name, price, firm, type, info from details_info where id = " + QString::number(val);
            QSqlQuery *qr = new QSqlQuery(QSqlDatabase::database(work_base));
            if (!qr->exec(str))
                throw qr->lastError().text().toStdString().c_str();
            if (qr->next())
            {
                std::vector<QString> vec;
                vec.push_back(qr->value(0).toString());
                vec.push_back(qr->value(1).toString());
                vec.push_back(qr->value(2).toString());
                vec.push_back(qr->value(3).toString());
                vec.push_back(qr->value(4).toString());
                add_detail *temp = new add_detail();
                delete qr;
                temp->SetParmsOnForm(vec, val);
                temp->show();
            }
            else
            {
                delete qr;
                throw qr->lastError().text().toStdString().c_str();
            }
        }
    }
    else
        QMessageBox::information(this, "OK", "Для изменения записи щелкните по номеру в базе.");
    }
    catch(const char * str_err)
    {
        QMessageBox::critical(this, tr("Ошибка"), str_err);
    }
}

void technic::on_btn_order_clicked()
{
    int row = ui->tbl_details->selectionModel()->currentIndex().column();
    if (row == 0)
    {
        QInputDialog input;
        input.setOkButtonText("Принять");
        input.setCancelButtonText("Отменить");
        bool ok;
        int cnt = -1;
        QString result = input.getText(0, "Введите число деталей", "Количество:", QLineEdit::Normal, "", &ok);
        if (ok && !result.isEmpty())
            cnt = result.toInt();
        else
        {
            QMessageBox::critical(this, "Error", "Введите количество продаваемых деталей.");
            return;
        }
        MainWindow * w = new MainWindow();
        contract * tmp = new contract();
        tmp->SetFlag(true);
        tmp->SetCountForDetail(cnt);
        tmp->NewShowDetail(w, this->ui->tbl_details->selectionModel()->currentIndex().data().toInt(),
                           _name, _surname);
    }
    else
        QMessageBox::information(this, "OK", "Для создания контракта нужен ID детали - щелкните по номеру в базе а затем по кнопке 'Оформить заказ'");
}


void technic::on_btn_stat_clicked()
{
    detail_stat *tmp = new detail_stat();
    tmp->show();
}
