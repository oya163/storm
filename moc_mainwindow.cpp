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
    QByteArrayData data[28];
    char stringdata0[355];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 11), // "stopProgram"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 21), // "on_openButton_clicked"
QT_MOC_LITERAL(4, 46, 22), // "on_startButton_clicked"
QT_MOC_LITERAL(5, 69, 21), // "on_quitButton_clicked"
QT_MOC_LITERAL(6, 91, 12), // "setNumPieces"
QT_MOC_LITERAL(7, 104, 11), // "numOfPieces"
QT_MOC_LITERAL(8, 116, 15), // "setPiecesLength"
QT_MOC_LITERAL(9, 132, 9), // "piecesLen"
QT_MOC_LITERAL(10, 142, 11), // "setInfoHash"
QT_MOC_LITERAL(11, 154, 8), // "infoHash"
QT_MOC_LITERAL(12, 163, 10), // "setComment"
QT_MOC_LITERAL(13, 174, 7), // "comment"
QT_MOC_LITERAL(14, 182, 12), // "setCreatedBy"
QT_MOC_LITERAL(15, 195, 7), // "creator"
QT_MOC_LITERAL(16, 203, 13), // "setMagnetLink"
QT_MOC_LITERAL(17, 217, 10), // "magnetLink"
QT_MOC_LITERAL(18, 228, 7), // "setName"
QT_MOC_LITERAL(19, 236, 10), // "nameOfFile"
QT_MOC_LITERAL(20, 247, 13), // "setNumOfFiles"
QT_MOC_LITERAL(21, 261, 9), // "numPieces"
QT_MOC_LITERAL(22, 271, 12), // "setFilesList"
QT_MOC_LITERAL(23, 284, 14), // "QList<QString>"
QT_MOC_LITERAL(24, 299, 15), // "displayProgress"
QT_MOC_LITERAL(25, 315, 12), // "torVariable*"
QT_MOC_LITERAL(26, 328, 19), // "displayResultFromSC"
QT_MOC_LITERAL(27, 348, 6) // "result"

    },
    "MainWindow\0stopProgram\0\0on_openButton_clicked\0"
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
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    1,   93,    2, 0x0a /* Public */,
       8,    1,   96,    2, 0x0a /* Public */,
      10,    1,   99,    2, 0x0a /* Public */,
      12,    1,  102,    2, 0x0a /* Public */,
      14,    1,  105,    2, 0x0a /* Public */,
      16,    1,  108,    2, 0x0a /* Public */,
      18,    1,  111,    2, 0x0a /* Public */,
      20,    1,  114,    2, 0x0a /* Public */,
      22,    1,  117,    2, 0x0a /* Public */,
      24,    1,  120,    2, 0x0a /* Public */,
      26,    1,  123,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, 0x80000000 | 23,    2,
    QMetaType::Void, 0x80000000 | 25,    2,
    QMetaType::Void, QMetaType::Int,   27,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stopProgram(); break;
        case 1: _t->on_openButton_clicked(); break;
        case 2: _t->on_startButton_clicked(); break;
        case 3: _t->on_quitButton_clicked(); break;
        case 4: _t->setNumPieces((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setPiecesLength((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setInfoHash((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->setComment((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->setCreatedBy((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->setMagnetLink((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->setName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->setNumOfFiles((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setFilesList((*reinterpret_cast< QList<QString>(*)>(_a[1]))); break;
        case 13: _t->displayProgress((*reinterpret_cast< torVariable*(*)>(_a[1]))); break;
        case 14: _t->displayResultFromSC((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
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
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::stopProgram)) {
                *result = 0;
            }
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
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::stopProgram()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
