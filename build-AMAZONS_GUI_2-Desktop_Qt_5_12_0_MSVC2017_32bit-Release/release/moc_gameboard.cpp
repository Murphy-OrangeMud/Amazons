/****************************************************************************
** Meta object code from reading C++ file 'gameboard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../AMAZONS/AMAZONS_GUI_2/gameboard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gameboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gameboard_t {
    QByteArrayData data[25];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gameboard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gameboard_t qt_meta_stringdata_Gameboard = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Gameboard"
QT_MOC_LITERAL(1, 10, 8), // "SaveData"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 8), // "ReadData"
QT_MOC_LITERAL(4, 29, 9), // "DrawBoard"
QT_MOC_LITERAL(5, 39, 7), // "NewGame"
QT_MOC_LITERAL(6, 47, 9), // "DrawItems"
QT_MOC_LITERAL(7, 57, 4), // "Mark"
QT_MOC_LITERAL(8, 62, 1), // "x"
QT_MOC_LITERAL(9, 64, 1), // "y"
QT_MOC_LITERAL(10, 66, 6), // "DeMark"
QT_MOC_LITERAL(11, 73, 8), // "Decision"
QT_MOC_LITERAL(12, 82, 6), // "cancel"
QT_MOC_LITERAL(13, 89, 2), // "x0"
QT_MOC_LITERAL(14, 92, 2), // "y0"
QT_MOC_LITERAL(15, 95, 2), // "x1"
QT_MOC_LITERAL(16, 98, 2), // "y1"
QT_MOC_LITERAL(17, 101, 2), // "x2"
QT_MOC_LITERAL(18, 104, 2), // "y2"
QT_MOC_LITERAL(19, 107, 5), // "color"
QT_MOC_LITERAL(20, 113, 12), // "for_evaluate"
QT_MOC_LITERAL(21, 126, 10), // "CountSteps"
QT_MOC_LITERAL(22, 137, 11), // "Preparation"
QT_MOC_LITERAL(23, 149, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(24, 171, 23) // "on_pushButton_2_clicked"

    },
    "Gameboard\0SaveData\0\0ReadData\0DrawBoard\0"
    "NewGame\0DrawItems\0Mark\0x\0y\0DeMark\0"
    "Decision\0cancel\0x0\0y0\0x1\0y1\0x2\0y2\0"
    "color\0for_evaluate\0CountSteps\0Preparation\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gameboard[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    0,   80,    2, 0x0a /* Public */,
       4,    0,   81,    2, 0x0a /* Public */,
       5,    0,   82,    2, 0x0a /* Public */,
       6,    0,   83,    2, 0x0a /* Public */,
       7,    2,   84,    2, 0x0a /* Public */,
      10,    2,   89,    2, 0x0a /* Public */,
      11,    0,   94,    2, 0x0a /* Public */,
      12,    8,   95,    2, 0x0a /* Public */,
      21,    1,  112,    2, 0x0a /* Public */,
      22,    0,  115,    2, 0x0a /* Public */,
      23,    0,  116,    2, 0x08 /* Private */,
      24,    0,  117,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Int,
    QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   13,   14,   15,   16,   17,   18,   19,   20,
    QMetaType::Int, QMetaType::Int,   19,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Gameboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Gameboard *_t = static_cast<Gameboard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->SaveData();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: { int _r = _t->ReadData();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->DrawBoard(); break;
        case 3: _t->NewGame(); break;
        case 4: _t->DrawItems(); break;
        case 5: _t->Mark((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->DeMark((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: { int _r = _t->Decision();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 8: { int _r = _t->cancel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 9: { int _r = _t->CountSteps((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 10: { int _r = _t->Preparation();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->on_pushButton_clicked(); break;
        case 12: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gameboard::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Gameboard.data,
    qt_meta_data_Gameboard,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gameboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gameboard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gameboard.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Gameboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
