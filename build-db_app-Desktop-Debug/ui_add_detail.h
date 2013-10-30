/********************************************************************************
** Form generated from reading UI file 'add_detail.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_DETAIL_H
#define UI_ADD_DETAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_detail
{
public:
    QLabel *lbl_info;
    QLabel *label;
    QPushButton *btn_apply;
    QPushButton *btn_exit;
    QTextEdit *text_info;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lbl_name;
    QLineEdit *edt_name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbl_firm;
    QLineEdit *edt_firm;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbl_type;
    QLineEdit *edt_type;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lbl_price;
    QLineEdit *edt_price;

    void setupUi(QWidget *add_detail)
    {
        if (add_detail->objectName().isEmpty())
            add_detail->setObjectName(QStringLiteral("add_detail"));
        add_detail->resize(381, 401);
        lbl_info = new QLabel(add_detail);
        lbl_info->setObjectName(QStringLiteral("lbl_info"));
        lbl_info->setGeometry(QRect(20, 240, 201, 21));
        label = new QLabel(add_detail);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 0, 151, 17));
        btn_apply = new QPushButton(add_detail);
        btn_apply->setObjectName(QStringLiteral("btn_apply"));
        btn_apply->setGeometry(QRect(20, 360, 171, 27));
        btn_exit = new QPushButton(add_detail);
        btn_exit->setObjectName(QStringLiteral("btn_exit"));
        btn_exit->setGeometry(QRect(200, 360, 171, 27));
        text_info = new QTextEdit(add_detail);
        text_info->setObjectName(QStringLiteral("text_info"));
        text_info->setGeometry(QRect(20, 260, 341, 91));
        widget = new QWidget(add_detail);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 30, 338, 171));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lbl_name = new QLabel(widget);
        lbl_name->setObjectName(QStringLiteral("lbl_name"));

        horizontalLayout->addWidget(lbl_name);

        edt_name = new QLineEdit(widget);
        edt_name->setObjectName(QStringLiteral("edt_name"));

        horizontalLayout->addWidget(edt_name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lbl_firm = new QLabel(widget);
        lbl_firm->setObjectName(QStringLiteral("lbl_firm"));

        horizontalLayout_2->addWidget(lbl_firm);

        edt_firm = new QLineEdit(widget);
        edt_firm->setObjectName(QStringLiteral("edt_firm"));

        horizontalLayout_2->addWidget(edt_firm);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lbl_type = new QLabel(widget);
        lbl_type->setObjectName(QStringLiteral("lbl_type"));

        horizontalLayout_3->addWidget(lbl_type);

        edt_type = new QLineEdit(widget);
        edt_type->setObjectName(QStringLiteral("edt_type"));

        horizontalLayout_3->addWidget(edt_type);


        verticalLayout->addLayout(horizontalLayout_3);

        widget1 = new QWidget(add_detail);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 200, 231, 29));
        horizontalLayout_4 = new QHBoxLayout(widget1);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        lbl_price = new QLabel(widget1);
        lbl_price->setObjectName(QStringLiteral("lbl_price"));

        horizontalLayout_4->addWidget(lbl_price);

        edt_price = new QLineEdit(widget1);
        edt_price->setObjectName(QStringLiteral("edt_price"));

        horizontalLayout_4->addWidget(edt_price);


        retranslateUi(add_detail);

        QMetaObject::connectSlotsByName(add_detail);
    } // setupUi

    void retranslateUi(QWidget *add_detail)
    {
        add_detail->setWindowTitle(QApplication::translate("add_detail", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\264\320\265\321\202\320\260\320\273\320\270", 0));
        lbl_info->setText(QApplication::translate("add_detail", "\320\224\320\276\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214\320\275\320\276\320\265 \320\276\320\277\320\270\321\201\320\260\320\275\320\270\320\265:", 0));
        label->setText(QApplication::translate("add_detail", "\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\320\265 \320\262\321\201\320\265 \320\277\320\276\320\273\321\217:", 0));
        btn_apply->setText(QApplication::translate("add_detail", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        btn_exit->setText(QApplication::translate("add_detail", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", 0));
        lbl_name->setText(QApplication::translate("add_detail", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \320\264\320\265\321\202\320\260\320\273\320\270:", 0));
        lbl_firm->setText(QApplication::translate("add_detail", "\320\244\320\270\321\200\320\274\320\260-\320\277\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214:", 0));
        lbl_type->setText(QApplication::translate("add_detail", "\320\232 \320\272\320\260\320\272\320\276\320\274\321\203 \321\202\320\270\320\277\321\203 \320\276\321\202\320\275\320\276\321\201\320\270\321\202\321\201\321\217: ", 0));
        lbl_price->setText(QApplication::translate("add_detail", "\320\241\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214 \320\264\320\265\321\202\320\260\320\273\320\270:", 0));
    } // retranslateUi

};

namespace Ui {
    class add_detail: public Ui_add_detail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_DETAIL_H
