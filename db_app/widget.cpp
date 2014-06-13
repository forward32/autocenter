#include "widget.h"
#include "ui_widget.h"
#include "mainwindow.h"
#include "technic.h"
#include "base_name.h"


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->edt_pass->setEchoMode(QLineEdit::Password);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btn_enter_clicked()
{
        // Считывание введенных данных
    QString log, pass, post, name, surname;
    log = ui->edt_log->text();
    pass = ui->edt_pass->text();

        // Проверка данных на наличие в БД
    if (! Is_True_Data(log, pass, name, surname, post))
        QMessageBox::critical(this,"Ошибка","Авторизация не пройдена.");
    else
    {
            // Приветствие пользователя
        Greeting(name, surname);
        ui->edt_pass->setText("");
            // Форма продавца авто
        if (post == "seller")
        {
            MainWindow *m_form= new MainWindow();
            m_form->ShowForm(name, surname);
        }
            // Форма продавца зачастей
        else
        {
            technic *tech = new technic();
            tech->ShowForm(name, surname);
        }
    }
}


    // Проверка корректности данных авторизации
bool Widget::Is_True_Data(QString &log, QString &pass, QString &name, QString &surname, QString &post)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL", work_base);
    db.setHostName("localhost");
    db.setDatabaseName(work_base);
    db.setUserName("yura");
    db.setPassword("univ32");

    if (!db.open())
        QMessageBox::critical(this,"Ошибка","Соединение с базой данных не установлено.");
    else
    {
        QSqlQuery get_data_enter(db);
        QString local_str = "SELECT name, surname, post FROM data_enter where login = \'" + log + "\' and password = crypt(\'"+
                pass +"\', password)";
        get_data_enter.exec(local_str);
        get_data_enter.next();
        if (!get_data_enter.value(0).isValid())
            return false;
        else
        {
            name = get_data_enter.value(0).toString();
            surname = get_data_enter.value(1).toString();
            post = get_data_enter.value(2).toString();
            return true;
        }
    }
    return false;
}


    // Приветствие пользователя
void Widget::Greeting(const QString &name, const QString &surname)
{
    QMessageBox::information(this, "Ок","Добро пожаловать, " + name + " " + surname);
}


void Widget::on_btn_exit_clicked()
{
    close();
}

void Widget::on_btn_info_clicked()
{
    QMessageBox::information(this, "Справка", "Программа представляет собой автоматизированную систему управления внутренними"
                             " делами автосалона. Данные хранятся как на английском, так и на русском языке.");
}

    // Get string - new password for login
QString Widget::GetNewPass()
{
    QInputDialog input;
    input.setOkButtonText("Принять");
    input.setCancelButtonText("Отменить");
    bool ok;
    QString result = input.getText(0, "Введите новый пароль", "Новый пароль", QLineEdit::Password, "", &ok);
    if (ok)
        return result;
    else
        return "";
}

    // Correct password for user in login in database
bool Widget::ChangePass(const QString &login, const QString &old_pass, const QString &new_pass)
{
    QSqlQuery qury(QSqlDatabase::database(work_base));
    if (!qury.exec("update data_enter set password = crypt(\'" + new_pass +"\', gen_salt('md5')) where login = \'" + login + "\' and password = crypt(\'" +
              old_pass + "\', password)"))
        return false;

    return true;
}

    // При нажатии на кнопку смены пароля
void Widget::on_btn_change_pass_clicked()
{
    QString log, pass, post, name, surname;
    log = ui->edt_log->text();
    pass = ui->edt_pass->text();

    if (! Is_True_Data(log, pass, name, surname, post))
    {
        QMessageBox::critical(this,"Ошибка","Пользователя с таким логином и паролем не найдено, проверьте правильность данных.");
        return;
    }

    QString new_pass = GetNewPass();
    if (new_pass == "")
    {
        QMessageBox::critical(this,"Ошибка","Вы не ввели новый пароль, изменить пароль невозможно.");
        return;
    }

    if (ChangePass(log, pass, new_pass)) QMessageBox::information(this, "Ok", "Пароль успешно изменен.");
    else QMessageBox::critical(this, "Ошибка", "При смене пароля произошла ошибка.");
}


