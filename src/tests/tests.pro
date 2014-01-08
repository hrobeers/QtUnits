#-------------------------------------------------
#
# Project created by QtCreator 2013-12-13T08:29:07
#
#-------------------------------------------------

QT       += testlib

include(../../common.pri)

TARGET = tests
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    quantitytests.cpp \
    unitconvertortests.cpp

unix|win32: LIBS += -L$$PWD/../../bin/ -lQtUnits

INCLUDEPATH +=  $$PWD/../QtUnits \
                ../../
DEPENDPATH += $$PWD/../QtUnits

HEADERS += \
    quantitytests.h \
    unitconvertortests.h
