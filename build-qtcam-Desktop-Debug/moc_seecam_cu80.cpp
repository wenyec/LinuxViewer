/****************************************************************************
** Meta object code from reading C++ file 'seecam_cu80.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/seecam_cu80.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'seecam_cu80.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_See3CAM_80_t {
    QByteArrayData data[25];
    char stringdata[329];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_See3CAM_80_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_See3CAM_80_t qt_meta_stringdata_See3CAM_80 = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 19),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 17),
QT_MOC_LITERAL(4, 50, 19),
QT_MOC_LITERAL(5, 70, 17),
QT_MOC_LITERAL(6, 88, 12),
QT_MOC_LITERAL(7, 101, 5),
QT_MOC_LITERAL(8, 107, 7),
QT_MOC_LITERAL(9, 115, 17),
QT_MOC_LITERAL(10, 133, 12),
QT_MOC_LITERAL(11, 146, 14),
QT_MOC_LITERAL(12, 161, 15),
QT_MOC_LITERAL(13, 177, 13),
QT_MOC_LITERAL(14, 191, 13),
QT_MOC_LITERAL(15, 205, 16),
QT_MOC_LITERAL(16, 222, 12),
QT_MOC_LITERAL(17, 235, 12),
QT_MOC_LITERAL(18, 248, 12),
QT_MOC_LITERAL(19, 261, 9),
QT_MOC_LITERAL(20, 271, 16),
QT_MOC_LITERAL(21, 288, 13),
QT_MOC_LITERAL(22, 302, 4),
QT_MOC_LITERAL(23, 307, 6),
QT_MOC_LITERAL(24, 314, 13)
    },
    "See3CAM_80\0updateFlashCheckBox\0\0"
    "flash_Check_state\0updateTorchCheckBox\0"
    "torch_Check_state\0deviceStatus\0title\0"
    "message\0focusPostionValue\0focusPostion\0"
    "focusModeValue\0focusModeStatus\0"
    "getTorchLevel\0getFlashLevel\0"
    "getFocusPosition\0getFocusMode\0"
    "setFocusMode\0camFocusmode\0focusMode\0"
    "setFocusPosition\0focusPosition\0Auto\0"
    "Manual\0Singletrigger\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_See3CAM_80[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       1,  104, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06,
       4,    1,   77,    2, 0x06,
       6,    2,   80,    2, 0x06,
       9,    1,   85,    2, 0x06,
      11,    1,   88,    2, 0x06,
      12,    1,   91,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      13,    0,   94,    2, 0x0a,
      14,    0,   95,    2, 0x0a,
      15,    0,   96,    2, 0x0a,
      16,    0,   97,    2, 0x0a,
      17,    1,   98,    2, 0x0a,
      20,    1,  101,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QVariant,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::UShort,   10,
    QMetaType::Void, QMetaType::UChar,   11,
    QMetaType::Void, QMetaType::UChar,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, QMetaType::Int,   21,

 // enums: name, flags, count, data
      18, 0x0,    3,  108,

 // enum data: key, value
      22, uint(See3CAM_80::Auto),
      23, uint(See3CAM_80::Manual),
      24, uint(See3CAM_80::Singletrigger),

       0        // eod
};

void See3CAM_80::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        See3CAM_80 *_t = static_cast<See3CAM_80 *>(_o);
        switch (_id) {
        case 0: _t->updateFlashCheckBox((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 1: _t->updateTorchCheckBox((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 2: _t->deviceStatus((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->focusPostionValue((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 4: _t->focusModeValue((*reinterpret_cast< unsigned char(*)>(_a[1]))); break;
        case 5: _t->focusModeStatus((*reinterpret_cast< unsigned char(*)>(_a[1]))); break;
        case 6: _t->getTorchLevel(); break;
        case 7: _t->getFlashLevel(); break;
        case 8: _t->getFocusPosition(); break;
        case 9: _t->getFocusMode(); break;
        case 10: _t->setFocusMode((*reinterpret_cast< camFocusmode(*)>(_a[1]))); break;
        case 11: _t->setFocusPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (See3CAM_80::*_t)(QVariant );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&See3CAM_80::updateFlashCheckBox)) {
                *result = 0;
            }
        }
        {
            typedef void (See3CAM_80::*_t)(QVariant );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&See3CAM_80::updateTorchCheckBox)) {
                *result = 1;
            }
        }
        {
            typedef void (See3CAM_80::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&See3CAM_80::deviceStatus)) {
                *result = 2;
            }
        }
        {
            typedef void (See3CAM_80::*_t)(quint16 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&See3CAM_80::focusPostionValue)) {
                *result = 3;
            }
        }
        {
            typedef void (See3CAM_80::*_t)(unsigned char );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&See3CAM_80::focusModeValue)) {
                *result = 4;
            }
        }
        {
            typedef void (See3CAM_80::*_t)(unsigned char );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&See3CAM_80::focusModeStatus)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject See3CAM_80::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_See3CAM_80.data,
      qt_meta_data_See3CAM_80,  qt_static_metacall, 0, 0}
};


const QMetaObject *See3CAM_80::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *See3CAM_80::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_See3CAM_80.stringdata))
        return static_cast<void*>(const_cast< See3CAM_80*>(this));
    return QObject::qt_metacast(_clname);
}

int See3CAM_80::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void See3CAM_80::updateFlashCheckBox(QVariant _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void See3CAM_80::updateTorchCheckBox(QVariant _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void See3CAM_80::deviceStatus(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void See3CAM_80::focusPostionValue(quint16 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void See3CAM_80::focusModeValue(unsigned char _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void See3CAM_80::focusModeStatus(unsigned char _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
