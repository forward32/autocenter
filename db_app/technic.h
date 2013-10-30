#ifndef TECHNIC_H
#define TECHNIC_H

#include <QWidget>
#include "start_filling_table.h"

namespace Ui {
class technic;
}

class technic : public QWidget
{
    Q_OBJECT

public:
    explicit technic(QWidget *parent = 0);
    ~technic();

        //***********
    void ShowForm(const QString &, const QString &);
    void StartInit();
        //**********
    
private slots:
    void on_btn_exit_clicked();

    void on_btn_search_clicked();

    void on_btn_start_clicked();

    void on_tbl_details_activated(const QModelIndex &index);

    void on_tbl_details_clicked(const QModelIndex &index);

    void on_btn_del_clicked();

    void on_btn_add_clicked();

    void on_btn_add_clicked(bool checked);

    void on_btn_change_clicked();

    void on_btn_order_clicked();

    void on_btn_stat_clicked();

private:
    Ui::technic *ui;
    QString _name, _surname;
};

#endif // TECHNIC_H
