/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *edt_log;
    QLineEdit *edt_pass;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btn_enter;
    QPushButton *btn_change_pass;
    QPushButton *btn_info;
    QPushButton *btn_exit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(289, 269);
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 30, 131, 17));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 60, 59, 61));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        layoutWidget1 = new QWidget(Widget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(110, 60, 148, 62));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        edt_log = new QLineEdit(layoutWidget1);
        edt_log->setObjectName(QStringLiteral("edt_log"));

        verticalLayout_2->addWidget(edt_log);

        edt_pass = new QLineEdit(layoutWidget1);
        edt_pass->setObjectName(QStringLiteral("edt_pass"));
        edt_pass->setInputMethodHints(Qt::ImhNone);

        verticalLayout_2->addWidget(edt_pass);

        layoutWidget2 = new QWidget(Widget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 130, 231, 131));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        btn_enter = new QPushButton(layoutWidget2);
        btn_enter->setObjectName(QStringLiteral("btn_enter"));

        verticalLayout_3->addWidget(btn_enter);

        btn_change_pass = new QPushButton(layoutWidget2);
        btn_change_pass->setObjectName(QStringLiteral("btn_change_pass"));

        verticalLayout_3->addWidget(btn_change_pass);

        btn_info = new QPushButton(layoutWidget2);
        btn_info->setObjectName(QStringLiteral("btn_info"));

        verticalLayout_3->addWidget(btn_info);

        btn_exit = new QPushButton(layoutWidget2);
        btn_exit->setObjectName(QStringLiteral("btn_exit"));

        verticalLayout_3->addWidget(btn_exit);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\320\224\320\276\320\261\321\200\320\276 \320\277\320\276\320\266\320\260\320\273\320\276\320\262\320\260\321\202\321\214!", 0));
        label->setText(QApplication::translate("Widget", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\320\275\320\275\321\213\320\265:", 0));
        label_2->setText(QApplication::translate("Widget", "\320\233\320\276\320\263\320\270\320\275:", 0));
        label_3->setText(QApplication::translate("Widget", "\320\237\320\260\321\200\320\276\320\273\321\214:", 0));
        btn_enter->setText(QApplication::translate("Widget", "\320\222\320\276\320\271\321\202\320\270", 0));
        btn_change_pass->setText(QApplication::translate("Widget", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214", 0));
        btn_info->setText(QApplication::translate("Widget", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", 0));
        btn_exit->setText(QApplication::translate("Widget", "\320\222\321\213\320\271\321\202\320\270", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
