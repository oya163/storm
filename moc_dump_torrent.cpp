/****************************************************************************
** Meta object code from reading C++ file 'dump_torrent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dump_torrent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dump_torrent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dump_torrent_t {
    QByteArrayData data[19];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dump_torrent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dump_torrent_t qt_meta_stringdata_dump_torrent = {
    {
QT_MOC_LITERAL(0, 0, 12), // "dump_torrent"
QT_MOC_LITERAL(1, 13, 14), // "setNumOfPieces"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 9), // "numPieces"
QT_MOC_LITERAL(4, 39, 15), // "setPiecesLength"
QT_MOC_LITERAL(5, 55, 9), // "piecesLen"
QT_MOC_LITERAL(6, 65, 11), // "setInfoHash"
QT_MOC_LITERAL(7, 77, 8), // "infoHash"
QT_MOC_LITERAL(8, 86, 10), // "setComment"
QT_MOC_LITERAL(9, 97, 7), // "comment"
QT_MOC_LITERAL(10, 105, 12), // "setCreatedBy"
QT_MOC_LITERAL(11, 118, 7), // "creator"
QT_MOC_LITERAL(12, 126, 13), // "setMagnetLink"
QT_MOC_LITERAL(13, 140, 10), // "magnetLink"
QT_MOC_LITERAL(14, 151, 7), // "setName"
QT_MOC_LITERAL(15, 159, 10), // "nameOfFile"
QT_MOC_LITERAL(16, 170, 13), // "setNumOfFiles"
QT_MOC_LITERAL(17, 184, 12), // "setFilesList"
QT_MOC_LITERAL(18, 197, 14) // "QList<QString>"

    },
    "dump_torrent\0setNumOfPieces\0\0numPieces\0"
    "setPiecesLength\0piecesLen\0setInfoHash\0"
    "infoHash\0setComment\0comment\0setCreatedBy\0"
    "creator\0setMagnetLink\0magnetLink\0"
    "setName\0nameOfFile\0setNumOfFiles\0"
    "setFilesList\0QList<QString>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dump_torrent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       6,    1,   65,    2, 0x06 /* Public */,
       8,    1,   68,    2, 0x06 /* Public */,
      10,    1,   71,    2, 0x06 /* Public */,
      12,    1,   74,    2, 0x06 /* Public */,
      14,    1,   77,    2, 0x06 /* Public */,
      16,    1,   80,    2, 0x06 /* Public */,
      17,    1,   83,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 18,    2,

       0        // eod
};

void dump_torrent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        dump_torrent *_t = static_cast<dump_torrent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setNumOfPieces((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setPiecesLength((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setInfoHash((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->setComment((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setCreatedBy((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setMagnetLink((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->setNumOfFiles((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setFilesList((*reinterpret_cast< QList<QString>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (dump_torrent::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&dump_torrent::setNumOfPieces)) {
                *result = 0;
            }
        }
        {
            typedef void (dump_torrent::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&dump_torrent::setPiecesLength)) {
                *result = 1;
            }
        }
        {
            typedef void (dump_torrent::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&dump_torrent::setInfoHash)) {
                *result = 2;
            }
        }
        {
            typedef void (dump_torrent::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&dump_torrent::setComment)) {
                *result = 3;
            }
        }
        {
            typedef void (dump_torrent::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&dump_torrent::setCreatedBy)) {
                *result = 4;
            }
        }
        {
            typedef void (dump_torrent::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&dump_torrent::setMagnetLink)) {
                *result = 5;
            }
        }
        {
            typedef void (dump_torrent::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&dump_torrent::setName)) {
                *result = 6;
            }
        }
        {
            typedef void (dump_torrent::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&dump_torrent::setNumOfFiles)) {
                *result = 7;
            }
        }
        {
            typedef void (dump_torrent::*_t)(QList<QString> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&dump_torrent::setFilesList)) {
                *result = 8;
            }
        }
    }
}

const QMetaObject dump_torrent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_dump_torrent.data,
      qt_meta_data_dump_torrent,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dump_torrent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dump_torrent::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dump_torrent.stringdata0))
        return static_cast<void*>(const_cast< dump_torrent*>(this));
    return QObject::qt_metacast(_clname);
}

int dump_torrent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void dump_torrent::setNumOfPieces(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void dump_torrent::setPiecesLength(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void dump_torrent::setInfoHash(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void dump_torrent::setComment(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void dump_torrent::setCreatedBy(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void dump_torrent::setMagnetLink(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void dump_torrent::setName(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void dump_torrent::setNumOfFiles(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void dump_torrent::setFilesList(QList<QString> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
