/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Poujuu/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "change_title",
    "",
    "textEdit_textChanged",
    "linenumber",
    "str",
    "on_textEdit_textChanged",
    "on_actionSave_triggered",
    "on_actionBold_triggered",
    "on_actionItalic_triggered",
    "on_actionFont_Size_triggered",
    "on_actionFont_Style_triggered",
    "on_actionFont_Color_triggered",
    "on_actionBackgroud_Color_triggered",
    "on_actionPalette_Color_triggered",
    "on_actionNew_triggered",
    "reset",
    "on_actionOpen_triggered",
    "on_actionSave_As_triggered",
    "on_actionSelect_All_triggered",
    "on_actionFind_triggered",
    "update_and_highlight",
    "std::map<int,std::vector<std::pair<int,int>>>",
    "findDialog_data",
    "putCursor",
    "reset_find_highlight",
    "on_actionScroll_triggered",
    "on_actionx1_triggered",
    "on_actionx2_triggered",
    "on_actionx3_triggered",
    "on_actionx4_triggered",
    "on_actionx5_triggered",
    "on_actionx10_triggered",
    "on_actionChat_triggered"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[68];
    char stringdata0[11];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[11];
    char stringdata5[4];
    char stringdata6[24];
    char stringdata7[24];
    char stringdata8[24];
    char stringdata9[26];
    char stringdata10[29];
    char stringdata11[30];
    char stringdata12[30];
    char stringdata13[35];
    char stringdata14[33];
    char stringdata15[23];
    char stringdata16[6];
    char stringdata17[24];
    char stringdata18[27];
    char stringdata19[30];
    char stringdata20[24];
    char stringdata21[21];
    char stringdata22[46];
    char stringdata23[16];
    char stringdata24[10];
    char stringdata25[21];
    char stringdata26[26];
    char stringdata27[22];
    char stringdata28[22];
    char stringdata29[22];
    char stringdata30[22];
    char stringdata31[22];
    char stringdata32[23];
    char stringdata33[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 12),  // "change_title"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 20),  // "textEdit_textChanged"
        QT_MOC_LITERAL(46, 10),  // "linenumber"
        QT_MOC_LITERAL(57, 3),  // "str"
        QT_MOC_LITERAL(61, 23),  // "on_textEdit_textChanged"
        QT_MOC_LITERAL(85, 23),  // "on_actionSave_triggered"
        QT_MOC_LITERAL(109, 23),  // "on_actionBold_triggered"
        QT_MOC_LITERAL(133, 25),  // "on_actionItalic_triggered"
        QT_MOC_LITERAL(159, 28),  // "on_actionFont_Size_triggered"
        QT_MOC_LITERAL(188, 29),  // "on_actionFont_Style_triggered"
        QT_MOC_LITERAL(218, 29),  // "on_actionFont_Color_triggered"
        QT_MOC_LITERAL(248, 34),  // "on_actionBackgroud_Color_trig..."
        QT_MOC_LITERAL(283, 32),  // "on_actionPalette_Color_triggered"
        QT_MOC_LITERAL(316, 22),  // "on_actionNew_triggered"
        QT_MOC_LITERAL(339, 5),  // "reset"
        QT_MOC_LITERAL(345, 23),  // "on_actionOpen_triggered"
        QT_MOC_LITERAL(369, 26),  // "on_actionSave_As_triggered"
        QT_MOC_LITERAL(396, 29),  // "on_actionSelect_All_triggered"
        QT_MOC_LITERAL(426, 23),  // "on_actionFind_triggered"
        QT_MOC_LITERAL(450, 20),  // "update_and_highlight"
        QT_MOC_LITERAL(471, 45),  // "std::map<int,std::vector<std:..."
        QT_MOC_LITERAL(517, 15),  // "findDialog_data"
        QT_MOC_LITERAL(533, 9),  // "putCursor"
        QT_MOC_LITERAL(543, 20),  // "reset_find_highlight"
        QT_MOC_LITERAL(564, 25),  // "on_actionScroll_triggered"
        QT_MOC_LITERAL(590, 21),  // "on_actionx1_triggered"
        QT_MOC_LITERAL(612, 21),  // "on_actionx2_triggered"
        QT_MOC_LITERAL(634, 21),  // "on_actionx3_triggered"
        QT_MOC_LITERAL(656, 21),  // "on_actionx4_triggered"
        QT_MOC_LITERAL(678, 21),  // "on_actionx5_triggered"
        QT_MOC_LITERAL(700, 22),  // "on_actionx10_triggered"
        QT_MOC_LITERAL(723, 23)   // "on_actionChat_triggered"
    },
    "MainWindow",
    "change_title",
    "",
    "textEdit_textChanged",
    "linenumber",
    "str",
    "on_textEdit_textChanged",
    "on_actionSave_triggered",
    "on_actionBold_triggered",
    "on_actionItalic_triggered",
    "on_actionFont_Size_triggered",
    "on_actionFont_Style_triggered",
    "on_actionFont_Color_triggered",
    "on_actionBackgroud_Color_triggered",
    "on_actionPalette_Color_triggered",
    "on_actionNew_triggered",
    "reset",
    "on_actionOpen_triggered",
    "on_actionSave_As_triggered",
    "on_actionSelect_All_triggered",
    "on_actionFind_triggered",
    "update_and_highlight",
    "std::map<int,std::vector<std::pair<int,int>>>",
    "findDialog_data",
    "putCursor",
    "reset_find_highlight",
    "on_actionScroll_triggered",
    "on_actionx1_triggered",
    "on_actionx2_triggered",
    "on_actionx3_triggered",
    "on_actionx4_triggered",
    "on_actionx5_triggered",
    "on_actionx10_triggered",
    "on_actionChat_triggered"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  182,    2, 0x06,    1 /* Public */,
       3,    2,  183,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,  188,    2, 0x08,    5 /* Private */,
       7,    0,  189,    2, 0x08,    6 /* Private */,
       8,    0,  190,    2, 0x08,    7 /* Private */,
       9,    0,  191,    2, 0x08,    8 /* Private */,
      10,    0,  192,    2, 0x08,    9 /* Private */,
      11,    0,  193,    2, 0x08,   10 /* Private */,
      12,    0,  194,    2, 0x08,   11 /* Private */,
      13,    0,  195,    2, 0x08,   12 /* Private */,
      14,    0,  196,    2, 0x08,   13 /* Private */,
      15,    0,  197,    2, 0x08,   14 /* Private */,
      16,    0,  198,    2, 0x08,   15 /* Private */,
      17,    0,  199,    2, 0x08,   16 /* Private */,
      18,    0,  200,    2, 0x08,   17 /* Private */,
      19,    0,  201,    2, 0x08,   18 /* Private */,
      20,    0,  202,    2, 0x08,   19 /* Private */,
      21,    1,  203,    2, 0x08,   20 /* Private */,
      24,    1,  206,    2, 0x08,   22 /* Private */,
      25,    0,  209,    2, 0x08,   24 /* Private */,
      26,    0,  210,    2, 0x08,   25 /* Private */,
      27,    0,  211,    2, 0x08,   26 /* Private */,
      28,    0,  212,    2, 0x08,   27 /* Private */,
      29,    0,  213,    2, 0x08,   28 /* Private */,
      30,    0,  214,    2, 0x08,   29 /* Private */,
      31,    0,  215,    2, 0x08,   30 /* Private */,
      32,    0,  216,    2, 0x08,   31 /* Private */,
      33,    0,  217,    2, 0x08,   32 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'change_title'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'textEdit_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_textEdit_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSave_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionBold_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionItalic_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionFont_Size_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionFont_Style_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionFont_Color_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionBackgroud_Color_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionPalette_Color_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionNew_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reset'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionOpen_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSave_As_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSelect_All_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionFind_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_and_highlight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::map<int,std::vector<std::pair<int,int>> >, std::false_type>,
        // method 'putCursor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'reset_find_highlight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionScroll_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionx1_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionx2_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionx3_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionx4_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionx5_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionx10_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionChat_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->change_title(); break;
        case 1: _t->textEdit_textChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->on_textEdit_textChanged(); break;
        case 3: _t->on_actionSave_triggered(); break;
        case 4: _t->on_actionBold_triggered(); break;
        case 5: _t->on_actionItalic_triggered(); break;
        case 6: _t->on_actionFont_Size_triggered(); break;
        case 7: _t->on_actionFont_Style_triggered(); break;
        case 8: _t->on_actionFont_Color_triggered(); break;
        case 9: _t->on_actionBackgroud_Color_triggered(); break;
        case 10: _t->on_actionPalette_Color_triggered(); break;
        case 11: _t->on_actionNew_triggered(); break;
        case 12: _t->reset(); break;
        case 13: _t->on_actionOpen_triggered(); break;
        case 14: _t->on_actionSave_As_triggered(); break;
        case 15: _t->on_actionSelect_All_triggered(); break;
        case 16: _t->on_actionFind_triggered(); break;
        case 17: _t->update_and_highlight((*reinterpret_cast< std::add_pointer_t<std::map<int,std::vector<std::pair<int,int>>>>>(_a[1]))); break;
        case 18: _t->putCursor((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->reset_find_highlight(); break;
        case 20: _t->on_actionScroll_triggered(); break;
        case 21: _t->on_actionx1_triggered(); break;
        case 22: _t->on_actionx2_triggered(); break;
        case 23: _t->on_actionx3_triggered(); break;
        case 24: _t->on_actionx4_triggered(); break;
        case 25: _t->on_actionx5_triggered(); break;
        case 26: _t->on_actionx10_triggered(); break;
        case 27: _t->on_actionChat_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::change_title; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int , QString );
            if (_t _q_method = &MainWindow::textEdit_textChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::change_title()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::textEdit_textChanged(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
