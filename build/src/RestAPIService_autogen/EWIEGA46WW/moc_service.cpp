/****************************************************************************
** Meta object code from reading C++ file 'service.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/service.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'service.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Service_t {
    QByteArrayData data[18];
    char stringdata0[217];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Service_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Service_t qt_meta_stringdata_Service = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Service"
QT_MOC_LITERAL(1, 8, 5), // "index"
QT_MOC_LITERAL(2, 14, 14), // ":Path:AutoArgs"
QT_MOC_LITERAL(3, 29, 5), // "ports"
QT_MOC_LITERAL(4, 35, 33), // ":Local:AutoArgs:ActionClass(R..."
QT_MOC_LITERAL(5, 69, 9), // "ports_GET"
QT_MOC_LITERAL(6, 79, 8), // ":Private"
QT_MOC_LITERAL(7, 88, 10), // "ports_uuid"
QT_MOC_LITERAL(8, 99, 41), // ":Path('ports'):AutoArgs:Actio..."
QT_MOC_LITERAL(9, 141, 14), // "ports_uuid_GET"
QT_MOC_LITERAL(10, 156, 7), // "version"
QT_MOC_LITERAL(11, 164, 11), // "version_GET"
QT_MOC_LITERAL(12, 176, 10), // "users_POST"
QT_MOC_LITERAL(13, 187, 0), // ""
QT_MOC_LITERAL(14, 188, 8), // "Context*"
QT_MOC_LITERAL(15, 197, 1), // "c"
QT_MOC_LITERAL(16, 199, 4), // "uuid"
QT_MOC_LITERAL(17, 204, 12) // "version_POST"

    },
    "Service\0index\0:Path:AutoArgs\0ports\0"
    ":Local:AutoArgs:ActionClass(REST)\0"
    "ports_GET\0:Private\0ports_uuid\0"
    ":Path('ports'):AutoArgs:ActionClass(REST)\0"
    "ports_uuid_GET\0version\0version_GET\0"
    "users_POST\0\0Context*\0c\0uuid\0version_POST"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Service[] = {

 // content:
       7,       // revision
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
       7,    8,
       9,    6,
      10,    4,
      11,    6,
      12,    6,

 // methods: name, argc, parameters, tag, flags
       1,    1,   70,   13, 0x02 /* Public */,
       3,    1,   73,   13, 0x02 /* Public */,
       5,    1,   76,   13, 0x02 /* Public */,
       7,    2,   79,   13, 0x02 /* Public */,
       9,    2,   84,   13, 0x02 /* Public */,
      10,    1,   89,   13, 0x02 /* Public */,
      11,    1,   92,   13, 0x02 /* Public */,
      17,    1,   95,   13, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QString,   15,   16,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QString,   15,   16,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void Service::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Service *_t = static_cast<Service *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->index((*reinterpret_cast< Context*(*)>(_a[1]))); break;
        case 1: _t->ports((*reinterpret_cast< Context*(*)>(_a[1]))); break;
        case 2: _t->ports_GET((*reinterpret_cast< Context*(*)>(_a[1]))); break;
        case 3: _t->ports_uuid((*reinterpret_cast< Context*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->ports_uuid_GET((*reinterpret_cast< Context*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->version((*reinterpret_cast< Context*(*)>(_a[1]))); break;
        case 6: _t->version_GET((*reinterpret_cast< Context*(*)>(_a[1]))); break;
        case 7: _t->version_POST((*reinterpret_cast< Context*(*)>(_a[1]))); break;
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

const QMetaObject Service::staticMetaObject = {
    { &Controller::staticMetaObject, qt_meta_stringdata_Service.data,
      qt_meta_data_Service,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Service::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Service::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Service.stringdata0))
        return static_cast<void*>(this);
    return Controller::qt_metacast(_clname);
}

int Service::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
