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
    QByteArrayData data[8];
    char stringdata0[66];
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
QT_MOC_LITERAL(5, 45, 6), // "skillA"
QT_MOC_LITERAL(6, 52, 6), // "skillB"
QT_MOC_LITERAL(7, 59, 6) // "skillC"

    },
    "Hero\0skillAsignal\0\0skillBsignal\0"
    "skillCsignal\0skillA\0skillB\0skillC"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Hero[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
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
        case 3: _t->skillA(); break;
        case 4: _t->skillB(); break;
        case 5: _t->skillC(); break;
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
    }
    Q_UNUSED(_a);
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
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
