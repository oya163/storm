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
    QByteArrayData data[27];
    char stringdata0[343];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 21), // "on_openButton_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 22), // "on_startButton_clicked"
QT_MOC_LITERAL(4, 57, 21), // "on_quitButton_clicked"
QT_MOC_LITERAL(5, 79, 12), // "setNumPieces"
QT_MOC_LITERAL(6, 92, 11), // "numOfPieces"
QT_MOC_LITERAL(7, 104, 15), // "setPiecesLength"
QT_MOC_LITERAL(8, 120, 9), // "piecesLen"
QT_MOC_LITERAL(9, 130, 11), // "setInfoHash"
QT_MOC_LITERAL(10, 142, 8), // "infoHash"
QT_MOC_LITERAL(11, 151, 10), // "setComment"
QT_MOC_LITERAL(12, 162, 7), // "comment"
QT_MOC_LITERAL(13, 170, 12), // "setCreatedBy"
QT_MOC_LITERAL(14, 183, 7), // "creator"
QT_MOC_LITERAL(15, 191, 13), // "setMagnetLink"
QT_MOC_LITERAL(16, 205, 10), // "magnetLink"
QT_MOC_LITERAL(17, 216, 7), // "setName"
QT_MOC_LITERAL(18, 224, 10), // "nameOfFile"
QT_MOC_LITERAL(19, 235, 13), // "setNumOfFiles"
QT_MOC_LITERAL(20, 249, 9), // "numPieces"
QT_MOC_LITERAL(21, 259, 12), // "setFilesList"
QT_MOC_LITERAL(22, 272, 14), // "QList<QString>"
QT_MOC_LITERAL(23, 287, 15), // "displayProgress"
QT_MOC_LITERAL(24, 303, 12), // "torVariable*"
QT_MOC_LITERAL(25, 316, 19), // "displayResultFromSC"
QT_MOC_LITERAL(26, 336, 6) // "result"

    },
    "MainWindow\0on_openButton_clicked\0\0"
    "on_startButton_clicked\0on_quitButton_clicked\0"
    "setNumPieces\0numOfPieces\0setPiecesLength\0"
    "piecesLen\0setInfoHash\0infoHash\0"
    "setComment\0comment\0setCreatedBy\0creator\0"
    "setMagnetLink\0magnetLink\0setName\0"
    "nameOfFile\0setNumOfFiles\0numPieces\0"
    "setFilesList\0QList<QString>\0displayProgress\0"
    "torVariable*\0displayResultFromSC\0"
    "result"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    1,   87,    2, 0x0a /* Public */,
       7,    1,   90,    2, 0x0a /* Public */,
       9,    1,   93,    2, 0x0a /* Public */,
      11,    1,   96,    2, 0x0a /* Public */,
      13,    1,   99,    2, 0x0a /* Public */,
      15,    1,  102,    2, 0x0a /* Public */,
      17,    1,  105,    2, 0x0a /* Public */,
      19,    1,  108,    2, 0x0a /* Public */,
      21,    1,  111,    2, 0x0a /* Public */,
      23,    1,  114,    2, 0x0a /* Public */,
      25,    1,  117,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, 0x80000000 | 22,    2,
    QMetaType::Void, 0x80000000 | 24,    2,
    QMetaType::Void, QMetaType::Int,   26,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_openButton_clicked(); break;
        case 1: _t->on_startButton_clicked(); break;
        case 2: _t->on_quitButton_clicked(); break;
        case 3: _t->setNumPieces((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setPiecesLength((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setInfoHash((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setComment((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->setCreatedBy((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->setMagnetLink((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->setName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->setNumOfFiles((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setFilesList((*reinterpret_cast< QList<QString>(*)>(_a[1]))); break;
        case 12: _t->displayProgress((*reinterpret_cast< torVariable*(*)>(_a[1]))); break;
        case 13: _t->displayResultFromSC((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
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
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
