#-------------------------------------------------
#
# Project created by QtCreator 2013-12-13T08:22:00
#
#-------------------------------------------------

QT       += widgets

TARGET = QtUnits
TEMPLATE = lib

VERSION = 0.1.0

DEFINES += QTUNITS_LIBRARY

# Place shared libs in QtUnits/bin/
DESTDIR = $${_PRO_FILE_PWD_}../../../bin

QMAKE_CXXFLAGS +=   -std=c++11 \
                    -Wno-multichar \
                    -Wno-reorder

SOURCES += \
    length.cpp \
    area.cpp \
    angle.cpp

HEADERS +=\
    length.h \
    area.h \
    widgets/unitdoublespinbox.hpp \
    widgets/unitlineedit.hpp \
    widgets/unitwidget.hpp \
    angle.h \
    iquantity.hpp \
    quantitybase.hpp \
    systems.hpp \
    unitconvertor.hpp \
    qtunits_global.hpp \
    QtUnits

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}

OTHER_FILES += \
    ../README.md \
    ../LICENSE.BSD \
    ../../README.md \
    ../../LICENSE.BSD
