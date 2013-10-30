#include "statistic.h"
#include "ui_statistic.h"
#include "start_filling_table.h"
#include "extra.h"
#include <QMessageBox>
#include "iostream"


statistic::statistic(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::statistic)
{
    ui->setupUi(this);
    StartInit();
}

statistic::~statistic()
{
    delete ui;
}

void statistic::on_btn_exit_clicked()
{
    close();
}

void statistic::StartInit()
{
    QString query = "select id, data, time, seller_info, firm, model, price, id_full_info from sales_car";
    std::vector<std::string> vec;
    vec.push_back("№");
    vec.push_back("Дата");
    vec.push_back("Время");
    vec.push_back("Продавец");
    vec.push_back("Марка");
    vec.push_back("Модель");
    vec.push_back("Стоимость");
    vec.push_back("ID хар-ки");

    Filling::FillTable(this->ui->stat_tbl, vec, query);

    int count = Filling::GetCount("sales_car");
    if (count == -1)
    {
        QMessageBox::critical(this, "Error", "Записей в базе не обнаружено.");
        return;
    }

    ui->label->setText("Всего записей: " + QString::number(count));
    ui->label_3->setText("Найдено записей: 0");
}

void statistic::on_btn_search_clicked()
{
    QString seqrch_str = "select id, data, time, seller_info, firm, model, price, id_full_info from sales_car where data = \'" +
            ui->sb_day->text() +  "." + ui->sb_mnt->text() + "." + ui->sb_year->text() + "\'";

    QSqlQueryModel *queryModel = (QSqlQueryModel *)ui->stat_tbl->model();
    queryModel->setQuery(seqrch_str, QSqlDatabase::database(work_base));

    int count;
    count = ui->stat_tbl->model()->rowCount();
    if (count == 0)
        QMessageBox::information(this, "Ок", "К сожалению, поиск не дал результатов. Измените параметры поиска.");
    ui->label_3->setText("Найдено записей: " + QString::number(count));
}

void statistic::on_stat_tbl_clicked(const QModelIndex &index)
{
    int row = ui->stat_tbl->selectionModel()->currentIndex().column();
    if (row == 7)
    {
        Extra *temp = new Extra(ui->stat_tbl->selectionModel()->currentIndex().data().toInt());
        QString query_str_full = temp->GetFullCarData();
        QString  query_str_gen = temp->GetGenerallCarData();
        delete temp;

        QSqlQuery *query = new QSqlQuery(QSqlDatabase::database("autocenter"));
        query->exec(query_str_full);
        if (query)
        {
            Parse *prs = new Parse();
            query_str_full = prs->ParseDataFull(query);
            query->exec(query_str_gen);
            query_str_gen = prs->AllData(query);
            query_str_gen = query_str_gen + "\n" + query_str_full;
            QMessageBox::information(this, "Ok", query_str_gen);
            delete prs;
        }
        else
            QMessageBox::critical(this, "Ошибка", "Произошел сбой работы программы.");

        delete query;
    }
    else
        if (row != 0)
            QMessageBox::information(this, "Ok", "Для получения полной информации щелкните по ID хар-ки авто.");
}

void statistic::on_btn_all_cat_clicked()
{
    StartInit();
}

void statistic::on_btn_del_clicked()
{
    int column = ui->stat_tbl->selectionModel()->currentIndex().column();
    if (column != 0)
        QMessageBox::information(this, "Ok", "Для удаления щелкните по номеру записи.");
    else
    {
        int val = ui->stat_tbl->selectionModel()->currentIndex().data().toInt();
        if (QMessageBox::information(this, "Вы уверены?", "Вы точно хотите удалить запись с ID="+QString::number(val),
                                 QMessageBox::Ok, QMessageBox::Cancel) == QMessageBox::Ok)
        {
            Extra * tmp = new Extra();
            tmp->DeleteRecord("sales_car", "id", val);
            QMessageBox::information(this, "OK", "Запись успешно удалена.");
            StartInit();
        }
    }
}
