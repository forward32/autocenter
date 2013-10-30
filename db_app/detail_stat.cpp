#include "detail_stat.h"
#include "ui_detail_stat.h"
#include "start_filling_table.h"
#include <QMessageBox>
#include "extra.h"
#include "base_name.h"

detail_stat::detail_stat(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::detail_stat)
{
    ui->setupUi(this);
    StartInit();
}

detail_stat::~detail_stat()
{
    delete ui;
}

void detail_stat::on_btn_exit_clicked()
{
    close();
}

void detail_stat::StartInit()
{
    QString query = "select id, data, time, tech_info, price, detail_count, id_info from sales_detail";
    std::vector<std::string> vec;
    vec.push_back("№");
    vec.push_back("Дата");
    vec.push_back("Время");
    vec.push_back("Продавец");
    vec.push_back("Стоимость");
    vec.push_back("Количество");
    vec.push_back("ID хар-ки");

    Filling::FillTable(this->ui->stat_tbl, vec, query);

    int count = Filling::GetCount("sales_detail");
    if (count == -1)
    {
        QMessageBox::critical(this, "Error", "Записей в базе не обнаружено.");
        return;
    }

    ui->label->setText("Всего записей: " + QString::number(count));
    ui->label_3->setText("Найдено записей: 0");
}

void detail_stat::on_btn_search_clicked()
{
    QString seqrch_str = "select id, data, time, tech_info, price, detail_count, id_info from sales_detail where data = \'" +
            ui->sb_day->text() +  "." + ui->sb_mnt->text() + "." + ui->sb_year->text() + "\'";

    QSqlQueryModel *queryModel = (QSqlQueryModel *)ui->stat_tbl->model();
    queryModel->setQuery(seqrch_str, QSqlDatabase::database(work_base));

    int count;
    count = ui->stat_tbl->model()->rowCount();
    if (count == 0)
        QMessageBox::information(this, "Ок", "К сожалению, поиск не дал результатов. Измените параметры поиска.");
    ui->label_3->setText("Найдено записей: " + QString::number(count));
}

void detail_stat::on_btn_all_cat_clicked()
{
    StartInit();
}

void detail_stat::on_btn_del_clicked()
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
            tmp->DeleteRecord("sales_detail", "id", val);
            QMessageBox::information(this, "OK", "Запись успешно удалена.");
            StartInit();
        }
    }
}

void detail_stat::on_stat_tbl_clicked(const QModelIndex &index)
{
    int row = ui->stat_tbl->selectionModel()->currentIndex().column();
    if (row == 6)
    {
        QString str = "select name, price, firm, type, info from details_info where id = " +
                ui->stat_tbl->selectionModel()->currentIndex().data().toString();
        QSqlQuery *q = new QSqlQuery(str, QSqlDatabase::database(work_base));
        q->exec();
        q->next();
        if (q->isValid())
        {
            str.clear();
            str = "==Характеристика проданной детали==\n\n-Наименование: " + q->value(0).toString() +
                    "\nЦена: " + q->value(1).toString() + "\nФирма-производитель: " + q->value(2).toString() +
                    "\nТип изделия: " + q->value(3).toString() + "\nДополнительная инормация:\n" + q->value(4).toString();
            QMessageBox::information(this, "Ok", str);
        }
        else
             QMessageBox::critical(this, "Eror", "Произошел сбой.");

        delete q;
    }
    else
        if (row != 0)
            QMessageBox::information(this, "Ok", "Для получения полной информации щелкните по ID хар-ки детали.");

}
