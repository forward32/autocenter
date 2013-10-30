#ifndef WIDGET_H
#define WIDGET_H

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QString>
#include <QMessageBox>
#include <QInputDialog>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

        // Мною созданные
    //--------------------------------------------------------------------
    bool Is_True_Data(QString &log, QString &pass, QString &name, QString &surname, QString &post);
    void Greeting(const QString &name, const QString &surname);
    QString GetNewPass();
    bool ChangePass(const QString &login, const QString &old_pass, const QString &new_pass );
    //--------------------------------------------------------------------

    // Elements

private slots:
    void on_btn_enter_clicked();

    void on_btn_exit_clicked();

    void on_btn_info_clicked();

    void on_btn_change_pass_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
