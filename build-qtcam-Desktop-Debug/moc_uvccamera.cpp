/****************************************************************************
** Meta object code from reading C++ file 'uvccamera.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/uvccamera.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uvccamera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_uvccamera_t {
    QByteArrayData data[25];
    char stringdata[351];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_uvccamera_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_uvccamera_t qt_meta_stringdata_uvccamera = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 9),
QT_MOC_LITERAL(2, 20, 0),
QT_MOC_LITERAL(3, 21, 9),
QT_MOC_LITERAL(4, 31, 11),
QT_MOC_LITERAL(5, 43, 16),
QT_MOC_LITERAL(6, 60, 6),
QT_MOC_LITERAL(7, 67, 5),
QT_MOC_LITERAL(8, 73, 12),
QT_MOC_LITERAL(9, 86, 27),
QT_MOC_LITERAL(10, 114, 25),
QT_MOC_LITERAL(11, 140, 10),
QT_MOC_LITERAL(12, 151, 14),
QT_MOC_LITERAL(13, 166, 6),
QT_MOC_LITERAL(14, 173, 5),
QT_MOC_LITERAL(15, 179, 3),
QT_MOC_LITERAL(16, 183, 18),
QT_MOC_LITERAL(17, 202, 15),
QT_MOC_LITERAL(18, 218, 17),
QT_MOC_LITERAL(19, 236, 10),
QT_MOC_LITERAL(20, 247, 17),
QT_MOC_LITERAL(21, 265, 24),
QT_MOC_LITERAL(22, 290, 24),
QT_MOC_LITERAL(23, 315, 23),
QT_MOC_LITERAL(24, 339, 10)
    },
    "uvccamera\0logHandle\0\0QtMsgType\0"
    "stopPreview\0titleTextChanged\0_title\0"
    "_text\0serialNumber\0currentlySelectedCameraEnum\0"
    "CommonEnums::ECameraNames\0sendHidCmd\0"
    "unsigned char*\0outBuf\0inBuf\0len\0"
    "getFirmWareVersion\0getSerialNumber\0"
    "initExtensionUnit\0cameraName\0"
    "exitExtensionUnit\0initExtensionUnitAscella\0"
    "exitExtensionUnitAscella\0"
    "currentlySelectedDevice\0deviceName\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_uvccamera[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06,
       4,    1,   84,    2, 0x06,
       5,    2,   87,    2, 0x06,
       8,    1,   92,    2, 0x06,
       9,    1,   95,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      11,    3,   98,    2, 0x0a,
      16,    0,  105,    2, 0x0a,
      17,    0,  106,    2, 0x0a,
      18,    1,  107,    2, 0x0a,
      20,    0,  110,    2, 0x0a,
      21,    0,  111,    2, 0x0a,
      22,    0,  112,    2, 0x0a,
      23,    1,  113,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 10,    2,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 12, 0x80000000 | 12, QMetaType::Int,   13,   14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString,   24,

       0        // eod
};

void uvccamera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        uvccamera *_t = static_cast<uvccamera *>(_o);
        switch (_id) {
        case 0: _t->logHandle((*reinterpret_cast< QtMsgType(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->stopPreview((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->titleTextChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->serialNumber((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->currentlySelectedCameraEnum((*reinterpret_cast< CommonEnums::ECameraNames(*)>(_a[1]))); break;
        case 5: { bool _r = _t->sendHidCmd((*reinterpret_cast< unsigned char*(*)>(_a[1])),(*reinterpret_cast< unsigned char*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->getFirmWareVersion(); break;
        case 7: _t->getSerialNumber(); break;
        case 8: { bool _r = _t->initExtensionUnit((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->exitExtensionUnit(); break;
        case 10: { int _r = _t->initExtensionUnitAscella();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->exitExtensionUnitAscella();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->currentlySelectedDevice((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (uvccamera::*_t)(QtMsgType , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&uvccamera::logHandle)) {
                *result = 0;
            }
        }
        {
            typedef void (uvccamera::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&uvccamera::stopPreview)) {
                *result = 1;
            }
        }
        {
            typedef void (uvccamera::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&uvccamera::titleTextChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (uvccamera::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&uvccamera::serialNumber)) {
                *result = 3;
            }
        }
        {
            typedef void (uvccamera::*_t)(CommonEnums::ECameraNames );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&uvccamera::currentlySelectedCameraEnum)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject uvccamera::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_uvccamera.data,
      qt_meta_data_uvccamera,  qt_static_metacall, 0, 0}
};


const QMetaObject *uvccamera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *uvccamera::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_uvccamera.stringdata))
        return static_cast<void*>(const_cast< uvccamera*>(this));
    return QObject::qt_metacast(_clname);
}

int uvccamera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void uvccamera::logHandle(QtMsgType _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void uvccamera::stopPreview(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void uvccamera::titleTextChanged(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void uvccamera::serialNumber(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void uvccamera::currentlySelectedCameraEnum(CommonEnums::ECameraNames _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_See3CAM_Control_t {
    QByteArrayData data[9];
    char stringdata[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_See3CAM_Control_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_See3CAM_Control_t qt_meta_stringdata_See3CAM_Control = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 12),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 5),
QT_MOC_LITERAL(4, 36, 7),
QT_MOC_LITERAL(5, 44, 20),
QT_MOC_LITERAL(6, 65, 10),
QT_MOC_LITERAL(7, 76, 20),
QT_MOC_LITERAL(8, 97, 10)
    },
    "See3CAM_Control\0deviceStatus\0\0title\0"
    "message\0setFlashControlState\0flashState\0"
    "setTorchControlState\0torchState\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_See3CAM_Control[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    1,   34,    2, 0x0a,
       7,    1,   37,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void See3CAM_Control::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        See3CAM_Control *_t = static_cast<See3CAM_Control *>(_o);
        switch (_id) {
        case 0: _t->deviceStatus((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->setFlashControlState((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->setTorchControlState((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (See3CAM_Control::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&See3CAM_Control::deviceStatus)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject See3CAM_Control::staticMetaObject = {
    { &uvccamera::staticMetaObject, qt_meta_stringdata_See3CAM_Control.data,
      qt_meta_data_See3CAM_Control,  qt_static_metacall, 0, 0}
};


const QMetaObject *See3CAM_Control::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *See3CAM_Control::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_See3CAM_Control.stringdata))
        return static_cast<void*>(const_cast< See3CAM_Control*>(this));
    return uvccamera::qt_metacast(_clname);
}

int See3CAM_Control::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = uvccamera::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void See3CAM_Control::deviceStatus(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_See3CAM_GPIOControl_t {
    QByteArrayData data[30];
    char stringdata[299];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_See3CAM_GPIOControl_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_See3CAM_GPIOControl_t qt_meta_stringdata_See3CAM_GPIOControl = {
    {
QT_MOC_LITERAL(0, 0, 19),
QT_MOC_LITERAL(1, 20, 9),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 5),
QT_MOC_LITERAL(4, 37, 12),
QT_MOC_LITERAL(5, 50, 5),
QT_MOC_LITERAL(6, 56, 7),
QT_MOC_LITERAL(7, 64, 12),
QT_MOC_LITERAL(8, 77, 10),
QT_MOC_LITERAL(9, 88, 13),
QT_MOC_LITERAL(10, 102, 12),
QT_MOC_LITERAL(11, 115, 7),
QT_MOC_LITERAL(12, 123, 12),
QT_MOC_LITERAL(13, 136, 9),
QT_MOC_LITERAL(14, 146, 4),
QT_MOC_LITERAL(15, 151, 4),
QT_MOC_LITERAL(16, 156, 4),
QT_MOC_LITERAL(17, 161, 3),
QT_MOC_LITERAL(18, 165, 3),
QT_MOC_LITERAL(19, 169, 3),
QT_MOC_LITERAL(20, 173, 9),
QT_MOC_LITERAL(21, 183, 9),
QT_MOC_LITERAL(22, 193, 10),
QT_MOC_LITERAL(23, 204, 10),
QT_MOC_LITERAL(24, 215, 18),
QT_MOC_LITERAL(25, 234, 18),
QT_MOC_LITERAL(26, 253, 17),
QT_MOC_LITERAL(27, 271, 17),
QT_MOC_LITERAL(28, 289, 4),
QT_MOC_LITERAL(29, 294, 3)
    },
    "See3CAM_GPIOControl\0gpioLevel\0\0level\0"
    "deviceStatus\0title\0message\0getGpioLevel\0"
    "camGpioPin\0gpioPinNumber\0setGpioLevel\0"
    "gpioPin\0camGpioValue\0gpioValue\0OUT1\0"
    "OUT2\0OUT3\0IN1\0IN2\0IN3\0CAM81_IN3\0"
    "CAM81_IN6\0CAM81_OUT8\0CAM81_OUT9\0"
    "CAM81_OUT8_READVAL\0CAM81_OUT9_READVAL\0"
    "CAM81_IN3_READVAL\0CAM81_IN6_READVAL\0"
    "High\0Low\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_See3CAM_GPIOControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       2,   50, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06,
       4,    2,   37,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       7,    1,   42,    2, 0x0a,
      10,    2,   45,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 8,    9,
    QMetaType::Bool, 0x80000000 | 8, 0x80000000 | 12,   11,   13,

 // enums: name, flags, count, data
       8, 0x0,   14,   58,
      12, 0x0,    2,   86,

 // enum data: key, value
      14, uint(See3CAM_GPIOControl::OUT1),
      15, uint(See3CAM_GPIOControl::OUT2),
      16, uint(See3CAM_GPIOControl::OUT3),
      17, uint(See3CAM_GPIOControl::IN1),
      18, uint(See3CAM_GPIOControl::IN2),
      19, uint(See3CAM_GPIOControl::IN3),
      20, uint(See3CAM_GPIOControl::CAM81_IN3),
      21, uint(See3CAM_GPIOControl::CAM81_IN6),
      22, uint(See3CAM_GPIOControl::CAM81_OUT8),
      23, uint(See3CAM_GPIOControl::CAM81_OUT9),
      24, uint(See3CAM_GPIOControl::CAM81_OUT8_READVAL),
      25, uint(See3CAM_GPIOControl::CAM81_OUT9_READVAL),
      26, uint(See3CAM_GPIOControl::CAM81_IN3_READVAL),
      27, uint(See3CAM_GPIOControl::CAM81_IN6_READVAL),
      28, uint(See3CAM_GPIOControl::High),
      29, uint(See3CAM_GPIOControl::Low),

       0        // eod
};

void See3CAM_GPIOControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        See3CAM_GPIOControl *_t = static_cast<See3CAM_GPIOControl *>(_o);
        switch (_id) {
        case 0: _t->gpioLevel((*reinterpret_cast< unsigned char(*)>(_a[1]))); break;
        case 1: _t->deviceStatus((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: { bool _r = _t->getGpioLevel((*reinterpret_cast< camGpioPin(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->setGpioLevel((*reinterpret_cast< camGpioPin(*)>(_a[1])),(*reinterpret_cast< camGpioValue(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (See3CAM_GPIOControl::*_t)(unsigned char );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&See3CAM_GPIOControl::gpioLevel)) {
                *result = 0;
            }
        }
        {
            typedef void (See3CAM_GPIOControl::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&See3CAM_GPIOControl::deviceStatus)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject See3CAM_GPIOControl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_See3CAM_GPIOControl.data,
      qt_meta_data_See3CAM_GPIOControl,  qt_static_metacall, 0, 0}
};


const QMetaObject *See3CAM_GPIOControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *See3CAM_GPIOControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_See3CAM_GPIOControl.stringdata))
        return static_cast<void*>(const_cast< See3CAM_GPIOControl*>(this));
    return QObject::qt_metacast(_clname);
}

int See3CAM_GPIOControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void See3CAM_GPIOControl::gpioLevel(unsigned char _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void See3CAM_GPIOControl::deviceStatus(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
