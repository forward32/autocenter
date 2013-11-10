#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include "parse.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QWidget
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void ShowForm(const QString &, const QString &);
    void StartInit();
    void FillData(const QString &, const QString &, const QString &, const QString &,
                  const QString &_sale, const QString &tbl, const QString &prefix, const QString &column);
    QString GetName() const;
    QString GetOtch() const;
    QString GetSurname() const;
    QString GetData() const;
    QString GetFname() const;
    bool CreateContractFile();
    bool CreateDetailFile(const int &_id);
    void WriteToSales(const QString &data, const QString &time, QSqlQuery *query, const QString &, const QString&);
    void WriteToSalesDetail(const QString &data, const QString &time, QSqlQuery *query, const QString &, const QString&, const int cnt);
    int GetMaxNumberSale(const QString &tbl, const QString &column);
    void SetSellerData(const QString &, const QString &);
    QString GetSellerName() const;
    QString GetSellerSurName() const;
    void SetCountForDetail(const int _cnt);

private slots:
    void on_btn_search_car_clicked();

    void on_CarsTable_clicked(const QModelIndex &index);

    void on_btn_exit_clicked();

    void on_chbox_from_clicked();

    void on_chbox_to_clicked();

    void on_btn_reset_clicked();

    void on_btn_add_car_clicked();

    void on_btn_get_contract_clicked();

    void on_btn_see_stat_clicked();

    void on_btn_del_clicked();

    void on_btn_change_clicked();

private:
    Ui::MainWindow *ui;
    QString name, otch, surname, data, f_name, sale_data, sale_time;
    QString seller_name, seller_surname;
    int count_for_detail;
};

#endif // MAINWINDOW_H
