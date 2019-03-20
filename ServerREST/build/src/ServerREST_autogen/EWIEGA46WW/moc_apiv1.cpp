/****************************************************************************
** Meta object code from reading C++ file 'apiv1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../ServerREST/src/apiv1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'apiv1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ApiV1_t {
    QByteArrayData data[17];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ApiV1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ApiV1_t qt_meta_stringdata_ApiV1 = {
    {
QT_MOC_LITERAL(0, 0, 5), // "ApiV1"
QT_MOC_LITERAL(1, 6, 5), // "index"
QT_MOC_LITERAL(2, 12, 14), // ":Path:AutoArgs"
QT_MOC_LITERAL(3, 27, 5), // "users"
QT_MOC_LITERAL(4, 33, 33), // ":Local:AutoArgs:ActionClass(R..."
QT_MOC_LITERAL(5, 67, 9), // "users_GET"
QT_MOC_LITERAL(6, 77, 8), // ":Private"
QT_MOC_LITERAL(7, 86, 10), // "users_POST"
QT_MOC_LITERAL(8, 97, 10), // "users_uuid"
QT_MOC_LITERAL(9, 108, 41), // ":Path('users'):AutoArgs:Actio..."
QT_MOC_LITERAL(10, 150, 14), // "users_uuid_GET"
QT_MOC_LITERAL(11, 165, 14), // "users_uuid_PUT"
QT_MOC_LITERAL(12, 180, 17), // "users_uuid_DELETE"
QT_MOC_LITERAL(13, 198, 0), // ""
QT_MOC_LITERAL(14, 199, 8), // "Context*"
QT_MOC_LITERAL(15, 208, 1), // "c"
QT_MOC_LITERAL(16, 210, 4) // "uuid"

    },
    "ApiV1\0index\0:Path:AutoArgs\0users\0"
    ":Local:AutoArgs:ActionClass(REST)\0"
    "users_GET\0:Private\0users_POST\0users_uuid\0"
    ":Path('users'):AutoArgs:ActionClass(REST)\0"
    "users_uuid_GET\0users_uuid_PUT\0"
    "users_uuid_DELETE\0\0Context*\0c\0uuid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ApiV1[] = {

 // content:
       8,       // revision
       0,       // classname
       8,   14, // classinfo
       8,   30, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,
       5,    6,
       7,    6,
       8,    9,
      10,    6,
      11,    6,
      12,    6,

 // methods: name, argc, parameters, tag, flags
       1,    1,   70,   13, 0x02 /* Public */,
       3,    1,   73,   13, 0x02 /* Public */,
       5,    1,   76,   13, 0x02 /* Public */,
       7,    1,   79,   13, 0x02 /* Public */,
       8,    2,   82,   13, 0x02 /* Public */,
      10,    2,   87,   13, 0x02 /* Public */,
      11,    2,   92,   13, 0x02 /* Public */,
      12,    2,   97,   13, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QString,   15,   16,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QString,   15,   16,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QString,   15,   16,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QString,   15,   16,

       0        // eod
};

void ApiV1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ApiV1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->index((*reinterpret_cast< Context*(*)>(_a[1]))); break;
        case 1: _t->users((*reinterpret_cast< Context*(*)>(_a[1]))); break;
        case 2: _t->users_GET((*reinterpret_cast< Context*(*)>(_a[1]))); break;
        case 3: _t->users_POST((*reinterpret_cast< Context*(*)>(_a[1]))); break;
        case 4: _t->users_uuid((*reinterpret_cast< Context*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->users_uuid_GET((*reinterpret_cast< Context*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->users_uuid_PUT((*reinterpret_cast< Context*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->users_uuid_DELETE((*reinterpret_cast< Context*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Context* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Context* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Context* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Context* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Context* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Context* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Context* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Context* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ApiV1::staticMetaObject = { {
    &Controller::staticMetaObject,
    qt_meta_stringdata_ApiV1.data,
    qt_meta_data_ApiV1,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ApiV1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ApiV1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ApiV1.stringdata0))
        return static_cast<void*>(this);
    return Controller::qt_metacast(_clname);
}

int ApiV1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Controller::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
