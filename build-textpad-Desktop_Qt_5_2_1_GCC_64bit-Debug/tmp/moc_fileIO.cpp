/****************************************************************************
** Meta object code from reading C++ file 'fileIO.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../textpad/fileIO.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileIO.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FileIO_t {
    QByteArrayData data[7];
    char stringdata[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_FileIO_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_FileIO_t qt_meta_stringdata_FileIO = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 7),
QT_MOC_LITERAL(2, 15, 0),
QT_MOC_LITERAL(3, 16, 7),
QT_MOC_LITERAL(4, 24, 4),
QT_MOC_LITERAL(5, 29, 5),
QT_MOC_LITERAL(6, 35, 4)
    },
    "FileIO\0setPath\0\0fileURL\0read\0write\0"
    "data\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileIO[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x02,
       4,    0,   32,    2, 0x02,
       5,    1,   33,    2, 0x02,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString,    6,

       0        // eod
};

void FileIO::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileIO *_t = static_cast<FileIO *>(_o);
        switch (_id) {
        case 0: _t->setPath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: { QString _r = _t->read();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: { bool _r = _t->write((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject FileIO::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FileIO.data,
      qt_meta_data_FileIO,  qt_static_metacall, 0, 0}
};


const QMetaObject *FileIO::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileIO::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileIO.stringdata))
        return static_cast<void*>(const_cast< FileIO*>(this));
    return QObject::qt_metacast(_clname);
}

int FileIO::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
