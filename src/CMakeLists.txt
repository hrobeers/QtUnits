project(qtunits)

# Sources
set(SRC
    length.cpp
    area.cpp
    angle.cpp
)

# Headers
set(HDR
    length.h
    area.h
    widgets/unitdoublespinbox.hpp
    widgets/unitlineedit.hpp
    widgets/unitwidget.hpp
    angle.h
    iquantity.hpp
    quantitybase.hpp
    systems.hpp
    unitconvertor.hpp
    qtunits_global.hpp
    QtUnits
)


#
# The executable
#

if(QTUNITS_SHARED)
    set(QTUNITS_LIBRARY_TYPE SHARED)
    message(STATUS "QTUNITS_LIBRARY_TYPE = SHARED")
else()
    set(QTUNITS_LIBRARY_TYPE STATIC)
    message(STATUS "QTUNITS_LIBRARY_TYPE = STATIC")
endif()

add_library(qtunits ${QTUNITS_LIBRARY_TYPE} ${SRC} ${HDR} ${MOC_SRC})


#
# Linking
#

#Qt modules
target_link_libraries(qtunits Qt5::Core Qt5::Widgets)

install(TARGETS qtunits
  LIBRARY DESTINATION lib
)
