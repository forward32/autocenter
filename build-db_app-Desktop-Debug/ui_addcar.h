/********************************************************************************
** Form generated from reading UI file 'addcar.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCAR_H
#define UI_ADDCAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addcar
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *gbox_addcar;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *edt_firm;
    QLineEdit *edt_model;
    QLineEdit *edt_year;
    QLineEdit *edt_power;
    QComboBox *cmb_eng_type;
    QComboBox *cmb_body_type;
    QComboBox *cmb_drive_type;
    QComboBox *cmb_rudder_type;
    QLineEdit *edt_color;
    QComboBox *cmb_condition;
    QComboBox *cmb_cond;
    QComboBox *cmb_tv;
    QComboBox *cmb_navig;
    QLineEdit *edt_outgo;
    QLabel *label_15;
    QLineEdit *edt_price;
    QGroupBox *gbox_actions;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btn_add;
    QPushButton *btn_exit;
    QLabel *label_16;
    QComboBox *cmb_present;

    void setupUi(QWidget *addcar)
    {
        if (addcar->objectName().isEmpty())
            addcar->setObjectName(QStringLiteral("addcar"));
        addcar->resize(432, 540);
        verticalLayout = new QVBoxLayout(addcar);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gbox_addcar = new QGroupBox(addcar);
        gbox_addcar->setObjectName(QStringLiteral("gbox_addcar"));
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
        gbox_addcar->setPalette(palette);
        gbox_addcar->setAutoFillBackground(true);
        label = new QLabel(gbox_addcar);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 60, 161, 17));
        label_2 = new QLabel(gbox_addcar);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 30, 161, 17));
        label_3 = new QLabel(gbox_addcar);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 90, 101, 17));
        label_4 = new QLabel(gbox_addcar);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 120, 191, 17));
        label_5 = new QLabel(gbox_addcar);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 150, 111, 17));
        label_6 = new QLabel(gbox_addcar);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 180, 91, 17));
        label_7 = new QLabel(gbox_addcar);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 210, 61, 17));
        label_8 = new QLabel(gbox_addcar);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 240, 51, 17));
        label_9 = new QLabel(gbox_addcar);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 270, 41, 17));
        label_10 = new QLabel(gbox_addcar);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 300, 171, 17));
        label_11 = new QLabel(gbox_addcar);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 330, 111, 17));
        label_12 = new QLabel(gbox_addcar);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 360, 31, 17));
        label_13 = new QLabel(gbox_addcar);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 390, 91, 17));
        label_14 = new QLabel(gbox_addcar);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 450, 161, 17));
        edt_firm = new QLineEdit(gbox_addcar);
        edt_firm->setObjectName(QStringLiteral("edt_firm"));
        edt_firm->setGeometry(QRect(170, 20, 191, 27));
        edt_model = new QLineEdit(gbox_addcar);
        edt_model->setObjectName(QStringLiteral("edt_model"));
        edt_model->setGeometry(QRect(170, 50, 191, 27));
        edt_year = new QLineEdit(gbox_addcar);
        edt_year->setObjectName(QStringLiteral("edt_year"));
        edt_year->setGeometry(QRect(110, 80, 121, 27));
        edt_power = new QLineEdit(gbox_addcar);
        edt_power->setObjectName(QStringLiteral("edt_power"));
        edt_power->setGeometry(QRect(210, 110, 121, 27));
        cmb_eng_type = new QComboBox(gbox_addcar);
        cmb_eng_type->setObjectName(QStringLiteral("cmb_eng_type"));
        cmb_eng_type->setGeometry(QRect(130, 140, 201, 27));
        cmb_eng_type->setEditable(true);
        cmb_body_type = new QComboBox(gbox_addcar);
        cmb_body_type->setObjectName(QStringLiteral("cmb_body_type"));
        cmb_body_type->setGeometry(QRect(130, 170, 201, 27));
        cmb_body_type->setEditable(true);
        cmb_drive_type = new QComboBox(gbox_addcar);
        cmb_drive_type->setObjectName(QStringLiteral("cmb_drive_type"));
        cmb_drive_type->setGeometry(QRect(80, 200, 151, 27));
        cmb_drive_type->setEditable(true);
        cmb_rudder_type = new QComboBox(gbox_addcar);
        cmb_rudder_type->setObjectName(QStringLiteral("cmb_rudder_type"));
        cmb_rudder_type->setGeometry(QRect(80, 230, 151, 27));
        cmb_rudder_type->setEditable(true);
        edt_color = new QLineEdit(gbox_addcar);
        edt_color->setObjectName(QStringLiteral("edt_color"));
        edt_color->setGeometry(QRect(80, 260, 211, 27));
        cmb_condition = new QComboBox(gbox_addcar);
        cmb_condition->setObjectName(QStringLiteral("cmb_condition"));
        cmb_condition->setGeometry(QRect(190, 290, 211, 27));
        cmb_cond = new QComboBox(gbox_addcar);
        cmb_cond->setObjectName(QStringLiteral("cmb_cond"));
        cmb_cond->setGeometry(QRect(130, 320, 61, 27));
        cmb_cond->setEditable(true);
        cmb_tv = new QComboBox(gbox_addcar);
        cmb_tv->setObjectName(QStringLiteral("cmb_tv"));
        cmb_tv->setGeometry(QRect(130, 350, 61, 27));
        cmb_tv->setEditable(true);
        cmb_navig = new QComboBox(gbox_addcar);
        cmb_navig->setObjectName(QStringLiteral("cmb_navig"));
        cmb_navig->setGeometry(QRect(130, 380, 61, 27));
        cmb_navig->setEditable(true);
        edt_outgo = new QLineEdit(gbox_addcar);
        edt_outgo->setObjectName(QStringLiteral("edt_outgo"));
        edt_outgo->setGeometry(QRect(170, 440, 113, 27));
        label_15 = new QLabel(gbox_addcar);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 480, 51, 17));
        edt_price = new QLineEdit(gbox_addcar);
        edt_price->setObjectName(QStringLiteral("edt_price"));
        edt_price->setGeometry(QRect(170, 470, 113, 27));
        gbox_actions = new QGroupBox(gbox_addcar);
        gbox_actions->setObjectName(QStringLiteral("gbox_actions"));
        gbox_actions->setGeometry(QRect(289, 420, 121, 101));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush7(QColor(202, 201, 201, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush8(QColor(228, 228, 228, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush8);
        QBrush brush9(QColor(101, 100, 100, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush9);
        QBrush brush10(QColor(135, 134, 134, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        gbox_actions->setPalette(palette1);
        gbox_actions->setAutoFillBackground(true);
        layoutWidget = new QWidget(gbox_actions);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 111, 62));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        btn_add = new QPushButton(layoutWidget);
        btn_add->setObjectName(QStringLiteral("btn_add"));

        verticalLayout_2->addWidget(btn_add);

        btn_exit = new QPushButton(layoutWidget);
        btn_exit->setObjectName(QStringLiteral("btn_exit"));

        verticalLayout_2->addWidget(btn_exit);

        label_16 = new QLabel(gbox_addcar);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 420, 71, 17));
        cmb_present = new QComboBox(gbox_addcar);
        cmb_present->setObjectName(QStringLiteral("cmb_present"));
        cmb_present->setGeometry(QRect(130, 410, 61, 27));
        cmb_present->setEditable(true);

        verticalLayout->addWidget(gbox_addcar);


        retranslateUi(addcar);

        QMetaObject::connectSlotsByName(addcar);
    } // setupUi

    void retranslateUi(QWidget *addcar)
    {
        addcar->setWindowTitle(QApplication::translate("addcar", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\217 \320\262 \320\272\320\260\321\202\320\260\320\273\320\276\320\263", 0));
        gbox_addcar->setTitle(QApplication::translate("addcar", "\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\320\265 \320\260\320\275\320\272\320\265\321\202\321\203 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\217:", 0));
        label->setText(QApplication::translate("addcar", "\320\234\320\276\320\264\320\265\320\273\321\214 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\217:", 0));
        label_2->setText(QApplication::translate("addcar", "\320\244\320\270\321\200\320\274\320\260 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\217:", 0));
        label_3->setText(QApplication::translate("addcar", "\320\223\320\276\320\264 \320\262\321\213\320\277\321\203\321\201\320\272\320\260:", 0));
        label_4->setText(QApplication::translate("addcar", "\320\234\320\276\321\211\320\275\320\276\321\201\321\202\321\214 \320\264\320\262\320\270\320\263\320\260\321\202\320\265\320\273\321\217 (\320\273/c):", 0));
        label_5->setText(QApplication::translate("addcar", "\320\242\320\270\320\277 \320\264\320\262\320\270\320\263\320\260\321\202\320\265\320\273\321\217:", 0));
        label_6->setText(QApplication::translate("addcar", "\320\242\320\270\320\277 \320\272\321\203\320\267\320\276\320\262\320\260:", 0));
        label_7->setText(QApplication::translate("addcar", "\320\237\321\200\320\270\320\262\320\276\320\264:", 0));
        label_8->setText(QApplication::translate("addcar", "\320\240\321\203\320\273\321\214:", 0));
        label_9->setText(QApplication::translate("addcar", "\320\246\320\262\320\265\321\202:", 0));
        label_10->setText(QApplication::translate("addcar", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\217:", 0));
        label_11->setText(QApplication::translate("addcar", "\320\232\320\276\320\275\320\264\320\270\321\206\320\270\320\276\320\275\320\265\321\200:", 0));
        label_12->setText(QApplication::translate("addcar", "TV:", 0));
        label_13->setText(QApplication::translate("addcar", "\320\235\320\260\320\262\320\270\320\263\320\260\321\206\320\270\321\217:", 0));
        label_14->setText(QApplication::translate("addcar", "\320\240\320\260\321\201\321\205\320\276\320\264 \320\275\320\260 100 \320\272\320\274 (\320\273):", 0));
        cmb_eng_type->clear();
        cmb_eng_type->insertItems(0, QStringList()
         << QApplication::translate("addcar", "i", 0)
         << QApplication::translate("addcar", "tg", 0)
         << QApplication::translate("addcar", "d", 0)
         << QApplication::translate("addcar", "td", 0)
         << QApplication::translate("addcar", "bt", 0)
         << QApplication::translate("addcar", "c", 0)
        );
        cmb_body_type->clear();
        cmb_body_type->insertItems(0, QStringList()
         << QApplication::translate("addcar", "Sedan", 0)
         << QApplication::translate("addcar", "Cabriolet", 0)
         << QApplication::translate("addcar", "Avant", 0)
         << QApplication::translate("addcar", "H-back", 0)
         << QApplication::translate("addcar", "Miniven", 0)
         << QApplication::translate("addcar", "Coupe", 0)
         << QApplication::translate("addcar", "Jeep", 0)
        );
        cmb_drive_type->clear();
        cmb_drive_type->insertItems(0, QStringList()
         << QApplication::translate("addcar", "front", 0)
         << QApplication::translate("addcar", "back", 0)
         << QApplication::translate("addcar", "both", 0)
        );
        cmb_rudder_type->clear();
        cmb_rudder_type->insertItems(0, QStringList()
         << QApplication::translate("addcar", "left", 0)
         << QApplication::translate("addcar", "right", 0)
        );
        cmb_condition->clear();
        cmb_condition->insertItems(0, QStringList()
         << QApplication::translate("addcar", "Best", 0)
         << QApplication::translate("addcar", "Good", 0)
         << QApplication::translate("addcar", "Middle", 0)
         << QApplication::translate("addcar", "Crash", 0)
        );
        cmb_cond->clear();
        cmb_cond->insertItems(0, QStringList()
         << QApplication::translate("addcar", "Yes", 0)
         << QApplication::translate("addcar", "No", 0)
        );
        cmb_tv->clear();
        cmb_tv->insertItems(0, QStringList()
         << QApplication::translate("addcar", "Yes", 0)
         << QApplication::translate("addcar", "No", 0)
        );
        cmb_navig->clear();
        cmb_navig->insertItems(0, QStringList()
         << QApplication::translate("addcar", "Yes", 0)
         << QApplication::translate("addcar", "No", 0)
        );
        label_15->setText(QApplication::translate("addcar", "\320\246\320\265\320\275\320\260:", 0));
        gbox_actions->setTitle(QApplication::translate("addcar", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\321\217:", 0));
        btn_add->setText(QApplication::translate("addcar", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        btn_exit->setText(QApplication::translate("addcar", "\320\222\321\213\321\205\320\276\320\264", 0));
        label_16->setText(QApplication::translate("addcar", "\320\235\320\260\320\273\320\270\321\207\320\270\320\265:", 0));
        cmb_present->clear();
        cmb_present->insertItems(0, QStringList()
         << QApplication::translate("addcar", "Yes", 0)
         << QApplication::translate("addcar", "No", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class addcar: public Ui_addcar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCAR_H
