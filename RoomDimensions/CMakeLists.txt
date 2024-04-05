cmake_minimum_required(VERSION 3.5)

project(RoomDimensions LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(RoomDimensions main.cpp
    building.h building.cpp
    room.h room.cpp
    fileops.h fileops.cpp
)

include(GNUInstallDirs)
install(TARGETS RoomDimensions
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
