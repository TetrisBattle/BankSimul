/****************************************************************************
** Meta object code from reading C++ file 'rahannosto.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../rahannosto.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rahannosto.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RahanNosto_t {
    QByteArrayData data[18];
    char stringdata0[321];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RahanNosto_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RahanNosto_t qt_meta_stringdata_RahanNosto = {
    {
QT_MOC_LITERAL(0, 0, 10), // "RahanNosto"
QT_MOC_LITERAL(1, 11, 18), // "rahanNostoSignaali"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 12), // "returnSignal"
QT_MOC_LITERAL(4, 44, 16), // "timerResetSignal"
QT_MOC_LITERAL(5, 61, 24), // "on_peruutaButton_clicked"
QT_MOC_LITERAL(6, 86, 15), // "on_ok_2_clicked"
QT_MOC_LITERAL(7, 102, 18), // "on_pyyhi_2_clicked"
QT_MOC_LITERAL(8, 121, 17), // "on_yksi_2_clicked"
QT_MOC_LITERAL(9, 139, 18), // "on_kaksi_2_clicked"
QT_MOC_LITERAL(10, 158, 18), // "on_kolme_2_clicked"
QT_MOC_LITERAL(11, 177, 18), // "on_nelja_2_clicked"
QT_MOC_LITERAL(12, 196, 18), // "on_viisi_2_clicked"
QT_MOC_LITERAL(13, 215, 18), // "on_kuusi_2_clicked"
QT_MOC_LITERAL(14, 234, 22), // "on_seitseman_2_clicked"
QT_MOC_LITERAL(15, 257, 22), // "on_kahdeksan_2_clicked"
QT_MOC_LITERAL(16, 280, 21), // "on_yhdeksan_2_clicked"
QT_MOC_LITERAL(17, 302, 18) // "on_nolla_2_clicked"

    },
    "RahanNosto\0rahanNostoSignaali\0\0"
    "returnSignal\0timerResetSignal\0"
    "on_peruutaButton_clicked\0on_ok_2_clicked\0"
    "on_pyyhi_2_clicked\0on_yksi_2_clicked\0"
    "on_kaksi_2_clicked\0on_kolme_2_clicked\0"
    "on_nelja_2_clicked\0on_viisi_2_clicked\0"
    "on_kuusi_2_clicked\0on_seitseman_2_clicked\0"
    "on_kahdeksan_2_clicked\0on_yhdeksan_2_clicked\0"
    "on_nolla_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RahanNosto[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   94,    2, 0x06 /* Public */,
       3,    0,   99,    2, 0x06 /* Public */,
       4,    0,  100,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  101,    2, 0x08 /* Private */,
       6,    0,  102,    2, 0x08 /* Private */,
       7,    0,  103,    2, 0x08 /* Private */,
       8,    0,  104,    2, 0x08 /* Private */,
       9,    0,  105,    2, 0x08 /* Private */,
      10,    0,  106,    2, 0x08 /* Private */,
      11,    0,  107,    2, 0x08 /* Private */,
      12,    0,  108,    2, 0x08 /* Private */,
      13,    0,  109,    2, 0x08 /* Private */,
      14,    0,  110,    2, 0x08 /* Private */,
      15,    0,  111,    2, 0x08 /* Private */,
      16,    0,  112,    2, 0x08 /* Private */,
      17,    0,  113,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void RahanNosto::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RahanNosto *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rahanNostoSignaali((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->returnSignal(); break;
        case 2: _t->timerResetSignal(); break;
        case 3: _t->on_peruutaButton_clicked(); break;
        case 4: _t->on_ok_2_clicked(); break;
        case 5: _t->on_pyyhi_2_clicked(); break;
        case 6: _t->on_yksi_2_clicked(); break;
        case 7: _t->on_kaksi_2_clicked(); break;
        case 8: _t->on_kolme_2_clicked(); break;
        case 9: _t->on_nelja_2_clicked(); break;
        case 10: _t->on_viisi_2_clicked(); break;
        case 11: _t->on_kuusi_2_clicked(); break;
        case 12: _t->on_seitseman_2_clicked(); break;
        case 13: _t->on_kahdeksan_2_clicked(); break;
        case 14: _t->on_yhdeksan_2_clicked(); break;
        case 15: _t->on_nolla_2_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RahanNosto::*)(double , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RahanNosto::rahanNostoSignaali)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RahanNosto::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RahanNosto::returnSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RahanNosto::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RahanNosto::timerResetSignal)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RahanNosto::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_RahanNosto.data,
    qt_meta_data_RahanNosto,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RahanNosto::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RahanNosto::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RahanNosto.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int RahanNosto::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void RahanNosto::rahanNostoSignaali(double _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RahanNosto::returnSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void RahanNosto::timerResetSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
