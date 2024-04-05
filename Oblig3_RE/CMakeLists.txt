cmake_minimum_required(VERSION 3.5)

project(Oblig3_RE LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Oblig3_RE main.cpp
    classes.h classes.cpp
    fileOps.h
)

include(GNUInstallDirs)
install(TARGETS Oblig3_RE
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
