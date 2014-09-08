INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR})

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

if(NOT QTUNITS_BINARY_NAME)
    set(QTUNITS_BINARY_NAME "qtunits")
endif()

set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})
add_library(${QTUNITS_BINARY_NAME} ${SRC} ${HDR} ${MOC_SRC})


#
# Linking
#

#Qt modules
target_link_libraries(${QTUNITS_BINARY_NAME} Qt5::Core Qt5::Widgets)
