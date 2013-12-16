#-------------------------------------------------
#
# Project created by QtCreator 2013-12-13T08:29:07
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = tests
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

QMAKE_CXXFLAGS +=   -std=c++11

SOURCES += main.cpp

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../QtUnits/release/ -lQtUnits
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../QtUnits/debug/ -lQtUnits
else:unix: LIBS += -L$$OUT_PWD/../QtUnits/ -lQtUnits

INCLUDEPATH += $$PWD/../QtUnits
DEPENDPATH += $$PWD/../QtUnits
