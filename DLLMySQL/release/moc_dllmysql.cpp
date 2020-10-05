/****************************************************************************
** Meta object code from reading C++ file 'dllmysql.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dllmysql.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dllmysql.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DLLMySQL_t {
    QByteArrayData data[14];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DLLMySQL_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DLLMySQL_t qt_meta_stringdata_DLLMySQL = {
    {
QT_MOC_LITERAL(0, 0, 8), // "DLLMySQL"
QT_MOC_LITERAL(1, 9, 12), // "saldoSignal2"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "saldoSql"
QT_MOC_LITERAL(4, 32, 6), // "pinSql"
QT_MOC_LITERAL(5, 39, 4), // "tili"
QT_MOC_LITERAL(6, 44, 10), // "tiliSignal"
QT_MOC_LITERAL(7, 55, 11), // "saldoSlotti"
QT_MOC_LITERAL(8, 67, 5), // "saldo"
QT_MOC_LITERAL(9, 73, 3), // "pin"
QT_MOC_LITERAL(10, 77, 8), // "tiliSlot"
QT_MOC_LITERAL(11, 86, 5), // "array"
QT_MOC_LITERAL(12, 92, 1), // "i"
QT_MOC_LITERAL(13, 94, 1) // "j"

    },
    "DLLMySQL\0saldoSignal2\0\0saldoSql\0pinSql\0"
    "tili\0tiliSignal\0saldoSlotti\0saldo\0pin\0"
    "tiliSlot\0array\0i\0j"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DLLMySQL[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x06 /* Public */,
       6,    3,   41,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    3,   48,    2, 0x0a /* Public */,
      10,    3,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Int, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    2,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Int, QMetaType::QString,    8,    9,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,   11,   12,   13,

       0        // eod
};

void DLLMySQL::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DLLMySQL *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->saldoSignal2((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->tiliSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->saldoSlotti((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 3: _t->tiliSlot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DLLMySQL::*)(double , int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLMySQL::saldoSignal2)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DLLMySQL::*)(QString , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLMySQL::tiliSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DLLMySQL::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_DLLMySQL.data,
    qt_meta_data_DLLMySQL,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DLLMySQL::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DLLMySQL::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DLLMySQL.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DLLMySQL::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DLLMySQL::saldoSignal2(double _t1, int _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DLLMySQL::tiliSignal(QString _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
