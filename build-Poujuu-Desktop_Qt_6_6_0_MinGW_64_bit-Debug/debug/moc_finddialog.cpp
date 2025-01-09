/****************************************************************************
** Meta object code from reading C++ file 'finddialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Poujuu/finddialog.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'finddialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFindDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSFindDialogENDCLASS = QtMocHelpers::stringData(
    "FindDialog",
    "findDialog_textChanged",
    "",
    "update_and_highlight",
    "std::map<int,std::vector<std::pair<int,int>>>",
    "findDialog_data",
    "putCursor",
    "reset_highlights",
    "on_next_button_clicked",
    "on_lineEdit_textChanged",
    "arg1",
    "on_prev_button_clicked",
    "displayData",
    "update_find_dialogData_perLine",
    "update_find_dialogData_total"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFindDialogENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[11];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[46];
    char stringdata5[16];
    char stringdata6[10];
    char stringdata7[17];
    char stringdata8[23];
    char stringdata9[24];
    char stringdata10[5];
    char stringdata11[23];
    char stringdata12[12];
    char stringdata13[31];
    char stringdata14[29];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFindDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFindDialogENDCLASS_t qt_meta_stringdata_CLASSFindDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "FindDialog"
        QT_MOC_LITERAL(11, 22),  // "findDialog_textChanged"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 20),  // "update_and_highlight"
        QT_MOC_LITERAL(56, 45),  // "std::map<int,std::vector<std:..."
        QT_MOC_LITERAL(102, 15),  // "findDialog_data"
        QT_MOC_LITERAL(118, 9),  // "putCursor"
        QT_MOC_LITERAL(128, 16),  // "reset_highlights"
        QT_MOC_LITERAL(145, 22),  // "on_next_button_clicked"
        QT_MOC_LITERAL(168, 23),  // "on_lineEdit_textChanged"
        QT_MOC_LITERAL(192, 4),  // "arg1"
        QT_MOC_LITERAL(197, 22),  // "on_prev_button_clicked"
        QT_MOC_LITERAL(220, 11),  // "displayData"
        QT_MOC_LITERAL(232, 30),  // "update_find_dialogData_perLine"
        QT_MOC_LITERAL(263, 28)   // "update_find_dialogData_total"
    },
    "FindDialog",
    "findDialog_textChanged",
    "",
    "update_and_highlight",
    "std::map<int,std::vector<std::pair<int,int>>>",
    "findDialog_data",
    "putCursor",
    "reset_highlights",
    "on_next_button_clicked",
    "on_lineEdit_textChanged",
    "arg1",
    "on_prev_button_clicked",
    "displayData",
    "update_find_dialogData_perLine",
    "update_find_dialogData_total"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFindDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    1 /* Public */,
       3,    1,   75,    2, 0x06,    2 /* Public */,
       6,    1,   78,    2, 0x06,    4 /* Public */,
       7,    0,   81,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   82,    2, 0x08,    7 /* Private */,
       9,    1,   83,    2, 0x08,    8 /* Private */,
      11,    0,   86,    2, 0x08,   10 /* Private */,
      12,    0,   87,    2, 0x08,   11 /* Private */,
      13,    2,   88,    2, 0x0a,   12 /* Public */,
      14,    0,   93,    2, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject FindDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSFindDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFindDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFindDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FindDialog, std::true_type>,
        // method 'findDialog_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_and_highlight'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::map<int,std::vector<std::pair<int,int>> >, std::false_type>,
        // method 'putCursor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'reset_highlights'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_next_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lineEdit_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_prev_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'displayData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_find_dialogData_perLine'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'update_find_dialogData_total'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FindDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FindDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->findDialog_textChanged(); break;
        case 1: _t->update_and_highlight((*reinterpret_cast< std::add_pointer_t<std::map<int,std::vector<std::pair<int,int>>>>>(_a[1]))); break;
        case 2: _t->putCursor((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->reset_highlights(); break;
        case 4: _t->on_next_button_clicked(); break;
        case 5: _t->on_lineEdit_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->on_prev_button_clicked(); break;
        case 7: _t->displayData(); break;
        case 8: _t->update_find_dialogData_perLine((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 9: _t->update_find_dialogData_total(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FindDialog::*)();
            if (_t _q_method = &FindDialog::findDialog_textChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FindDialog::*)(std::map<int,std::vector<std::pair<int,int>> > );
            if (_t _q_method = &FindDialog::update_and_highlight; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FindDialog::*)(QString );
            if (_t _q_method = &FindDialog::putCursor; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FindDialog::*)();
            if (_t _q_method = &FindDialog::reset_highlights; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *FindDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FindDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFindDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FindDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void FindDialog::findDialog_textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FindDialog::update_and_highlight(std::map<int,std::vector<std::pair<int,int>> > _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FindDialog::putCursor(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FindDialog::reset_highlights()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
