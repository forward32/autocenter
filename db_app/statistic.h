#ifndef STATISTIC_H
#define STATISTIC_H

#include <QWidget>

namespace Ui {
class statistic;
}

class statistic : public QWidget
{
    Q_OBJECT
    
public:
    explicit statistic(QWidget *parent = 0);
    ~statistic();

    void StartInit();
    
private slots:
    void on_btn_exit_clicked();

    void on_btn_search_clicked();

    void on_stat_tbl_clicked(const QModelIndex &index);

    void on_btn_all_cat_clicked();

    void on_btn_del_clicked();

private:
    Ui::statistic *ui;
};

#endif // STATISTIC_H
