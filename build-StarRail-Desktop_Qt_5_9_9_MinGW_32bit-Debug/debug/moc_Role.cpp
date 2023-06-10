/****************************************************************************
** Meta object code from reading C++ file 'Role.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../StarRail/Role.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Role.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Role_t {
    QByteArrayData data[25];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Role_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Role_t qt_meta_stringdata_Role = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Role"
QT_MOC_LITERAL(1, 5, 20), // "lifebarChangedSignal"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "nowhp"
QT_MOC_LITERAL(4, 33, 9), // "maximumhp"
QT_MOC_LITERAL(5, 43, 8), // "imKilled"
QT_MOC_LITERAL(6, 52, 5), // "Role*"
QT_MOC_LITERAL(7, 58, 1), // "p"
QT_MOC_LITERAL(8, 60, 8), // "moveOver"
QT_MOC_LITERAL(9, 69, 13), // "getValueEnemy"
QT_MOC_LITERAL(10, 83, 13), // "moveDistanceX"
QT_MOC_LITERAL(11, 97, 13), // "moveDistanceY"
QT_MOC_LITERAL(12, 111, 2), // "x1"
QT_MOC_LITERAL(13, 114, 2), // "y1"
QT_MOC_LITERAL(14, 117, 2), // "x2"
QT_MOC_LITERAL(15, 120, 2), // "y2"
QT_MOC_LITERAL(16, 123, 15), // "showBasicStatus"
QT_MOC_LITERAL(17, 139, 10), // "beAttacked"
QT_MOC_LITERAL(18, 150, 6), // "damage"
QT_MOC_LITERAL(19, 157, 17), // "beGivenShieldBuff"
QT_MOC_LITERAL(20, 175, 6), // "effect"
QT_MOC_LITERAL(21, 182, 7), // "beCured"
QT_MOC_LITERAL(22, 190, 6), // "health"
QT_MOC_LITERAL(23, 197, 11), // "setDistance"
QT_MOC_LITERAL(24, 209, 6) // "moveTo"

    },
    "Role\0lifebarChangedSignal\0\0nowhp\0"
    "maximumhp\0imKilled\0Role*\0p\0moveOver\0"
    "getValueEnemy\0moveDistanceX\0moveDistanceY\0"
    "x1\0y1\0x2\0y2\0showBasicStatus\0beAttacked\0"
    "damage\0beGivenShieldBuff\0effect\0beCured\0"
    "health\0setDistance\0moveTo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Role[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       5,    1,   69,    2, 0x06 /* Public */,
       8,    0,   72,    2, 0x06 /* Public */,
       9,    6,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,   86,    2, 0x0a /* Public */,
      17,    1,   87,    2, 0x0a /* Public */,
      19,    1,   90,    2, 0x0a /* Public */,
      21,    1,   93,    2, 0x0a /* Public */,
      23,    2,   96,    2, 0x0a /* Public */,
      24,    0,  101,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,   10,   11,   12,   13,   14,   15,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   10,   11,
    QMetaType::Void,

       0        // eod
};

void Role::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Role *_t = static_cast<Role *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->lifebarChangedSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->imKilled((*reinterpret_cast< Role*(*)>(_a[1]))); break;
        case 2: _t->moveOver(); break;
        case 3: _t->getValueEnemy((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6]))); break;
        case 4: _t->showBasicStatus(); break;
        case 5: _t->beAttacked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->beGivenShieldBuff((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->beCured((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setDistance((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 9: _t->moveTo(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Role* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Role::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Role::lifebarChangedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Role::*_t)(Role * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Role::imKilled)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Role::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Role::moveOver)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Role::*_t)(float , float , float , float , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Role::getValueEnemy)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject Role::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Role.data,
      qt_meta_data_Role,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Role::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Role::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Role.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsPixmapItem"))
        return static_cast< QGraphicsPixmapItem*>(this);
    return QObject::qt_metacast(_clname);
}

int Role::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Role::lifebarChangedSignal(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Role::imKilled(Role * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Role::moveOver()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Role::getValueEnemy(float _t1, float _t2, float _t3, float _t4, float _t5, float _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
