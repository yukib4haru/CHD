/****************************************************************************
** Meta object code from reading C++ file 'Natasha.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../StarRail/Natasha.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Natasha.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSNatashaENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSNatashaENDCLASS = QtMocHelpers::stringData(
    "Natasha",
    "skillAdamage",
    "",
    "att",
    "skillBcure",
    "skillA",
    "skillB",
    "skillC"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSNatashaENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[8];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[11];
    char stringdata5[7];
    char stringdata6[7];
    char stringdata7[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSNatashaENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSNatashaENDCLASS_t qt_meta_stringdata_CLASSNatashaENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "Natasha"
        QT_MOC_LITERAL(8, 12),  // "skillAdamage"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 3),  // "att"
        QT_MOC_LITERAL(26, 10),  // "skillBcure"
        QT_MOC_LITERAL(37, 6),  // "skillA"
        QT_MOC_LITERAL(44, 6),  // "skillB"
        QT_MOC_LITERAL(51, 6)   // "skillC"
    },
    "Natasha",
    "skillAdamage",
    "",
    "att",
    "skillBcure",
    "skillA",
    "skillB",
    "skillC"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSNatashaENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       4,    1,   47,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   50,    2, 0x0a,    5 /* Public */,
       6,    0,   51,    2, 0x0a,    6 /* Public */,
       7,    0,   52,    2, 0x0a,    7 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Natasha::staticMetaObject = { {
    QMetaObject::SuperData::link<Hero::staticMetaObject>(),
    qt_meta_stringdata_CLASSNatashaENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSNatashaENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSNatashaENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Natasha, std::true_type>,
        // method 'skillAdamage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'skillBcure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'skillA'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'skillB'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'skillC'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Natasha::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Natasha *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->skillAdamage((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->skillBcure((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->skillA(); break;
        case 3: _t->skillB(); break;
        case 4: _t->skillC(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Natasha::*)(int );
            if (_t _q_method = &Natasha::skillAdamage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Natasha::*)(int );
            if (_t _q_method = &Natasha::skillBcure; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *Natasha::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Natasha::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSNatashaENDCLASS.stringdata0))
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Natasha::skillAdamage(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Natasha::skillBcure(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
