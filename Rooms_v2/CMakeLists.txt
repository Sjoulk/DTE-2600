cmake_minimum_required(VERSION 3.5)

project(Rooms_v2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Rooms_v2 main.cpp
    fileops.h fileops.cpp
    building.h building.cpp
    room.h)

include(GNUInstallDirs)
install(TARGETS Rooms_v2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
