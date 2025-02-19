/****************************************************************************
** Meta object code from reading C++ file 'capslockcontrol.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../capslockcontrol.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'capslockcontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
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
struct qt_meta_stringdata_CLASSCapsLockControlENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSCapsLockControlENDCLASS = QtMocHelpers::stringData(
    "CapsLockControl",
    "statusChanged",
    "",
    "brightnessChanged",
    "cpuTemperatureChanged",
    "batteryLevelChanged",
    "updateCapsLockStatus",
    "updateBrightness",
    "updateCpuTemperature",
    "updateBatteryLevel",
    "toggleCapsLock",
    "setBrightness",
    "value",
    "iconSource",
    "imageSource",
    "brightness",
    "cpuTemperature",
    "batteryLevel"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSCapsLockControlENDCLASS_t {
    uint offsetsAndSizes[36];
    char stringdata0[16];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[22];
    char stringdata5[20];
    char stringdata6[21];
    char stringdata7[17];
    char stringdata8[21];
    char stringdata9[19];
    char stringdata10[15];
    char stringdata11[14];
    char stringdata12[6];
    char stringdata13[11];
    char stringdata14[12];
    char stringdata15[11];
    char stringdata16[15];
    char stringdata17[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSCapsLockControlENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSCapsLockControlENDCLASS_t qt_meta_stringdata_CLASSCapsLockControlENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "CapsLockControl"
        QT_MOC_LITERAL(16, 13),  // "statusChanged"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 17),  // "brightnessChanged"
        QT_MOC_LITERAL(49, 21),  // "cpuTemperatureChanged"
        QT_MOC_LITERAL(71, 19),  // "batteryLevelChanged"
        QT_MOC_LITERAL(91, 20),  // "updateCapsLockStatus"
        QT_MOC_LITERAL(112, 16),  // "updateBrightness"
        QT_MOC_LITERAL(129, 20),  // "updateCpuTemperature"
        QT_MOC_LITERAL(150, 18),  // "updateBatteryLevel"
        QT_MOC_LITERAL(169, 14),  // "toggleCapsLock"
        QT_MOC_LITERAL(184, 13),  // "setBrightness"
        QT_MOC_LITERAL(198, 5),  // "value"
        QT_MOC_LITERAL(204, 10),  // "iconSource"
        QT_MOC_LITERAL(215, 11),  // "imageSource"
        QT_MOC_LITERAL(227, 10),  // "brightness"
        QT_MOC_LITERAL(238, 14),  // "cpuTemperature"
        QT_MOC_LITERAL(253, 12)   // "batteryLevel"
    },
    "CapsLockControl",
    "statusChanged",
    "",
    "brightnessChanged",
    "cpuTemperatureChanged",
    "batteryLevelChanged",
    "updateCapsLockStatus",
    "updateBrightness",
    "updateCpuTemperature",
    "updateBatteryLevel",
    "toggleCapsLock",
    "setBrightness",
    "value",
    "iconSource",
    "imageSource",
    "brightness",
    "cpuTemperature",
    "batteryLevel"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCapsLockControlENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       5,   86, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    6 /* Public */,
       3,    0,   75,    2, 0x06,    7 /* Public */,
       4,    0,   76,    2, 0x06,    8 /* Public */,
       5,    0,   77,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   78,    2, 0x08,   10 /* Private */,
       7,    0,   79,    2, 0x08,   11 /* Private */,
       8,    0,   80,    2, 0x08,   12 /* Private */,
       9,    0,   81,    2, 0x08,   13 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,   82,    2, 0x02,   14 /* Public */,
      11,    1,   83,    2, 0x02,   15 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,

 // properties: name, type, flags
      13, QMetaType::QString, 0x00015001, uint(0), 0,
      14, QMetaType::QString, 0x00015001, uint(0), 0,
      15, QMetaType::Int, 0x00015103, uint(1), 0,
      16, QMetaType::QString, 0x00015001, uint(2), 0,
      17, QMetaType::QString, 0x00015001, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject CapsLockControl::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSCapsLockControlENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCapsLockControlENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCapsLockControlENDCLASS_t,
        // property 'iconSource'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'imageSource'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'brightness'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'cpuTemperature'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'batteryLevel'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CapsLockControl, std::true_type>,
        // method 'statusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'brightnessChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cpuTemperatureChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'batteryLevelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateCapsLockStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateBrightness'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateCpuTemperature'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateBatteryLevel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggleCapsLock'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setBrightness'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void CapsLockControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CapsLockControl *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->statusChanged(); break;
        case 1: _t->brightnessChanged(); break;
        case 2: _t->cpuTemperatureChanged(); break;
        case 3: _t->batteryLevelChanged(); break;
        case 4: _t->updateCapsLockStatus(); break;
        case 5: _t->updateBrightness(); break;
        case 6: _t->updateCpuTemperature(); break;
        case 7: _t->updateBatteryLevel(); break;
        case 8: _t->toggleCapsLock(); break;
        case 9: _t->setBrightness((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CapsLockControl::*)();
            if (_t _q_method = &CapsLockControl::statusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CapsLockControl::*)();
            if (_t _q_method = &CapsLockControl::brightnessChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CapsLockControl::*)();
            if (_t _q_method = &CapsLockControl::cpuTemperatureChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CapsLockControl::*)();
            if (_t _q_method = &CapsLockControl::batteryLevelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CapsLockControl *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getIconSource(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getImageSource(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getBrightness(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getCpuTemperature(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getBatteryLevel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<CapsLockControl *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setBrightness(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *CapsLockControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CapsLockControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCapsLockControlENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CapsLockControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CapsLockControl::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CapsLockControl::brightnessChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CapsLockControl::cpuTemperatureChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void CapsLockControl::batteryLevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
