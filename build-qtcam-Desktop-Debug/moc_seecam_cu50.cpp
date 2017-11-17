/****************************************************************************
** Meta object code from reading C++ file 'seecam_cu50.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/seecam_cu50.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'seecam_cu50.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_See3CAM_CU50_t {
    QByteArrayData data[8];
    char stringdata[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_See3CAM_CU50_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_See3CAM_CU50_t qt_meta_stringdata_See3CAM_CU50 = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 19),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 17),
QT_MOC_LITERAL(4, 52, 19),
QT_MOC_LITERAL(5, 72, 17),
QT_MOC_LITERAL(6, 90, 13),
QT_MOC_LITERAL(7, 104, 13)
    },
    "See3CAM_CU50\0updateFlashCheckBox\0\0"
    "flash_Check_state\0updateTorchCheckBox\0"
    "torch_Check_state\0getTorchLevel\0"
    "getFlashLevel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_See3CAM_CU50[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06,
       4,    1,   37,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       6,    0,   40,    2, 0x0a,
       7,    0,   41,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QVariant,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void See3CAM_CU50::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        See3CAM_CU50 *_t = static_cast<See3CAM_CU50 *>(_o);
        switch (_id) {
        case 0: _t->updateFlashCheckBox((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 1: _t->updateTorchCheckBox((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 2: _t->getTorchLevel(); break;
        case 3: _t->getFlashLevel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (See3CAM_CU50::*_t)(QVariant );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&See3CAM_CU50::updateFlashCheckBox)) {
                *result = 0;
            }
        }
        {
            typedef void (See3CAM_CU50::*_t)(QVariant );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&See3CAM_CU50::updateTorchCheckBox)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject See3CAM_CU50::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_See3CAM_CU50.data,
      qt_meta_data_See3CAM_CU50,  qt_static_metacall, 0, 0}
};


const QMetaObject *See3CAM_CU50::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *See3CAM_CU50::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_See3CAM_CU50.stringdata))
        return static_cast<void*>(const_cast< See3CAM_CU50*>(this));
    return QObject::qt_metacast(_clname);
}

int See3CAM_CU50::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void See3CAM_CU50::updateFlashCheckBox(QVariant _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void See3CAM_CU50::updateTorchCheckBox(QVariant _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
