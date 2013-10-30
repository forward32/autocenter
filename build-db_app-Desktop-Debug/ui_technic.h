/********************************************************************************
** Form generated from reading UI file 'technic.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TECHNIC_H
#define UI_TECHNIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_technic
{
public:
    QGroupBox *gb_user_info;
    QLabel *lbl_user;
    QPushButton *btn_exit;
    QGroupBox *gb_user_info_2;
    QPushButton *btn_search;
    QPushButton *btn_del;
    QPushButton *btn_add;
    QPushButton *btn_change;
    QPushButton *btn_stat;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lbl_name;
    QLineEdit *edt_name;
    QLabel *lbl_firm;
    QLineEdit *edt_firm;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbl_type;
    QLineEdit *edt_type;
    QLabel *lbl_price;
    QLineEdit *edt_price;
    QPushButton *btn_order;
    QPushButton *btn_start;
    QLabel *lbl_all_records;
    QLabel *lbl_finded;
    QTableView *tbl_details;

    void setupUi(QWidget *technic)
    {
        if (technic->objectName().isEmpty())
            technic->setObjectName(QStringLiteral("technic"));
        technic->resize(840, 519);
        gb_user_info = new QGroupBox(technic);
        gb_user_info->setObjectName(QStringLiteral("gb_user_info"));
        gb_user_info->setGeometry(QRect(630, 10, 201, 101));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(229, 228, 228, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(242, 241, 241, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(114, 114, 114, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(153, 152, 152, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        gb_user_info->setPalette(palette);
        gb_user_info->setAutoFillBackground(true);
        lbl_user = new QLabel(gb_user_info);
        lbl_user->setObjectName(QStringLiteral("lbl_user"));
        lbl_user->setGeometry(QRect(0, 30, 201, 17));
        btn_exit = new QPushButton(gb_user_info);
        btn_exit->setObjectName(QStringLiteral("btn_exit"));
        btn_exit->setGeometry(QRect(20, 60, 151, 27));
        gb_user_info_2 = new QGroupBox(technic);
        gb_user_info_2->setObjectName(QStringLiteral("gb_user_info_2"));
        gb_user_info_2->setGeometry(QRect(10, 10, 611, 121));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        gb_user_info_2->setPalette(palette1);
        gb_user_info_2->setAutoFillBackground(true);
        btn_search = new QPushButton(gb_user_info_2);
        btn_search->setObjectName(QStringLiteral("btn_search"));
        btn_search->setGeometry(QRect(490, 20, 111, 27));
        btn_del = new QPushButton(gb_user_info_2);
        btn_del->setObjectName(QStringLiteral("btn_del"));
        btn_del->setGeometry(QRect(490, 40, 111, 27));
        btn_add = new QPushButton(gb_user_info_2);
        btn_add->setObjectName(QStringLiteral("btn_add"));
        btn_add->setGeometry(QRect(490, 80, 111, 27));
        btn_change = new QPushButton(gb_user_info_2);
        btn_change->setObjectName(QStringLiteral("btn_change"));
        btn_change->setGeometry(QRect(490, 60, 111, 27));
        btn_stat = new QPushButton(gb_user_info_2);
        btn_stat->setObjectName(QStringLiteral("btn_stat"));
        btn_stat->setGeometry(QRect(0, 90, 151, 27));
        layoutWidget = new QWidget(gb_user_info_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 20, 479, 66));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lbl_name = new QLabel(layoutWidget);
        lbl_name->setObjectName(QStringLiteral("lbl_name"));

        horizontalLayout->addWidget(lbl_name);

        edt_name = new QLineEdit(layoutWidget);
        edt_name->setObjectName(QStringLiteral("edt_name"));

        horizontalLayout->addWidget(edt_name);

        lbl_firm = new QLabel(layoutWidget);
        lbl_firm->setObjectName(QStringLiteral("lbl_firm"));

        horizontalLayout->addWidget(lbl_firm);

        edt_firm = new QLineEdit(layoutWidget);
        edt_firm->setObjectName(QStringLiteral("edt_firm"));

        horizontalLayout->addWidget(edt_firm);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lbl_type = new QLabel(layoutWidget);
        lbl_type->setObjectName(QStringLiteral("lbl_type"));

        horizontalLayout_2->addWidget(lbl_type);

        edt_type = new QLineEdit(layoutWidget);
        edt_type->setObjectName(QStringLiteral("edt_type"));

        horizontalLayout_2->addWidget(edt_type);

        lbl_price = new QLabel(layoutWidget);
        lbl_price->setObjectName(QStringLiteral("lbl_price"));

        horizontalLayout_2->addWidget(lbl_price);

        edt_price = new QLineEdit(layoutWidget);
        edt_price->setObjectName(QStringLiteral("edt_price"));

        horizontalLayout_2->addWidget(edt_price);


        verticalLayout->addLayout(horizontalLayout_2);

        btn_order = new QPushButton(gb_user_info_2);
        btn_order->setObjectName(QStringLiteral("btn_order"));
        btn_order->setGeometry(QRect(160, 90, 151, 27));
        btn_start = new QPushButton(gb_user_info_2);
        btn_start->setObjectName(QStringLiteral("btn_start"));
        btn_start->setGeometry(QRect(320, 90, 151, 27));
        lbl_all_records = new QLabel(technic);
        lbl_all_records->setObjectName(QStringLiteral("lbl_all_records"));
        lbl_all_records->setGeometry(QRect(10, 140, 211, 17));
        lbl_finded = new QLabel(technic);
        lbl_finded->setObjectName(QStringLiteral("lbl_finded"));
        lbl_finded->setGeometry(QRect(270, 140, 161, 17));
        tbl_details = new QTableView(technic);
        tbl_details->setObjectName(QStringLiteral("tbl_details"));
        tbl_details->setGeometry(QRect(10, 160, 821, 351));
        tbl_details->horizontalHeader()->setDefaultSectionSize(130);
        tbl_details->horizontalHeader()->setMinimumSectionSize(57);

        retranslateUi(technic);

        QMetaObject::connectSlotsByName(technic);
    } // setupUi

    void retranslateUi(QWidget *technic)
    {
        technic->setWindowTitle(QApplication::translate("technic", "\320\227\320\260\320\277\321\207\320\260\321\201\321\202\320\270 \320\272 \320\260\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\217\320\274", 0));
        gb_user_info->setTitle(QApplication::translate("technic", "\320\236 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\265:", 0));
        lbl_user->setText(QApplication::translate("technic", "\320\222\321\213:", 0));
        btn_exit->setText(QApplication::translate("technic", "\320\222\321\213\320\271\321\202\320\270 \320\270\320\267 \321\201\320\270\321\201\321\202\320\265\320\274\321\213", 0));
        gb_user_info_2->setTitle(QApplication::translate("technic", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\321\217:", 0));
        btn_search->setText(QApplication::translate("technic", "\320\235\320\260\320\271\321\202\320\270", 0));
        btn_del->setText(QApplication::translate("technic", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0));
        btn_add->setText(QApplication::translate("technic", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        btn_change->setText(QApplication::translate("technic", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", 0));
        btn_stat->setText(QApplication::translate("technic", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\277\321\200\320\276\320\264\320\260\320\266", 0));
        lbl_name->setText(QApplication::translate("technic", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265:", 0));
        lbl_firm->setText(QApplication::translate("technic", "\320\244\320\270\321\200\320\274\320\260:", 0));
        lbl_type->setText(QApplication::translate("technic", "\320\242\320\270\320\277 \320\264\320\265\321\202\320\260\320\273\320\270:", 0));
        lbl_price->setText(QApplication::translate("technic", "\320\246\320\265\320\275\320\260:", 0));
        btn_order->setText(QApplication::translate("technic", "\320\236\321\204\320\276\321\200\320\274\320\270\321\202\321\214 \320\267\320\260\320\272\320\260\320\267", 0));
        btn_start->setText(QApplication::translate("technic", "\320\222\320\265\321\201\321\214 \320\272\320\260\321\202\320\260\320\273\320\276\320\263", 0));
        lbl_all_records->setText(QApplication::translate("technic", "\320\222\321\201\320\265\320\263\320\276 \320\267\320\260\320\277\320\270\321\201\320\265\320\271: ", 0));
        lbl_finded->setText(QApplication::translate("technic", "\320\235\320\260\320\271\320\264\320\265\320\275\320\276 \320\267\320\260\320\277\320\270\321\201\320\265\320\271:", 0));
    } // retranslateUi

};

namespace Ui {
    class technic: public Ui_technic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TECHNIC_H
