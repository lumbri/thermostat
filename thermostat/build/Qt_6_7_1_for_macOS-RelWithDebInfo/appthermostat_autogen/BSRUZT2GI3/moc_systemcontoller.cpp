/****************************************************************************
** Meta object code from reading C++ file 'systemcontoller.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Contollers/systemcontoller.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systemcontoller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.1. It"
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
struct qt_meta_stringdata_CLASSsystemcontollerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSsystemcontollerENDCLASS = QtMocHelpers::stringData(
    "systemcontoller",
    "currentSystemTemperaturChanged",
    "",
    "currentSystemTemperature",
    "targetTempChanged",
    "targetTemp",
    "systemStatusMessageChanged",
    "systemStatusMessage",
    "systemStateChanged",
    "HeatSelectState",
    "systemState",
    "setCurrentSystemTemperatur",
    "setTargetTemp",
    "setSystemStatusMessage",
    "HEATING",
    "COOLING",
    "AUTO"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSsystemcontollerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       4,   77, // properties
       1,   97, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    6 /* Public */,
       4,    1,   59,    2, 0x06,    8 /* Public */,
       6,    1,   62,    2, 0x06,   10 /* Public */,
       8,    1,   65,    2, 0x06,   12 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    1,   68,    2, 0x0a,   14 /* Public */,
      12,    1,   71,    2, 0x0a,   16 /* Public */,
      13,    1,   74,    2, 0x0a,   18 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    7,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00015803, uint(0), 0,
       5, QMetaType::Int, 0x00015903, uint(1), 0,
       7, QMetaType::QString, 0x00015903, uint(2), 0,
      10, 0x80000000 | 9, 0x0001590b, uint(3), 0,

 // enums: name, alias, flags, count, data
       9,    9, 0x0,    3,  102,

 // enum data: key, value
      14, uint(systemcontoller::HEATING),
      15, uint(systemcontoller::COOLING),
      16, uint(systemcontoller::AUTO),

       0        // eod
};

Q_CONSTINIT const QMetaObject systemcontoller::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSsystemcontollerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSsystemcontollerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSsystemcontollerENDCLASS_t,
        // property 'currentSystemTemperature'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'targetTemp'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'systemStatusMessage'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'systemState'
        QtPrivate::TypeAndForceComplete<HeatSelectState, std::true_type>,
        // enum 'HeatSelectState'
        QtPrivate::TypeAndForceComplete<systemcontoller::HeatSelectState, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<systemcontoller, std::true_type>,
        // method 'currentSystemTemperaturChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'targetTempChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'systemStatusMessageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'systemStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<HeatSelectState, std::false_type>,
        // method 'setCurrentSystemTemperatur'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setTargetTemp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setSystemStatusMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void systemcontoller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<systemcontoller *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentSystemTemperaturChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->targetTempChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->systemStatusMessageChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->systemStateChanged((*reinterpret_cast< std::add_pointer_t<HeatSelectState>>(_a[1]))); break;
        case 4: _t->setCurrentSystemTemperatur((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->setTargetTemp((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->setSystemStatusMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (systemcontoller::*)(int );
            if (_t _q_method = &systemcontoller::currentSystemTemperaturChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (systemcontoller::*)(int );
            if (_t _q_method = &systemcontoller::targetTempChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (systemcontoller::*)(QString );
            if (_t _q_method = &systemcontoller::systemStatusMessageChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (systemcontoller::*)(HeatSelectState );
            if (_t _q_method = &systemcontoller::systemStateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<systemcontoller *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->currentSystemTemperatur(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->targetTemp(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->systemStatusMessage(); break;
        case 3: *reinterpret_cast< HeatSelectState*>(_v) = _t->systemState(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<systemcontoller *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setcurrentSystemTemperatur(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setTargetTemp(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setSystemStatusMessage(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setSystemState(*reinterpret_cast< HeatSelectState*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *systemcontoller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *systemcontoller::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSsystemcontollerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int systemcontoller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void systemcontoller::currentSystemTemperaturChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void systemcontoller::targetTempChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void systemcontoller::systemStatusMessageChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void systemcontoller::systemStateChanged(HeatSelectState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
