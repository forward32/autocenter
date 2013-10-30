#ifndef ADDCAR_H
#define ADDCAR_H

#include <QWidget>

namespace Ui {
class addcar;
}

class addcar : public QWidget
{
    Q_OBJECT
    
public:
    explicit addcar(QWidget *parent = 0);
    ~addcar();
    int GetMaxVal(const QString &db, const QString &column);
    bool InitElements(std::vector<std::string> vec, const int &id);
    
private slots:
    void on_btn_exit_clicked();

    void on_btn_add_clicked();

private:
    Ui::addcar *ui;
    int _id;
};

#endif // ADDCAR_H
