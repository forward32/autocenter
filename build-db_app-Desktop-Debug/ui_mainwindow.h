/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
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

class Ui_MainWindow
{
public:
    QGroupBox *SearchBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *edtfirm;
    QLabel *label_2;
    QLineEdit *edtmodel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *cmbstart;
    QLabel *label_6;
    QComboBox *cmbstop;
    QLabel *label_3;
    QCheckBox *chbox_from;
    QCheckBox *chbox_to;
    QLineEdit *edtpower;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *edt_start_price;
    QLabel *label_9;
    QLineEdit *edt_stop_price;
    QCheckBox *check_present;
    QPushButton *btn_search_car;
    QGroupBox *UserDataBox;
    QPushButton *btn_exit;
    QLabel *userdata;
    QTableView *CarsTable;
    QGroupBox *grbactions;
    QLabel *lbl_all_records;
    QLabel *lbl_finded;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btn_del;
    QPushButton *btn_change;
    QPushButton *btn_see_stat;
    QPushButton *btn_get_contract;
    QPushButton *btn_add_car;
    QPushButton *btn_reset;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(981, 581);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(227, 227, 227, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(241, 241, 241, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(113, 113, 113, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(151, 151, 151, 255));
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
        MainWindow->setPalette(palette);
        MainWindow->setAutoFillBackground(false);
        SearchBox = new QGroupBox(MainWindow);
        SearchBox->setObjectName(QStringLiteral("SearchBox"));
        SearchBox->setGeometry(QRect(10, 10, 661, 131));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush7(QColor(244, 244, 244, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush8(QColor(249, 249, 249, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush8);
        QBrush brush9(QColor(122, 122, 122, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush9);
        QBrush brush10(QColor(163, 163, 163, 255));
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
        SearchBox->setPalette(palette1);
        SearchBox->setAutoFillBackground(true);
        layoutWidget = new QWidget(SearchBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 20, 651, 103));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        edtfirm = new QLineEdit(layoutWidget);
        edtfirm->setObjectName(QStringLiteral("edtfirm"));

        horizontalLayout->addWidget(edtfirm);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        edtmodel = new QLineEdit(layoutWidget);
        edtmodel->setObjectName(QStringLiteral("edtmodel"));

        horizontalLayout->addWidget(edtmodel);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        cmbstart = new QComboBox(layoutWidget);
        cmbstart->setObjectName(QStringLiteral("cmbstart"));
        cmbstart->setEnabled(true);
        cmbstart->setMinimumSize(QSize(85, 0));
        cmbstart->setEditable(true);
        cmbstart->setMaxVisibleItems(5);
        cmbstart->setMaxCount(2013);
        cmbstart->setMinimumContentsLength(0);

        horizontalLayout_2->addWidget(cmbstart);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_2->addWidget(label_6);

        cmbstop = new QComboBox(layoutWidget);
        cmbstop->setObjectName(QStringLiteral("cmbstop"));
        cmbstop->setContextMenuPolicy(Qt::DefaultContextMenu);
        cmbstop->setEditable(true);
        cmbstop->setMaxVisibleItems(5);
        cmbstop->setMaxCount(2013);

        horizontalLayout_2->addWidget(cmbstop);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        chbox_from = new QCheckBox(layoutWidget);
        chbox_from->setObjectName(QStringLiteral("chbox_from"));
        chbox_from->setChecked(false);

        horizontalLayout_2->addWidget(chbox_from);

        chbox_to = new QCheckBox(layoutWidget);
        chbox_to->setObjectName(QStringLiteral("chbox_to"));

        horizontalLayout_2->addWidget(chbox_to);

        edtpower = new QLineEdit(layoutWidget);
        edtpower->setObjectName(QStringLiteral("edtpower"));

        horizontalLayout_2->addWidget(edtpower);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_3->addWidget(label_7);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_3->addWidget(label_8);

        edt_start_price = new QLineEdit(layoutWidget);
        edt_start_price->setObjectName(QStringLiteral("edt_start_price"));

        horizontalLayout_3->addWidget(edt_start_price);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_3->addWidget(label_9);

        edt_stop_price = new QLineEdit(layoutWidget);
        edt_stop_price->setObjectName(QStringLiteral("edt_stop_price"));

        horizontalLayout_3->addWidget(edt_stop_price);

        check_present = new QCheckBox(layoutWidget);
        check_present->setObjectName(QStringLiteral("check_present"));
        check_present->setChecked(true);

        horizontalLayout_3->addWidget(check_present);

        btn_search_car = new QPushButton(layoutWidget);
        btn_search_car->setObjectName(QStringLiteral("btn_search_car"));

        horizontalLayout_3->addWidget(btn_search_car);


        verticalLayout_2->addLayout(horizontalLayout_3);

        UserDataBox = new QGroupBox(MainWindow);
        UserDataBox->setObjectName(QStringLiteral("UserDataBox"));
        UserDataBox->setGeometry(QRect(690, 10, 261, 131));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush9);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush10);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush9);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush10);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        UserDataBox->setPalette(palette2);
        UserDataBox->setAutoFillBackground(true);
        btn_exit = new QPushButton(UserDataBox);
        btn_exit->setObjectName(QStringLiteral("btn_exit"));
        btn_exit->setGeometry(QRect(20, 80, 151, 27));
        userdata = new QLabel(UserDataBox);
        userdata->setObjectName(QStringLiteral("userdata"));
        userdata->setGeometry(QRect(20, 40, 161, 17));
        CarsTable = new QTableView(MainWindow);
        CarsTable->setObjectName(QStringLiteral("CarsTable"));
        CarsTable->setGeometry(QRect(10, 220, 941, 351));
        CarsTable->setAlternatingRowColors(true);
        CarsTable->setSelectionMode(QAbstractItemView::ExtendedSelection);
        CarsTable->setTextElideMode(Qt::ElideNone);
        CarsTable->setGridStyle(Qt::SolidLine);
        CarsTable->horizontalHeader()->setDefaultSectionSize(112);
        grbactions = new QGroupBox(MainWindow);
        grbactions->setObjectName(QStringLiteral("grbactions"));
        grbactions->setGeometry(QRect(10, 150, 941, 61));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush8);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush9);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush10);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush8);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        grbactions->setPalette(palette3);
        grbactions->setAutoFillBackground(true);
        lbl_all_records = new QLabel(grbactions);
        lbl_all_records->setObjectName(QStringLiteral("lbl_all_records"));
        lbl_all_records->setGeometry(QRect(10, 0, 231, 17));
        lbl_finded = new QLabel(grbactions);
        lbl_finded->setObjectName(QStringLiteral("lbl_finded"));
        lbl_finded->setGeometry(QRect(300, 0, 191, 17));
        layoutWidget1 = new QWidget(grbactions);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(7, 30, 931, 29));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        btn_del = new QPushButton(layoutWidget1);
        btn_del->setObjectName(QStringLiteral("btn_del"));

        horizontalLayout_4->addWidget(btn_del);

        btn_change = new QPushButton(layoutWidget1);
        btn_change->setObjectName(QStringLiteral("btn_change"));

        horizontalLayout_4->addWidget(btn_change);

        btn_see_stat = new QPushButton(layoutWidget1);
        btn_see_stat->setObjectName(QStringLiteral("btn_see_stat"));

        horizontalLayout_4->addWidget(btn_see_stat);

        btn_get_contract = new QPushButton(layoutWidget1);
        btn_get_contract->setObjectName(QStringLiteral("btn_get_contract"));

        horizontalLayout_4->addWidget(btn_get_contract);

        btn_add_car = new QPushButton(layoutWidget1);
        btn_add_car->setObjectName(QStringLiteral("btn_add_car"));

        horizontalLayout_4->addWidget(btn_add_car);

        btn_reset = new QPushButton(layoutWidget1);
        btn_reset->setObjectName(QStringLiteral("btn_reset"));

        horizontalLayout_4->addWidget(btn_reset);


        retranslateUi(MainWindow);

        cmbstart->setCurrentIndex(0);
        cmbstop->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\320\274\320\260\321\202\320\270\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\275\320\260\321\217 \321\201\320\270\321\201\321\202\320\265\320\274\320\260 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217", 0));
        SearchBox->setTitle(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272:", 0));
        label->setText(QApplication::translate("MainWindow", "\320\234\320\260\321\200\320\272\320\260:", 0));
        label_2->setText(QApplication::translate("MainWindow", "\320\234\320\276\320\264\320\265\320\273\321\214:", 0));
        label_4->setText(QApplication::translate("MainWindow", "\320\223\320\276\320\264:", 0));
        label_5->setText(QApplication::translate("MainWindow", "\320\276\321\202", 0));
        cmbstart->clear();
        cmbstart->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "2006", 0)
         << QApplication::translate("MainWindow", "2007", 0)
         << QApplication::translate("MainWindow", "2008", 0)
         << QApplication::translate("MainWindow", "2009", 0)
         << QApplication::translate("MainWindow", "2010", 0)
         << QApplication::translate("MainWindow", "2011", 0)
         << QApplication::translate("MainWindow", "2012", 0)
         << QApplication::translate("MainWindow", "2013", 0)
        );
#ifndef QT_NO_TOOLTIP
        cmbstart->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        cmbstart->setAccessibleDescription(QApplication::translate("MainWindow", "<html><head/><body><p>2006</p><p>2007</p><p>2008</p><p>2009</p><p>2010</p><p>2011</p><p>2012</p></body></html>", 0));
#endif // QT_NO_ACCESSIBILITY
        cmbstart->setCurrentText(QApplication::translate("MainWindow", "2006", 0));
        label_6->setText(QApplication::translate("MainWindow", "\320\264\320\276", 0));
        cmbstop->clear();
        cmbstop->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "2006", 0)
         << QApplication::translate("MainWindow", "2007", 0)
         << QApplication::translate("MainWindow", "2008", 0)
         << QApplication::translate("MainWindow", "2009", 0)
         << QApplication::translate("MainWindow", "2010", 0)
         << QApplication::translate("MainWindow", "2011", 0)
         << QApplication::translate("MainWindow", "2012", 0)
         << QApplication::translate("MainWindow", "2013", 0)
        );
#ifndef QT_NO_TOOLTIP
        cmbstop->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        cmbstop->setAccessibleDescription(QApplication::translate("MainWindow", "<html><head/><body><p>1</p><p>2</p><p>3</p></body></html>", 0));
#endif // QT_NO_ACCESSIBILITY
        cmbstop->setCurrentText(QApplication::translate("MainWindow", "2006", 0));
        label_3->setText(QApplication::translate("MainWindow", "\320\234\320\276\321\211\320\275\320\276\321\201\321\202\321\214:", 0));
        chbox_from->setText(QApplication::translate("MainWindow", "\320\236\321\202", 0));
        chbox_to->setText(QApplication::translate("MainWindow", "\320\224\320\276", 0));
        label_7->setText(QApplication::translate("MainWindow", "\320\246\320\265\320\275\320\260:", 0));
        label_8->setText(QApplication::translate("MainWindow", "\320\276\321\202", 0));
        edt_start_price->setText(QApplication::translate("MainWindow", "0", 0));
        label_9->setText(QApplication::translate("MainWindow", "\320\264\320\276", 0));
        edt_stop_price->setText(QString());
        check_present->setText(QApplication::translate("MainWindow", "\320\222 \320\275\320\260\320\273\320\270\321\207\320\270\320\270", 0));
        btn_search_car->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270", 0));
        UserDataBox->setTitle(QApplication::translate("MainWindow", "\320\236 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\265:", 0));
        btn_exit->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270 \320\270\320\267 \321\201\320\270\321\201\321\202\320\265\320\274\321\213", 0));
        userdata->setText(QString());
        grbactions->setTitle(QString());
        lbl_all_records->setText(QApplication::translate("MainWindow", "\320\222\321\201\320\265\320\263\320\276 \320\267\320\260\320\277\320\270\321\201\320\265\320\271 \320\262 \320\272\320\260\321\202\320\260\320\273\320\276\320\263\320\265:", 0));
        lbl_finded->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\271\320\264\320\265\320\275\320\276 \320\267\320\260\320\277\320\270\321\201\320\265\320\271: 0", 0));
        btn_del->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0));
        btn_change->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", 0));
        btn_see_stat->setText(QApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\277\321\200\320\276\320\264\320\260\320\266", 0));
        btn_get_contract->setText(QApplication::translate("MainWindow", "\320\236\321\204\320\276\321\200\320\274\320\270\321\202\321\214 \320\267\320\260\320\272\320\260\320\267", 0));
        btn_add_car->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\260\320\262\321\202\320\276\320\274\320\276\320\261\320\270\320\273\321\214", 0));
        btn_reset->setText(QApplication::translate("MainWindow", "\320\222\320\265\321\201\321\214 \320\272\320\260\321\202\320\260\320\273\320\276\320\263", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
