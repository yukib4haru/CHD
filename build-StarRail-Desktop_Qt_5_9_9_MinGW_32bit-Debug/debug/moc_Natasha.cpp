/****************************************************************************
** Meta object code from reading C++ file 'Natasha.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../StarRail/Natasha.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Natasha.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Natasha_t {
    QByteArrayData data[8];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Natasha_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Natasha_t qt_meta_stringdata_Natasha = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Natasha"
QT_MOC_LITERAL(1, 8, 12), // "skillAdamage"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 3), // "att"
QT_MOC_LITERAL(4, 26, 10), // "skillBcure"
QT_MOC_LITERAL(5, 37, 6), // "skillA"
QT_MOC_LITERAL(6, 44, 6), // "skillB"
QT_MOC_LITERAL(7, 51, 6) // "skillC"

    },
    "Natasha\0skillAdamage\0\0att\0skillBcure\0"
    "skillA\0skillB\0skillC"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Natasha[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   45,    2, 0x0a /* Public */,
       6,    0,   46,    2, 0x0a /* Public */,
       7,    0,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Natasha::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Natasha *_t = static_cast<Natasha *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->skillAdamage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->skillBcure((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->skillA(); break;
        case 3: _t->skillB(); break;
        case 4: _t->skillC(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Natasha::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Natasha::skillAdamage)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Natasha::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Natasha::skillBcure)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Natasha::staticMetaObject = {
    { &Hero::staticMetaObject, qt_meta_stringdata_Natasha.data,
      qt_meta_data_Natasha,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Natasha::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Natasha::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Natasha.stringdata0))
        return static_cast<void*>(this);
    return Hero::qt_metacast(_clname);
}

int Natasha::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Hero::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Natasha::skillAdamage(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Natasha::skillBcure(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
