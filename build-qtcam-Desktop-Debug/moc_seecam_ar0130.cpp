/****************************************************************************
** Meta object code from reading C++ file 'seecam_ar0130.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/seecam_ar0130.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'seecam_ar0130.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_See3CAM_AR130_t {
    QByteArrayData data[14];
    char stringdata[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_See3CAM_AR130_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_See3CAM_AR130_t qt_meta_stringdata_See3CAM_AR130 = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 19),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 17),
QT_MOC_LITERAL(4, 53, 12),
QT_MOC_LITERAL(5, 66, 5),
QT_MOC_LITERAL(6, 72, 7),
QT_MOC_LITERAL(7, 80, 17),
QT_MOC_LITERAL(8, 98, 22),
QT_MOC_LITERAL(9, 121, 16),
QT_MOC_LITERAL(10, 138, 17),
QT_MOC_LITERAL(11, 156, 17),
QT_MOC_LITERAL(12, 174, 16),
QT_MOC_LITERAL(13, 191, 13)
    },
    "See3CAM_AR130\0updateFlashCheckBox\0\0"
    "flash_Check_state\0deviceStatus\0title\0"
    "message\0triggershotSignal\0"
    "initTriggerShotCapture\0enableMasterMode\0"
    "enableTriggerMode\0setCroppedVGAMode\0"
    "setBinnedVGAMode\0getFlashLevel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_See3CAM_AR130[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06,
       4,    2,   62,    2, 0x06,
       7,    0,   67,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       8,    0,   68,    2, 0x0a,
       9,    0,   69,    2, 0x0a,
      10,    0,   70,    2, 0x0a,
      11,    0,   71,    2, 0x0a,
      12,    0,   72,    2, 0x0a,
      13,    0,   73,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void See3CAM_AR130::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        See3CAM_AR130 *_t = static_cast<See3CAM_AR130 *>(_o);
        switch (_id) {
        case 0: _t->updateFlashCheckBox((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 1: _t->deviceStatus((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->triggershotSignal(); break;
        case 3: _t->initTriggerShotCapture(); break;
        case 4: { bool _r = _t->enableMasterMode();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->enableTriggerMode();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->setCroppedVGAMode(); break;
        case 7: _t->setBinnedVGAMode(); break;
        case 8: _t->getFlashLevel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (See3CAM_AR130::*_t)(QVariant );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&See3CAM_AR130::updateFlashCheckBox)) {
                *result = 0;
            }
        }
        {
            typedef void (See3CAM_AR130::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&See3CAM_AR130::deviceStatus)) {
                *result = 1;
            }
        }
        {
            typedef void (See3CAM_AR130::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&See3CAM_AR130::triggershotSignal)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject See3CAM_AR130::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_See3CAM_AR130.data,
      qt_meta_data_See3CAM_AR130,  qt_static_metacall, 0, 0}
};


const QMetaObject *See3CAM_AR130::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *See3CAM_AR130::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_See3CAM_AR130.stringdata))
        return static_cast<void*>(const_cast< See3CAM_AR130*>(this));
    return QThread::qt_metacast(_clname);
}

int See3CAM_AR130::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void See3CAM_AR130::updateFlashCheckBox(QVariant _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void See3CAM_AR130::deviceStatus(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void See3CAM_AR130::triggershotSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
