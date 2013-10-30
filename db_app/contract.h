#ifndef CONTRACT_H
#define CONTRACT_H

#include <QWidget>
#include <QString>
#include "mainwindow.h"
#include "technic.h"

namespace Ui {
class contract;
}

class contract : public QWidget
{
    Q_OBJECT
    
public:
    void SetFlag(const bool &fl) {flag = fl;}
    explicit contract(QWidget *parent = 0);
    ~contract();
    void NewShowCar(MainWindow *win_val);
    void SetCountForDetail(const int _cnt);
    void NewShowDetail(MainWindow *win_val, const int &id, const QString &_name, const QString &_surname);

    
private slots:
    void on_btn_exit_clicked();

    void on_btn_docontract_clicked();

private:
    Ui::contract *ui;
    MainWindow *win;
    int id_detail;
    bool flag;
    QString name, surname;
    int count_for_detail;
};

#endif // CONTRACT_H
