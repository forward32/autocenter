/********************************************************************************
** Form generated from reading UI file 'contract.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTRACT_H
#define UI_CONTRACT_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_contract
{
public:
    QGroupBox *gbox_info;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *edt_name;
    QLabel *label_2;
    QLineEdit *edt_otch;
    QLabel *label_3;
    QLineEdit *edt_surname;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *sb_day_person;
    QSpinBox *sb_mnt_person;
    QSpinBox *sb_year_person;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *sb_day_sale;
    QSpinBox *sb_mnt_sale;
    QSpinBox *sb_year_sale;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_docontract;
    QPushButton *btn_exit;

    void setupUi(QWidget *contract)
    {
        if (contract->objectName().isEmpty())
            contract->setObjectName(QStringLiteral("contract"));
        contract->resize(357, 413);
        gbox_info = new QGroupBox(contract);
        gbox_info->setObjectName(QStringLiteral("gbox_info"));
        gbox_info->setGeometry(QRect(20, 10, 311, 351));
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
        gbox_info->setPalette(palette);
        gbox_info->setAutoFillBackground(true);
        layoutWidget = new QWidget(gbox_info);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 291, 311));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        edt_name = new QLineEdit(layoutWidget);
        edt_name->setObjectName(QStringLiteral("edt_name"));

        verticalLayout->addWidget(edt_name);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        edt_otch = new QLineEdit(layoutWidget);
        edt_otch->setObjectName(QStringLiteral("edt_otch"));

        verticalLayout->addWidget(edt_otch);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        edt_surname = new QLineEdit(layoutWidget);
        edt_surname->setObjectName(QStringLiteral("edt_surname"));

        verticalLayout->addWidget(edt_surname);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        sb_day_person = new QSpinBox(layoutWidget);
        sb_day_person->setObjectName(QStringLiteral("sb_day_person"));
        sb_day_person->setMinimum(1);
        sb_day_person->setMaximum(31);

        horizontalLayout_3->addWidget(sb_day_person);

        sb_mnt_person = new QSpinBox(layoutWidget);
        sb_mnt_person->setObjectName(QStringLiteral("sb_mnt_person"));
        sb_mnt_person->setMinimum(1);
        sb_mnt_person->setMaximum(12);
        sb_mnt_person->setValue(1);

        horizontalLayout_3->addWidget(sb_mnt_person);

        sb_year_person = new QSpinBox(layoutWidget);
        sb_year_person->setObjectName(QStringLiteral("sb_year_person"));
        sb_year_person->setMinimum(1910);
        sb_year_person->setMaximum(2020);
        sb_year_person->setValue(1990);

        horizontalLayout_3->addWidget(sb_year_person);


        verticalLayout->addLayout(horizontalLayout_3);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        sb_day_sale = new QSpinBox(layoutWidget);
        sb_day_sale->setObjectName(QStringLiteral("sb_day_sale"));
        sb_day_sale->setMinimum(1);
        sb_day_sale->setMaximum(31);

        horizontalLayout_2->addWidget(sb_day_sale);

        sb_mnt_sale = new QSpinBox(layoutWidget);
        sb_mnt_sale->setObjectName(QStringLiteral("sb_mnt_sale"));
        sb_mnt_sale->setMinimum(1);
        sb_mnt_sale->setMaximum(12);

        horizontalLayout_2->addWidget(sb_mnt_sale);

        sb_year_sale = new QSpinBox(layoutWidget);
        sb_year_sale->setObjectName(QStringLiteral("sb_year_sale"));
        sb_year_sale->setMinimum(2013);
        sb_year_sale->setMaximum(2050);

        horizontalLayout_2->addWidget(sb_year_sale);


        verticalLayout->addLayout(horizontalLayout_2);

        layoutWidget1 = new QWidget(contract);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 370, 311, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_docontract = new QPushButton(layoutWidget1);
        btn_docontract->setObjectName(QStringLiteral("btn_docontract"));

        horizontalLayout->addWidget(btn_docontract);

        btn_exit = new QPushButton(layoutWidget1);
        btn_exit->setObjectName(QStringLiteral("btn_exit"));

        horizontalLayout->addWidget(btn_exit);


        retranslateUi(contract);

        QMetaObject::connectSlotsByName(contract);
    } // setupUi

    void retranslateUi(QWidget *contract)
    {
        contract->setWindowTitle(QApplication::translate("contract", "\320\241\320\276\321\201\321\202\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\272\320\276\320\275\321\202\321\200\320\260\320\272\321\202\320\260 \320\277\321\200\320\276\320\264\320\260\320\266\320\270", 0));
        gbox_info->setTitle(QApplication::translate("contract", "\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\320\265 \320\262\321\201\320\265 \320\277\320\276\320\273\321\217:", 0));
        label->setText(QApplication::translate("contract", "\320\230\320\274\321\217 \320\277\320\276\320\272\321\203\320\277\320\260\321\202\320\265\320\273\321\217:", 0));
        label_2->setText(QApplication::translate("contract", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276 \320\277\320\276\320\272\321\203\320\277\320\260\321\202\320\265\320\273\321\217:", 0));
        label_3->setText(QApplication::translate("contract", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217 \320\277\320\276\320\272\321\203\320\277\320\260\321\202\320\265\320\273\321\217:", 0));
        label_4->setText(QApplication::translate("contract", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217(\320\264\320\265\320\275\321\214.\320\274\320\265\321\201\321\217\321\206.\320\263\320\276\320\264):", 0));
        label_5->setText(QApplication::translate("contract", "\320\224\320\260\321\202\320\260 \320\277\321\200\320\276\320\264\320\260\320\266\320\270:", 0));
#ifndef QT_NO_TOOLTIP
        sb_day_sale->setToolTip(QApplication::translate("contract", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        btn_docontract->setText(QApplication::translate("contract", "\320\223\320\276\321\202\320\276\320\262\320\276", 0));
        btn_exit->setText(QApplication::translate("contract", "\320\222\321\213\321\205\320\276\320\264", 0));
    } // retranslateUi

};

namespace Ui {
    class contract: public Ui_contract {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTRACT_H
