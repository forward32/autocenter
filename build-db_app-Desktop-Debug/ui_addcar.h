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
#include <QtWidgets/QHBoxLayout>
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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_add;
    QPushButton *btn_exit;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
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
    QComboBox *cmb_present;
    QLineEdit *edt_outgo;
    QLineEdit *edt_price;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QLabel *label;
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
    QLabel *label_16;
    QLabel *label_14;
    QLabel *label_15;

    void setupUi(QWidget *addcar)
    {
        if (addcar->objectName().isEmpty())
            addcar->setObjectName(QStringLiteral("addcar"));
        addcar->resize(416, 578);
        verticalLayout = new QVBoxLayout(addcar);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gbox_addcar = new QGroupBox(addcar);
        gbox_addcar->setObjectName(QStringLiteral("gbox_addcar"));
        gbox_addcar->setEnabled(true);
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
        layoutWidget = new QWidget(gbox_addcar);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 520, 371, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_add = new QPushButton(layoutWidget);
        btn_add->setObjectName(QStringLiteral("btn_add"));

        horizontalLayout->addWidget(btn_add);

        btn_exit = new QPushButton(layoutWidget);
        btn_exit->setObjectName(QStringLiteral("btn_exit"));

        horizontalLayout->addWidget(btn_exit);

        layoutWidget1 = new QWidget(gbox_addcar);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(204, 30, 181, 481));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        edt_firm = new QLineEdit(layoutWidget1);
        edt_firm->setObjectName(QStringLiteral("edt_firm"));

        verticalLayout_4->addWidget(edt_firm);

        edt_model = new QLineEdit(layoutWidget1);
        edt_model->setObjectName(QStringLiteral("edt_model"));

        verticalLayout_4->addWidget(edt_model);

        edt_year = new QLineEdit(layoutWidget1);
        edt_year->setObjectName(QStringLiteral("edt_year"));

        verticalLayout_4->addWidget(edt_year);

        edt_power = new QLineEdit(layoutWidget1);
        edt_power->setObjectName(QStringLiteral("edt_power"));

        verticalLayout_4->addWidget(edt_power);

        cmb_eng_type = new QComboBox(layoutWidget1);
        cmb_eng_type->setObjectName(QStringLiteral("cmb_eng_type"));
        cmb_eng_type->setEditable(true);

        verticalLayout_4->addWidget(cmb_eng_type);

        cmb_body_type = new QComboBox(layoutWidget1);
        cmb_body_type->setObjectName(QStringLiteral("cmb_body_type"));
        cmb_body_type->setEditable(true);

        verticalLayout_4->addWidget(cmb_body_type);

        cmb_drive_type = new QComboBox(layoutWidget1);
        cmb_drive_type->setObjectName(QStringLiteral("cmb_drive_type"));
        cmb_drive_type->setEditable(true);

        verticalLayout_4->addWidget(cmb_drive_type);

        cmb_rudder_type = new QComboBox(layoutWidget1);
        cmb_rudder_type->setObjectName(QStringLiteral("cmb_rudder_type"));
        cmb_rudder_type->setEditable(true);

        verticalLayout_4->addWidget(cmb_rudder_type);

        edt_color = new QLineEdit(layoutWidget1);
        edt_color->setObjectName(QStringLiteral("edt_color"));

        verticalLayout_4->addWidget(edt_color);

        cmb_condition = new QComboBox(layoutWidget1);
        cmb_condition->setObjectName(QStringLiteral("cmb_condition"));
        cmb_condition->setEditable(true);

        verticalLayout_4->addWidget(cmb_condition);

        cmb_cond = new QComboBox(layoutWidget1);
        cmb_cond->setObjectName(QStringLiteral("cmb_cond"));
        cmb_cond->setEditable(true);

        verticalLayout_4->addWidget(cmb_cond);

        cmb_tv = new QComboBox(layoutWidget1);
        cmb_tv->setObjectName(QStringLiteral("cmb_tv"));
        cmb_tv->setEditable(true);

        verticalLayout_4->addWidget(cmb_tv);

        cmb_navig = new QComboBox(layoutWidget1);
        cmb_navig->setObjectName(QStringLiteral("cmb_navig"));
        cmb_navig->setEditable(true);

        verticalLayout_4->addWidget(cmb_navig);

        cmb_present = new QComboBox(layoutWidget1);
        cmb_present->setObjectName(QStringLiteral("cmb_present"));
        cmb_present->setEditable(true);

        verticalLayout_4->addWidget(cmb_present);

        edt_outgo = new QLineEdit(layoutWidget1);
        edt_outgo->setObjectName(QStringLiteral("edt_outgo"));

        verticalLayout_4->addWidget(edt_outgo);

        edt_price = new QLineEdit(layoutWidget1);
        edt_price->setObjectName(QStringLiteral("edt_price"));

        verticalLayout_4->addWidget(edt_price);

        layoutWidget2 = new QWidget(gbox_addcar);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 30, 191, 481));
        verticalLayout_5 = new QVBoxLayout(layoutWidget2);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_5->addWidget(label_2);

        label = new QLabel(layoutWidget2);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_5->addWidget(label);

        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_5->addWidget(label_3);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_5->addWidget(label_4);

        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_5->addWidget(label_5);

        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_5->addWidget(label_6);

        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_5->addWidget(label_7);

        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_5->addWidget(label_8);

        label_9 = new QLabel(layoutWidget2);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_5->addWidget(label_9);

        label_10 = new QLabel(layoutWidget2);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_5->addWidget(label_10);

        label_11 = new QLabel(layoutWidget2);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_5->addWidget(label_11);

        label_12 = new QLabel(layoutWidget2);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout_5->addWidget(label_12);

        label_13 = new QLabel(layoutWidget2);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_5->addWidget(label_13);

        label_16 = new QLabel(layoutWidget2);
        label_16->setObjectName(QStringLiteral("label_16"));

        verticalLayout_5->addWidget(label_16);

        label_14 = new QLabel(layoutWidget2);
        label_14->setObjectName(QStringLiteral("label_14"));

        verticalLayout_5->addWidget(label_14);

        label_15 = new QLabel(layoutWidget2);
        label_15->setObjectName(QStringLiteral("label_15"));

        verticalLayout_5->addWidget(label_15);


        verticalLayout->addWidget(gbox_addcar);


        retranslateUi(addcar);

        QMetaObject::connectSlotsByName(addcar);
    } // setupUi

    void retranslateUi(QWidget *addcar)
    {
        addcar->setWindowTitle(QApplication::translate("addcar", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\217 \320\262 \320\272\320\260\321\202\320\260\320\273\320\276\320\263", 0));
        gbox_addcar->setTitle(QApplication::translate("addcar", "\320\227\320\260\320\277\320\276\320\273\320\275\320\270\321\202\320\265 \320\260\320\275\320\272\320\265\321\202\321\203 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\217:", 0));
        btn_add->setText(QApplication::translate("addcar", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        btn_exit->setText(QApplication::translate("addcar", "\320\222\321\213\321\205\320\276\320\264", 0));
        cmb_eng_type->clear();
        cmb_eng_type->insertItems(0, QStringList()
         << QApplication::translate("addcar", "\320\270\320\275\320\266\320\265\320\272\321\202\320\276\321\200", 0)
         << QApplication::translate("addcar", "\321\202\321\203\321\200\320\261\320\276\320\264\320\270\320\267\320\265\320\273\321\214", 0)
         << QApplication::translate("addcar", "\320\264\320\270\320\267\320\265\320\273\321\214", 0)
         << QApplication::translate("addcar", "\320\261\320\265\320\275\320\267\320\270\320\275-\321\202\321\203\321\200\320\261\320\270\320\275\320\260", 0)
         << QApplication::translate("addcar", "\320\261\320\270\321\202\321\203\321\200\320\261\320\276", 0)
         << QApplication::translate("addcar", "\320\272\320\276\320\274\320\277\321\200\320\265\321\201\321\201\320\276\321\200", 0)
        );
        cmb_body_type->clear();
        cmb_body_type->insertItems(0, QStringList()
         << QApplication::translate("addcar", "\320\241\320\265\320\264\320\260\320\275", 0)
         << QApplication::translate("addcar", "\320\220\320\262\320\260\320\275\321\202", 0)
         << QApplication::translate("addcar", "\320\224\320\266\320\270\320\277", 0)
         << QApplication::translate("addcar", "\320\234\320\270\320\275\320\270\320\262\320\265\320\275", 0)
         << QApplication::translate("addcar", "\320\232\320\260\320\261\321\200\320\270\320\276\320\273\320\265\321\202", 0)
         << QApplication::translate("addcar", "\320\232\321\203\320\277\320\265", 0)
         << QApplication::translate("addcar", "\320\245\320\265\321\202\321\207-\320\261\320\265\320\272", 0)
        );
        cmb_drive_type->clear();
        cmb_drive_type->insertItems(0, QStringList()
         << QApplication::translate("addcar", "\320\237\320\265\321\200\320\265\320\264\320\275\320\270\320\271", 0)
         << QApplication::translate("addcar", "\320\227\320\260\320\264\320\275\320\270\320\271", 0)
         << QApplication::translate("addcar", "\320\237\320\276\320\273\320\275\321\213\320\271", 0)
        );
        cmb_rudder_type->clear();
        cmb_rudder_type->insertItems(0, QStringList()
         << QApplication::translate("addcar", "\320\233\320\265\320\262\321\213\320\271", 0)
         << QApplication::translate("addcar", "\320\237\321\200\320\260\320\262\321\213\320\271", 0)
        );
        cmb_condition->clear();
        cmb_condition->insertItems(0, QStringList()
         << QApplication::translate("addcar", "\320\236\321\202\320\273\320\270\321\207\320\275\320\276\320\265", 0)
         << QApplication::translate("addcar", "\320\245\320\276\321\200\320\276\321\210\320\265\320\265", 0)
         << QApplication::translate("addcar", "\320\241\321\200\320\265\320\264\320\275\320\265\320\265", 0)
         << QApplication::translate("addcar", "\320\221\320\270\321\202\321\213\320\271", 0)
        );
        cmb_cond->clear();
        cmb_cond->insertItems(0, QStringList()
         << QApplication::translate("addcar", "\320\224\320\260", 0)
         << QApplication::translate("addcar", "\320\235\320\265\321\202", 0)
        );
        cmb_tv->clear();
        cmb_tv->insertItems(0, QStringList()
         << QApplication::translate("addcar", "\320\224\320\260", 0)
         << QApplication::translate("addcar", "\320\235\320\265\321\202", 0)
        );
        cmb_navig->clear();
        cmb_navig->insertItems(0, QStringList()
         << QApplication::translate("addcar", "\320\224\320\260", 0)
         << QApplication::translate("addcar", "\320\235\320\265\321\202", 0)
        );
        cmb_present->clear();
        cmb_present->insertItems(0, QStringList()
         << QApplication::translate("addcar", "\320\224\320\260", 0)
         << QApplication::translate("addcar", "\320\235\320\265\321\202", 0)
        );
        label_2->setText(QApplication::translate("addcar", "\320\244\320\270\321\200\320\274\320\260 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\217:", 0));
        label->setText(QApplication::translate("addcar", "\320\234\320\276\320\264\320\265\320\273\321\214 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\217:", 0));
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
        label_16->setText(QApplication::translate("addcar", "\320\235\320\260\320\273\320\270\321\207\320\270\320\265:", 0));
        label_14->setText(QApplication::translate("addcar", "\320\240\320\260\321\201\321\205\320\276\320\264 \320\275\320\260 100 \320\272\320\274 (\320\273):", 0));
        label_15->setText(QApplication::translate("addcar", "\320\246\320\265\320\275\320\260:", 0));
    } // retranslateUi

};

namespace Ui {
    class addcar: public Ui_addcar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCAR_H
