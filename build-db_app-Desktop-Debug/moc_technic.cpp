/****************************************************************************
** Meta object code from reading C++ file 'technic.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Study/Project/db_app/technic.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'technic.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_technic_t {
    QByteArrayData data[14];
    char stringdata[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_technic_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_technic_t qt_meta_stringdata_technic = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 19),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 21),
QT_MOC_LITERAL(4, 51, 20),
QT_MOC_LITERAL(5, 72, 24),
QT_MOC_LITERAL(6, 97, 5),
QT_MOC_LITERAL(7, 103, 22),
QT_MOC_LITERAL(8, 126, 18),
QT_MOC_LITERAL(9, 145, 18),
QT_MOC_LITERAL(10, 164, 7),
QT_MOC_LITERAL(11, 172, 21),
QT_MOC_LITERAL(12, 194, 20),
QT_MOC_LITERAL(13, 215, 19)
    },
    "technic\0on_btn_exit_clicked\0\0"
    "on_btn_search_clicked\0on_btn_start_clicked\0"
    "on_tbl_details_activated\0index\0"
    "on_tbl_details_clicked\0on_btn_del_clicked\0"
    "on_btn_add_clicked\0checked\0"
    "on_btn_change_clicked\0on_btn_order_clicked\0"
    "on_btn_stat_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_technic[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08,
       3,    0,   70,    2, 0x08,
       4,    0,   71,    2, 0x08,
       5,    1,   72,    2, 0x08,
       7,    1,   75,    2, 0x08,
       8,    0,   78,    2, 0x08,
       9,    0,   79,    2, 0x08,
       9,    1,   80,    2, 0x08,
      11,    0,   83,    2, 0x08,
      12,    0,   84,    2, 0x08,
      13,    0,   85,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void technic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        technic *_t = static_cast<technic *>(_o);
        switch (_id) {
        case 0: _t->on_btn_exit_clicked(); break;
        case 1: _t->on_btn_search_clicked(); break;
        case 2: _t->on_btn_start_clicked(); break;
        //case 3: _t->on_tbl_details_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_tbl_details_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->on_btn_del_clicked(); break;
        case 6: _t->on_btn_add_clicked(); break;
        //case 7: _t->on_btn_add_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_btn_change_clicked(); break;
        case 9: _t->on_btn_order_clicked(); break;
        case 10: _t->on_btn_stat_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject technic::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_technic.data,
      qt_meta_data_technic,  qt_static_metacall, 0, 0}
};


const QMetaObject *technic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *technic::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_technic.stringdata))
        return static_cast<void*>(const_cast< technic*>(this));
    return QWidget::qt_metacast(_clname);
}

int technic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
