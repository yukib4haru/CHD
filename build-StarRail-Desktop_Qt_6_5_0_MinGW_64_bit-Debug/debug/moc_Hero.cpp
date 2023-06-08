/****************************************************************************
** Meta object code from reading C++ file 'Hero.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../StarRail/Hero.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Hero.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSHeroENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSHeroENDCLASS = QtMocHelpers::stringData(
    "Hero",
    "skillAsignal",
    "",
    "skillBsignal",
    "skillCsignal",
    "skillA",
    "skillB",
    "skillC"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSHeroENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[5];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[13];
    char stringdata5[7];
    char stringdata6[7];
    char stringdata7[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSHeroENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSHeroENDCLASS_t qt_meta_stringdata_CLASSHeroENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "Hero"
        QT_MOC_LITERAL(5, 12),  // "skillAsignal"
        QT_MOC_LITERAL(18, 0),  // ""
        QT_MOC_LITERAL(19, 12),  // "skillBsignal"
        QT_MOC_LITERAL(32, 12),  // "skillCsignal"
        QT_MOC_LITERAL(45, 6),  // "skillA"
        QT_MOC_LITERAL(52, 6),  // "skillB"
        QT_MOC_LITERAL(59, 6)   // "skillC"
    },
    "Hero",
    "skillAsignal",
    "",
    "skillBsignal",
    "skillCsignal",
    "skillA",
    "skillB",
    "skillC"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSHeroENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,
       3,    0,   51,    2, 0x06,    2 /* Public */,
       4,    0,   52,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   53,    2, 0x0a,    4 /* Public */,
       6,    0,   54,    2, 0x0a,    5 /* Public */,
       7,    0,   55,    2, 0x0a,    6 /* Public */,

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

Q_CONSTINIT const QMetaObject Hero::staticMetaObject = { {
    QMetaObject::SuperData::link<Role::staticMetaObject>(),
    qt_meta_stringdata_CLASSHeroENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSHeroENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSHeroENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Hero, std::true_type>,
        // method 'skillAsignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'skillBsignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'skillCsignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'skillA'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'skillB'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'skillC'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Hero::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Hero *>(_o);
        (void)_t;
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
            using _t = void (Hero::*)();
            if (_t _q_method = &Hero::skillAsignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Hero::*)();
            if (_t _q_method = &Hero::skillBsignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Hero::*)();
            if (_t _q_method = &Hero::skillCsignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *Hero::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Hero::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSHeroENDCLASS.stringdata0))
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
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
