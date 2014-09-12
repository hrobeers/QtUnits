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

set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})
add_library(qtunits ${SRC} ${HDR} ${MOC_SRC})


#
# Linking
#

#Qt modules
target_link_libraries(qtunits Qt5::Core Qt5::Widgets)
