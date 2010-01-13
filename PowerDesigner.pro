# -------------------------------------------------
# Project created by QtCreator 2010-01-11T09:27:14
# -------------------------------------------------
QT -= gui
QTC_SOURCE = /home/lihaibo/dev/qt-creator-1.3.0/
QTC_BUILD = /home/lihaibo/dev/myQtCreator/

TARGET = PowerDesigner
TEMPLATE = lib
IDE_SOURCE_TREE = $$QTC_SOURCE
IDE_BUILD_TREE = $$QTC_BUILD
PROVIDER = winnux
DESTDIR = $$QTC_BUILD/lib/qtcreator/plugins/winnux
LIBS += -L$$QTC_BUILD/lib/qtcreator/plugins/Nokia
include ($$QTC_SOURCE/src/qtcreatorplugin.pri)
include ($$QTC_SOURCE/src/plugins/coreplugin/coreplugin.pri)

DEFINES += POWERDESIGNER_LIBRARY
SOURCES += powerdesignerplugin.cpp
HEADERS += powerdesignerplugin.h \
    PowerDesigner_global.h
OTHER_FILES += PowerDesigner.pluginspec
