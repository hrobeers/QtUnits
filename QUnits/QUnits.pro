#-------------------------------------------------
#
# Project created by QtCreator 2013-12-13T08:22:00
#
#-------------------------------------------------

QT       += widgets

TARGET = QUnits
TEMPLATE = lib

VERSION = 0.1.0

DEFINES += QUNITS_LIBRARY

SOURCES += qunits.cpp

HEADERS += qunits.h\
        qunits_global.h

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
