/****************************************************************************
** Meta object code from reading C++ file 'Xing.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../StarRail/Xing.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Xing.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSXingENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSXingENDCLASS = QtMocHelpers::stringData(
    "Xing",
    "skillAdamage",
    "",
    "att",
    "skillBbuff",
    "moveOver",
    "skillA",
    "skillB",
    "skillC",
    "setDistance",
    "moveDistanceX",
    "moveDistanceY",
    "moveTo"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSXingENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[5];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[11];
    char stringdata5[9];
    char stringdata6[7];
    char stringdata7[7];
    char stringdata8[7];
    char stringdata9[12];
    char stringdata10[14];
    char stringdata11[14];
    char stringdata12[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSXingENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSXingENDCLASS_t qt_meta_stringdata_CLASSXingENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "Xing"
        QT_MOC_LITERAL(5, 12),  // "skillAdamage"
        QT_MOC_LITERAL(18, 0),  // ""
        QT_MOC_LITERAL(19, 3),  // "att"
        QT_MOC_LITERAL(23, 10),  // "skillBbuff"
        QT_MOC_LITERAL(34, 8),  // "moveOver"
        QT_MOC_LITERAL(43, 6),  // "skillA"
        QT_MOC_LITERAL(50, 6),  // "skillB"
        QT_MOC_LITERAL(57, 6),  // "skillC"
        QT_MOC_LITERAL(64, 11),  // "setDistance"
        QT_MOC_LITERAL(76, 13),  // "moveDistanceX"
        QT_MOC_LITERAL(90, 13),  // "moveDistanceY"
        QT_MOC_LITERAL(104, 6)   // "moveTo"
    },
    "Xing",
    "skillAdamage",
    "",
    "att",
    "skillBbuff",
    "moveOver",
    "skillA",
    "skillB",
    "skillC",
    "setDistance",
    "moveDistanceX",
    "moveDistanceY",
    "moveTo"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSXingENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,
       4,    1,   65,    2, 0x06,    3 /* Public */,
       5,    0,   68,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   69,    2, 0x0a,    6 /* Public */,
       7,    0,   70,    2, 0x0a,    7 /* Public */,
       8,    0,   71,    2, 0x0a,    8 /* Public */,
       9,    2,   72,    2, 0x0a,    9 /* Public */,
      12,    0,   77,    2, 0x0a,   12 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   10,   11,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Xing::staticMetaObject = { {
    QMetaObject::SuperData::link<Hero::staticMetaObject>(),
    qt_meta_stringdata_CLASSXingENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSXingENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSXingENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Xing, std::true_type>,
        // method 'skillAdamage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'skillBbuff'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'moveOver'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'skillA'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'skillB'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'skillC'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setDistance'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'moveTo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Xing::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Xing *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->skillAdamage((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->skillBbuff((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->moveOver(); break;
        case 3: _t->skillA(); break;
        case 4: _t->skillB(); break;
        case 5: _t->skillC(); break;
        case 6: _t->setDistance((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2]))); break;
        case 7: _t->moveTo(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Xing::*)(int );
            if (_t _q_method = &Xing::skillAdamage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Xing::*)(int );
            if (_t _q_method = &Xing::skillBbuff; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Xing::*)();
            if (_t _q_method = &Xing::moveOver; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *Xing::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Xing::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSXingENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Hero::qt_metacast(_clname);
}

int Xing::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Hero::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Xing::skillAdamage(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Xing::skillBbuff(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Xing::moveOver()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
