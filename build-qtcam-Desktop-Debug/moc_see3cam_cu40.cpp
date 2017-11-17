/****************************************************************************
** Meta object code from reading C++ file 'see3cam_cu40.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/see3cam_cu40.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'see3cam_cu40.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_See3CAM_CU40_t {
    QByteArrayData data[10];
    char stringdata[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_See3CAM_CU40_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_See3CAM_CU40_t qt_meta_stringdata_See3CAM_CU40 = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 14),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 9),
QT_MOC_LITERAL(4, 39, 13),
QT_MOC_LITERAL(5, 53, 16),
QT_MOC_LITERAL(6, 70, 13),
QT_MOC_LITERAL(7, 84, 13),
QT_MOC_LITERAL(8, 98, 16),
QT_MOC_LITERAL(9, 115, 15)
    },
    "See3CAM_CU40\0flashModeValue\0\0flashMode\0"
    "setFlashState\0flashStateValues\0"
    "getFlashState\0FLASHMODE_OFF\0"
    "FLASHMODE_STROBE\0FLASHMODE_TORCH\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_See3CAM_CU40[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       1,   36, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x0a,
       6,    0,   35,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 5,    3,
    QMetaType::Bool,

 // enums: name, flags, count, data
       5, 0x0,    3,   40,

 // enum data: key, value
       7, uint(See3CAM_CU40::FLASHMODE_OFF),
       8, uint(See3CAM_CU40::FLASHMODE_STROBE),
       9, uint(See3CAM_CU40::FLASHMODE_TORCH),

       0        // eod
};

void See3CAM_CU40::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        See3CAM_CU40 *_t = static_cast<See3CAM_CU40 *>(_o);
        switch (_id) {
        case 0: _t->flashModeValue((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: { bool _r = _t->setFlashState((*reinterpret_cast< const flashStateValues(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->getFlashState();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (See3CAM_CU40::*_t)(uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&See3CAM_CU40::flashModeValue)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject See3CAM_CU40::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_See3CAM_CU40.data,
      qt_meta_data_See3CAM_CU40,  qt_static_metacall, 0, 0}
};


const QMetaObject *See3CAM_CU40::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *See3CAM_CU40::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_See3CAM_CU40.stringdata))
        return static_cast<void*>(const_cast< See3CAM_CU40*>(this));
    return QObject::qt_metacast(_clname);
}

int See3CAM_CU40::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void See3CAM_CU40::flashModeValue(uint _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
