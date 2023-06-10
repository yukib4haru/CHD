/****************************************************************************
** Meta object code from reading C++ file 'Hero.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../StarRail/Hero.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Hero.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Hero_t {
    QByteArrayData data[16];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Hero_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Hero_t qt_meta_stringdata_Hero = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Hero"
QT_MOC_LITERAL(1, 5, 12), // "skillAsignal"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 12), // "skillBsignal"
QT_MOC_LITERAL(4, 32, 12), // "skillCsignal"
QT_MOC_LITERAL(5, 45, 16), // "getValueJiachong"
QT_MOC_LITERAL(6, 62, 13), // "moveDistanceX"
QT_MOC_LITERAL(7, 76, 13), // "moveDistanceY"
QT_MOC_LITERAL(8, 90, 2), // "x1"
QT_MOC_LITERAL(9, 93, 2), // "y1"
QT_MOC_LITERAL(10, 96, 2), // "x2"
QT_MOC_LITERAL(11, 99, 2), // "y2"
QT_MOC_LITERAL(12, 102, 6), // "skillA"
QT_MOC_LITERAL(13, 109, 6), // "skillB"
QT_MOC_LITERAL(14, 116, 6), // "skillC"
QT_MOC_LITERAL(15, 123, 15) // "beMovedJiachong"

    },
    "Hero\0skillAsignal\0\0skillBsignal\0"
    "skillCsignal\0getValueJiachong\0"
    "moveDistanceX\0moveDistanceY\0x1\0y1\0x2\0"
    "y2\0skillA\0skillB\0skillC\0beMovedJiachong"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Hero[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    6,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   70,    2, 0x0a /* Public */,
      13,    0,   71,    2, 0x0a /* Public */,
      14,    0,   72,    2, 0x0a /* Public */,
      15,    0,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    6,    7,    8,    9,   10,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Hero::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Hero *_t = static_cast<Hero *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->skillAsignal(); break;
        case 1: _t->skillBsignal(); break;
        case 2: _t->skillCsignal(); break;
        case 3: _t->getValueJiachong((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6]))); break;
        case 4: _t->skillA(); break;
        case 5: _t->skillB(); break;
        case 6: _t->skillC(); break;
        case 7: _t->beMovedJiachong(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Hero::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Hero::skillAsignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Hero::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Hero::skillBsignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Hero::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Hero::skillCsignal)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Hero::*_t)(float , float , float , float , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Hero::getValueJiachong)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject Hero::staticMetaObject = {
    { &Role::staticMetaObject, qt_meta_stringdata_Hero.data,
      qt_meta_data_Hero,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Hero::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Hero::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Hero.stringdata0))
        return static_cast<void*>(this);
    return Role::qt_metacast(_clname);
}

int Hero::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Role::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Hero::skillAsignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Hero::skillBsignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Hero::skillCsignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Hero::getValueJiachong(float _t1, float _t2, float _t3, float _t4, float _t5, float _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
