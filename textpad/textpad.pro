TEMPLATE = lib
CONFIG += plugin
QT += qml quick

DESTDIR = File
TARGET = filereaderplugin

OBJECTS_DIR = tmp
MOC_DIR = tmp

HEADERS += fileIO.h fileIOPlugin.h

SOURCES += fileIO.cpp fileIOPlugin.cpp

OTHER_FILES += app.qml