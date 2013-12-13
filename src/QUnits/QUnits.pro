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

QMAKE_CXXFLAGS +=   -std=c++11 \
                    -Wno-multichar \
                    -Wno-reorder

SOURCES += qunits.cpp \
    length.cpp \
    area.cpp \
    angle.cpp

HEADERS += qunits.h\
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
    qunits_global.hpp

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
    ../LICENSE.BSD
