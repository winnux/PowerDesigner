/****************************************************************************
** Meta object code from reading C++ file 'powerdesignerplugin.h'
**
** Created: Mon Jan 11 10:53:45 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../powerdesignerplugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'powerdesignerplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PowerDesigner__Internal__PowerDesignerPlugin[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_PowerDesigner__Internal__PowerDesignerPlugin[] = {
    "PowerDesigner::Internal::PowerDesignerPlugin\0"
};

const QMetaObject PowerDesigner::Internal::PowerDesignerPlugin::staticMetaObject = {
    { &ExtensionSystem::IPlugin::staticMetaObject, qt_meta_stringdata_PowerDesigner__Internal__PowerDesignerPlugin,
      qt_meta_data_PowerDesigner__Internal__PowerDesignerPlugin, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PowerDesigner::Internal::PowerDesignerPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PowerDesigner::Internal::PowerDesignerPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PowerDesigner::Internal::PowerDesignerPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PowerDesigner__Internal__PowerDesignerPlugin))
        return static_cast<void*>(const_cast< PowerDesignerPlugin*>(this));
    typedef ExtensionSystem::IPlugin QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int PowerDesigner::Internal::PowerDesignerPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef ExtensionSystem::IPlugin QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
