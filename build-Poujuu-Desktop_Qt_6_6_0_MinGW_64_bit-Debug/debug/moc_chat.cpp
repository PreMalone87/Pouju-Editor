/****************************************************************************
** Meta object code from reading C++ file 'chat.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Poujuu/chat.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chat.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSChatENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSChatENDCLASS = QtMocHelpers::stringData(
    "Chat",
    "update_other_textEdit_signal",
    "",
    "on_textEdit1_textChanged",
    "on_pushButton_clicked",
    "other_chat_listener",
    "other_chat_online_listener_wrapper",
    "my_chat_enter_pressed",
    "update_other_textEdit",
    "str"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSChatENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[5];
    char stringdata1[29];
    char stringdata2[1];
    char stringdata3[25];
    char stringdata4[22];
    char stringdata5[20];
    char stringdata6[35];
    char stringdata7[22];
    char stringdata8[22];
    char stringdata9[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSChatENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSChatENDCLASS_t qt_meta_stringdata_CLASSChatENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "Chat"
        QT_MOC_LITERAL(5, 28),  // "update_other_textEdit_signal"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 24),  // "on_textEdit1_textChanged"
        QT_MOC_LITERAL(60, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(82, 19),  // "other_chat_listener"
        QT_MOC_LITERAL(102, 34),  // "other_chat_online_listener_wr..."
        QT_MOC_LITERAL(137, 21),  // "my_chat_enter_pressed"
        QT_MOC_LITERAL(159, 21),  // "update_other_textEdit"
        QT_MOC_LITERAL(181, 3)   // "str"
    },
    "Chat",
    "update_other_textEdit_signal",
    "",
    "on_textEdit1_textChanged",
    "on_pushButton_clicked",
    "other_chat_listener",
    "other_chat_online_listener_wrapper",
    "my_chat_enter_pressed",
    "update_other_textEdit",
    "str"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSChatENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   59,    2, 0x08,    3 /* Private */,
       4,    0,   60,    2, 0x08,    4 /* Private */,
       5,    0,   61,    2, 0x08,    5 /* Private */,
       6,    0,   62,    2, 0x08,    6 /* Private */,
       7,    0,   63,    2, 0x08,    7 /* Private */,
       8,    1,   64,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject Chat::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSChatENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSChatENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSChatENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Chat, std::true_type>,
        // method 'update_other_textEdit_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_textEdit1_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'other_chat_listener'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'other_chat_online_listener_wrapper'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'my_chat_enter_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_other_textEdit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void Chat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Chat *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->update_other_textEdit_signal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->on_textEdit1_textChanged(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->other_chat_listener(); break;
        case 4: _t->other_chat_online_listener_wrapper(); break;
        case 5: _t->my_chat_enter_pressed(); break;
        case 6: _t->update_other_textEdit((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Chat::*)(QString );
            if (_t _q_method = &Chat::update_other_textEdit_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *Chat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Chat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSChatENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Chat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Chat::update_other_textEdit_signal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
