/****************************************************************************
** Meta object code from reading C++ file 'rahansiirto.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../rahansiirto.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rahansiirto.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RahanSiirto_t {
    QByteArrayData data[17];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RahanSiirto_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RahanSiirto_t qt_meta_stringdata_RahanSiirto = {
    {
QT_MOC_LITERAL(0, 0, 11), // "RahanSiirto"
QT_MOC_LITERAL(1, 12, 14), // "siirtoSignaali"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 11), // "paluuSignal"
QT_MOC_LITERAL(4, 40, 16), // "timerResetSignal"
QT_MOC_LITERAL(5, 57, 14), // "kirjainVastaan"
QT_MOC_LITERAL(6, 72, 7), // "kirjain"
QT_MOC_LITERAL(7, 80, 13), // "numeroVastaan"
QT_MOC_LITERAL(8, 94, 6), // "numero"
QT_MOC_LITERAL(9, 101, 9), // "clearSlot"
QT_MOC_LITERAL(10, 111, 8), // "clearNum"
QT_MOC_LITERAL(11, 120, 22), // "on_jatkaButton_clicked"
QT_MOC_LITERAL(12, 143, 22), // "on_palaaButton_clicked"
QT_MOC_LITERAL(13, 166, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(14, 188, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(15, 212, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(16, 236, 23) // "on_pushButton_4_clicked"

    },
    "RahanSiirto\0siirtoSignaali\0\0paluuSignal\0"
    "timerResetSignal\0kirjainVastaan\0kirjain\0"
    "numeroVastaan\0numero\0clearSlot\0clearNum\0"
    "on_jatkaButton_clicked\0on_palaaButton_clicked\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_3_clicked\0on_pushButton_4_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RahanSiirto[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   79,    2, 0x06 /* Public */,
       3,    0,   86,    2, 0x06 /* Public */,
       4,    0,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   88,    2, 0x0a /* Public */,
       7,    1,   91,    2, 0x0a /* Public */,
       9,    0,   94,    2, 0x0a /* Public */,
      10,    0,   95,    2, 0x0a /* Public */,
      11,    0,   96,    2, 0x08 /* Private */,
      12,    0,   97,    2, 0x08 /* Private */,
      13,    0,   98,    2, 0x08 /* Private */,
      14,    0,   99,    2, 0x08 /* Private */,
      15,    0,  100,    2, 0x08 /* Private */,
      16,    0,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::QString, QMetaType::Int,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RahanSiirto::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RahanSiirto *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->siirtoSignaali((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->paluuSignal(); break;
        case 2: _t->timerResetSignal(); break;
        case 3: _t->kirjainVastaan((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->numeroVastaan((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->clearSlot(); break;
        case 6: _t->clearNum(); break;
        case 7: _t->on_jatkaButton_clicked(); break;
        case 8: _t->on_palaaButton_clicked(); break;
        case 9: _t->on_pushButton_clicked(); break;
        case 10: _t->on_pushButton_2_clicked(); break;
        case 11: _t->on_pushButton_3_clicked(); break;
        case 12: _t->on_pushButton_4_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RahanSiirto::*)(double , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RahanSiirto::siirtoSignaali)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RahanSiirto::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RahanSiirto::paluuSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RahanSiirto::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RahanSiirto::timerResetSignal)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RahanSiirto::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_RahanSiirto.data,
    qt_meta_data_RahanSiirto,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RahanSiirto::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RahanSiirto::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RahanSiirto.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int RahanSiirto::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void RahanSiirto::siirtoSignaali(double _t1, QString _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RahanSiirto::paluuSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void RahanSiirto::timerResetSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
