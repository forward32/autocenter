#-------------------------------------------------
#
# Project created by QtCreator 2013-09-15T18:30:53
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = db_app
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    mainwindow.cpp \
    Search.cpp \
    addcar.cpp \
    add.cpp \
    extra.cpp \
    contract.cpp \
    statistic.cpp \
    parse.cpp \
    technic.cpp \
    details_search.cpp \
    add_detail.cpp \
    detail_stat.cpp

HEADERS  += widget.h \
    mainwindow.h \
    search.h \
    addcar.h \
    add.h \
    extra.h \
    contract.h \
    statistic.h \
    parse.h \
    base_name.h \
    technic.h \
    start_filling_table.h \
    details_search.h \
    add_detail.h \
    detail_stat.h

FORMS    += widget.ui \
    mainwindow.ui \
    addcar.ui \
    contract.ui \
    statistic.ui \
    technic.ui \
    add_detail.ui \
    detail_stat.ui
