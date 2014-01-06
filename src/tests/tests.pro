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

# Place shared libs in QtUnits/bin/
DESTDIR = $${_PRO_FILE_PWD_}../../../bin

# C++11 compiler flags depending on Qt version
greaterThan(QT_MAJOR_VERSION, 4): CONFIG += c++11
equals(QT_MAJOR_VERSION, 4): QMAKE_CXXFLAGS += -std=c++0x

SOURCES += main.cpp

unix|win32: LIBS += -L$$PWD/../../bin/ -lQtUnits

INCLUDEPATH += $$PWD/../QtUnits
DEPENDPATH += $$PWD/../QtUnits
