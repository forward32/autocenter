/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../db_app/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[16];
    char stringdata[294];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 25),
QT_MOC_LITERAL(2, 37, 0),
QT_MOC_LITERAL(3, 38, 20),
QT_MOC_LITERAL(4, 59, 5),
QT_MOC_LITERAL(5, 65, 19),
QT_MOC_LITERAL(6, 85, 21),
QT_MOC_LITERAL(7, 107, 19),
QT_MOC_LITERAL(8, 127, 20),
QT_MOC_LITERAL(9, 148, 22),
QT_MOC_LITERAL(10, 171, 27),
QT_MOC_LITERAL(11, 199, 23),
QT_MOC_LITERAL(12, 223, 20),
QT_MOC_LITERAL(13, 244, 18),
QT_MOC_LITERAL(14, 263, 21),
QT_MOC_LITERAL(15, 285, 7)
    },
    "MainWindow\0on_btn_search_car_clicked\0"
    "\0on_CarsTable_clicked\0index\0"
    "on_btn_exit_clicked\0on_chbox_from_clicked\0"
    "on_chbox_to_clicked\0on_btn_reset_clicked\0"
    "on_btn_add_car_clicked\0"
    "on_btn_get_contract_clicked\0"
    "on_btn_see_stat_clicked\0on_CarsTable_pressed\0"
    "on_btn_del_clicked\0on_btn_change_clicked\0"
    "checked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08,
       3,    1,   80,    2, 0x08,
       5,    0,   83,    2, 0x08,
       6,    0,   84,    2, 0x08,
       7,    0,   85,    2, 0x08,
       8,    0,   86,    2, 0x08,
       9,    0,   87,    2, 0x08,
      10,    0,   88,    2, 0x08,
      11,    0,   89,    2, 0x08,
      12,    1,   90,    2, 0x08,
      13,    0,   93,    2, 0x08,
      14,    0,   94,    2, 0x08,
      14,    1,   95,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_btn_search_car_clicked(); break;
        case 1: _t->on_CarsTable_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_btn_exit_clicked(); break;
        case 3: _t->on_chbox_from_clicked(); break;
        case 4: _t->on_chbox_to_clicked(); break;
        case 5: _t->on_btn_reset_clicked(); break;
        case 6: _t->on_btn_add_car_clicked(); break;
        case 7: _t->on_btn_get_contract_clicked(); break;
        case 8: _t->on_btn_see_stat_clicked(); break;
        //case 9: _t->on_CarsTable_pressed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->on_btn_del_clicked(); break;
        //case 11: _t->on_btn_change_clicked(); break;
        case 12: _t->on_btn_change_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE