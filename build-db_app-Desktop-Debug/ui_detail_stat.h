/********************************************************************************
** Form generated from reading UI file 'detail_stat.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAIL_STAT_H
#define UI_DETAIL_STAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_detail_stat
{
public:
    QTableView *stat_tbl;
    QGroupBox *gbox_stat;
    QLabel *label;
    QLabel *label_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *sb_day;
    QSpinBox *sb_mnt;
    QSpinBox *sb_year;
    QPushButton *btn_search;
    QPushButton *btn_all_cat;
    QPushButton *btn_del;
    QPushButton *btn_exit;

    void setupUi(QWidget *detail_stat)
    {
        if (detail_stat->objectName().isEmpty())
            detail_stat->setObjectName(QStringLiteral("detail_stat"));
        detail_stat->resize(819, 495);
        stat_tbl = new QTableView(detail_stat);
        stat_tbl->setObjectName(QStringLiteral("stat_tbl"));
        stat_tbl->setGeometry(QRect(10, 90, 801, 401));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stat_tbl->sizePolicy().hasHeightForWidth());
        stat_tbl->setSizePolicy(sizePolicy);
        stat_tbl->horizontalHeader()->setDefaultSectionSize(110);
        stat_tbl->horizontalHeader()->setHighlightSections(true);
        gbox_stat = new QGroupBox(detail_stat);
        gbox_stat->setObjectName(QStringLiteral("gbox_stat"));
        gbox_stat->setGeometry(QRect(10, 0, 581, 81));
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
        gbox_stat->setPalette(palette);
        gbox_stat->setAutoFillBackground(true);
        label = new QLabel(gbox_stat);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 60, 151, 17));
        label_3 = new QLabel(gbox_stat);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(210, 60, 171, 17));
        layoutWidget = new QWidget(gbox_stat);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 20, 331, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        sb_day = new QSpinBox(layoutWidget);
        sb_day->setObjectName(QStringLiteral("sb_day"));
        sb_day->setMinimum(1);
        sb_day->setMaximum(31);

        horizontalLayout->addWidget(sb_day);

        sb_mnt = new QSpinBox(layoutWidget);
        sb_mnt->setObjectName(QStringLiteral("sb_mnt"));
        sb_mnt->setMinimum(1);
        sb_mnt->setMaximum(12);

        horizontalLayout->addWidget(sb_mnt);

        sb_year = new QSpinBox(layoutWidget);
        sb_year->setObjectName(QStringLiteral("sb_year"));
        sb_year->setMinimum(2013);
        sb_year->setMaximum(2050);

        horizontalLayout->addWidget(sb_year);

        btn_search = new QPushButton(gbox_stat);
        btn_search->setObjectName(QStringLiteral("btn_search"));
        btn_search->setGeometry(QRect(340, 0, 111, 27));
        btn_all_cat = new QPushButton(gbox_stat);
        btn_all_cat->setObjectName(QStringLiteral("btn_all_cat"));
        btn_all_cat->setGeometry(QRect(460, 0, 111, 27));
        btn_del = new QPushButton(gbox_stat);
        btn_del->setObjectName(QStringLiteral("btn_del"));
        btn_del->setGeometry(QRect(340, 30, 111, 27));
        btn_exit = new QPushButton(gbox_stat);
        btn_exit->setObjectName(QStringLiteral("btn_exit"));
        btn_exit->setGeometry(QRect(460, 30, 111, 27));

        retranslateUi(detail_stat);

        QMetaObject::connectSlotsByName(detail_stat);
    } // setupUi

    void retranslateUi(QWidget *detail_stat)
    {
        detail_stat->setWindowTitle(QApplication::translate("detail_stat", "\320\226\321\203\321\200\320\275\320\260\320\273 \320\277\321\200\320\276\320\264\320\260\320\266 \320\264\320\265\321\202\320\260\320\273\320\265\320\271", 0));
        gbox_stat->setTitle(QApplication::translate("detail_stat", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200 \320\277\321\200\320\276\320\264\320\260\320\266:", 0));
        label->setText(QApplication::translate("detail_stat", "\320\222\321\201\320\265\320\263\320\276 \320\267\320\260\320\277\320\270\321\201\320\265\320\271:", 0));
        label_3->setText(QApplication::translate("detail_stat", "\320\235\320\260\320\271\320\264\320\265\320\275\320\276 \320\267\320\260\320\277\320\270\321\201\320\265\320\271: 0", 0));
        label_2->setText(QApplication::translate("detail_stat", "\320\224\320\260\321\202\320\260:", 0));
        btn_search->setText(QApplication::translate("detail_stat", "\320\235\320\260\320\271\321\202\320\270", 0));
        btn_all_cat->setText(QApplication::translate("detail_stat", "\320\222\321\201\320\265 \320\277\321\200\320\276\320\264\320\260\320\266\320\270", 0));
        btn_del->setText(QApplication::translate("detail_stat", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0));
        btn_exit->setText(QApplication::translate("detail_stat", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class detail_stat: public Ui_detail_stat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAIL_STAT_H
