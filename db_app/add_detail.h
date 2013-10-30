#ifndef ADD_DETAIL_H
#define ADD_DETAIL_H

#include <QWidget>
#include <QString>

namespace Ui {
class add_detail;
}

class add_detail : public QWidget
{
    Q_OBJECT
    
public:
    explicit add_detail(QWidget *parent = 0);
    ~add_detail();
    void SetParmsOnForm(const std::vector<QString> &vec, const int &id);
    
private slots:
    void on_btn_exit_clicked();

    void on_btn_apply_clicked();

private:
    Ui::add_detail *ui;
    int _id;
};

#endif // ADD_DETAIL_H
