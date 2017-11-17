/****************************************************************************
** Meta object code from reading C++ file 'cameraproperty.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/cameraproperty.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cameraproperty.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Cameraproperty_t {
    QByteArrayData data[21];
    char stringdata[336];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Cameraproperty_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Cameraproperty_t qt_meta_stringdata_Cameraproperty = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 17),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 10),
QT_MOC_LITERAL(4, 45, 9),
QT_MOC_LITERAL(5, 55, 9),
QT_MOC_LITERAL(6, 65, 27),
QT_MOC_LITERAL(7, 93, 14),
QT_MOC_LITERAL(8, 108, 24),
QT_MOC_LITERAL(9, 133, 14),
QT_MOC_LITERAL(10, 148, 12),
QT_MOC_LITERAL(11, 161, 16),
QT_MOC_LITERAL(12, 178, 9),
QT_MOC_LITERAL(13, 188, 14),
QT_MOC_LITERAL(14, 203, 17),
QT_MOC_LITERAL(15, 221, 18),
QT_MOC_LITERAL(16, 240, 25),
QT_MOC_LITERAL(17, 266, 18),
QT_MOC_LITERAL(18, 285, 13),
QT_MOC_LITERAL(19, 299, 10),
QT_MOC_LITERAL(20, 310, 24)
    },
    "Cameraproperty\0setFirstCamDevice\0\0"
    "setCamName\0logHandle\0QtMsgType\0"
    "currentlySelectedCameraEnum\0selectedDevice\0"
    "initExtensionUnitSuccess\0checkforDevice\0"
    "createLogger\0setCurrentDevice\0logWriter\0"
    "logDebugWriter\0logCriticalWriter\0"
    "selectedDeviceEnum\0CommonEnums::ECameraNames\0"
    "selectedCameraEnum\0openHIDDevice\0"
    "deviceName\0closeLibUsbDeviceAscella\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cameraproperty[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06,
       3,    1,   87,    2, 0x06,
       4,    2,   90,    2, 0x06,
       6,    1,   95,    2, 0x06,
       8,    0,   98,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       9,    0,   99,    2, 0x0a,
      10,    0,  100,    2, 0x0a,
      11,    2,  101,    2, 0x0a,
      12,    2,  106,    2, 0x0a,
      13,    1,  111,    2, 0x0a,
      14,    1,  114,    2, 0x0a,
      15,    1,  117,    2, 0x0a,
      18,    1,  120,    2, 0x0a,
      20,    0,  123,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,

       0        // eod
};

void Cameraproperty::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Cameraproperty *_t = static_cast<Cameraproperty *>(_o);
        switch (_id) {
        case 0: _t->setFirstCamDevice((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setCamName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->logHandle((*reinterpret_cast< QtMsgType(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->currentlySelectedCameraEnum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->initExtensionUnitSuccess(); break;
        case 5: _t->checkforDevice(); break;
        case 6: _t->createLogger(); break;
        case 7: _t->setCurrentDevice((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->logWriter((*reinterpret_cast< QtMsgType(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->logDebugWriter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->logCriticalWriter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->selectedDeviceEnum((*reinterpret_cast< CommonEnums::ECameraNames(*)>(_a[1]))); break;
        case 12: _t->openHIDDevice((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->closeLibUsbDeviceAscella(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Cameraproperty::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Cameraproperty::setFirstCamDevice)) {
                *result = 0;
            }
        }
        {
            typedef void (Cameraproperty::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Cameraproperty::setCamName)) {
                *result = 1;
            }
        }
        {
            typedef void (Cameraproperty::*_t)(QtMsgType , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Cameraproperty::logHandle)) {
                *result = 2;
            }
        }
        {
            typedef void (Cameraproperty::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Cameraproperty::currentlySelectedCameraEnum)) {
                *result = 3;
            }
        }
        {
            typedef void (Cameraproperty::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Cameraproperty::initExtensionUnitSuccess)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject Cameraproperty::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Cameraproperty.data,
      qt_meta_data_Cameraproperty,  qt_static_metacall, 0, 0}
};


const QMetaObject *Cameraproperty::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cameraproperty::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Cameraproperty.stringdata))
        return static_cast<void*>(const_cast< Cameraproperty*>(this));
    if (!strcmp(_clname, "v4l2"))
        return static_cast< v4l2*>(const_cast< Cameraproperty*>(this));
    return QObject::qt_metacast(_clname);
}

int Cameraproperty::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Cameraproperty::setFirstCamDevice(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Cameraproperty::setCamName(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Cameraproperty::logHandle(QtMsgType _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Cameraproperty::currentlySelectedCameraEnum(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Cameraproperty::initExtensionUnitSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
