/****************************************************************************
** Meta object code from reading C++ file 'ctcpkennel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ctcpkennel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctcpkennel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CTcpKennel_t {
    QByteArrayData data[8];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CTcpKennel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CTcpKennel_t qt_meta_stringdata_CTcpKennel = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CTcpKennel"
QT_MOC_LITERAL(1, 11, 11), // "beginlisten"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 15), // "ClientConnected"
QT_MOC_LITERAL(4, 40, 15), // "disconnectedsig"
QT_MOC_LITERAL(5, 56, 8), // "recvdata"
QT_MOC_LITERAL(6, 65, 3), // "str"
QT_MOC_LITERAL(7, 69, 11) // "onDisClient"

    },
    "CTcpKennel\0beginlisten\0\0ClientConnected\0"
    "disconnectedsig\0recvdata\0str\0onDisClient"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CTcpKennel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void CTcpKennel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CTcpKennel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->beginlisten(); break;
        case 1: _t->ClientConnected(); break;
        case 2: _t->disconnectedsig(); break;
        case 3: _t->recvdata((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->onDisClient(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CTcpKennel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTcpKennel::beginlisten)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CTcpKennel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTcpKennel::ClientConnected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CTcpKennel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTcpKennel::disconnectedsig)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CTcpKennel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTcpKennel::recvdata)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CTcpKennel::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CTcpKennel.data,
    qt_meta_data_CTcpKennel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CTcpKennel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CTcpKennel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CTcpKennel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CTcpKennel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CTcpKennel::beginlisten()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CTcpKennel::ClientConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CTcpKennel::disconnectedsig()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void CTcpKennel::recvdata(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
