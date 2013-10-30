#ifndef DETAIL_STAT_H
#define DETAIL_STAT_H

#include <QWidget>

namespace Ui {
class detail_stat;
}

class detail_stat : public QWidget
{
    Q_OBJECT
    
public:
    explicit detail_stat(QWidget *parent = 0);
    ~detail_stat();
    void StartInit();
    
private slots:
    void on_btn_exit_clicked();


    void on_btn_search_clicked();

    void on_btn_all_cat_clicked();

    void on_btn_del_clicked();

    void on_stat_tbl_clicked(const QModelIndex &index);

private:
    Ui::detail_stat *ui;
};

#endif // DETAIL_STAT_H
