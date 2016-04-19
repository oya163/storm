/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[22];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 23), // "on_pushButton_8_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 23), // "on_pushButton_7_clicked"
QT_MOC_LITERAL(4, 60, 12), // "setNumPieces"
QT_MOC_LITERAL(5, 73, 11), // "numOfPieces"
QT_MOC_LITERAL(6, 85, 15), // "setPiecesLength"
QT_MOC_LITERAL(7, 101, 9), // "piecesLen"
QT_MOC_LITERAL(8, 111, 11), // "setInfoHash"
QT_MOC_LITERAL(9, 123, 8), // "infoHash"
QT_MOC_LITERAL(10, 132, 10), // "setComment"
QT_MOC_LITERAL(11, 143, 7), // "comment"
QT_MOC_LITERAL(12, 151, 12), // "setCreatedBy"
QT_MOC_LITERAL(13, 164, 7), // "creator"
QT_MOC_LITERAL(14, 172, 13), // "setMagnetLink"
QT_MOC_LITERAL(15, 186, 10), // "magnetLink"
QT_MOC_LITERAL(16, 197, 7), // "setName"
QT_MOC_LITERAL(17, 205, 10), // "nameOfFile"
QT_MOC_LITERAL(18, 216, 13), // "setNumOfFiles"
QT_MOC_LITERAL(19, 230, 9), // "numPieces"
QT_MOC_LITERAL(20, 240, 12), // "setFilesList"
QT_MOC_LITERAL(21, 253, 14) // "QList<QString>"

    },
    "MainWindow\0on_pushButton_8_clicked\0\0"
    "on_pushButton_7_clicked\0setNumPieces\0"
    "numOfPieces\0setPiecesLength\0piecesLen\0"
    "setInfoHash\0infoHash\0setComment\0comment\0"
    "setCreatedBy\0creator\0setMagnetLink\0"
    "magnetLink\0setName\0nameOfFile\0"
    "setNumOfFiles\0numPieces\0setFilesList\0"
    "QList<QString>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    1,   71,    2, 0x0a /* Public */,
       6,    1,   74,    2, 0x0a /* Public */,
       8,    1,   77,    2, 0x0a /* Public */,
      10,    1,   80,    2, 0x0a /* Public */,
      12,    1,   83,    2, 0x0a /* Public */,
      14,    1,   86,    2, 0x0a /* Public */,
      16,    1,   89,    2, 0x0a /* Public */,
      18,    1,   92,    2, 0x0a /* Public */,
      20,    1,   95,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, 0x80000000 | 21,    2,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_8_clicked(); break;
        case 1: _t->on_pushButton_7_clicked(); break;
        case 2: _t->setNumPieces((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setPiecesLength((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setInfoHash((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setComment((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setCreatedBy((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->setMagnetLink((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->setName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->setNumOfFiles((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setFilesList((*reinterpret_cast< QList<QString>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
