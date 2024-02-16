cmake_minimum_required(VERSION 3.5)

project(Virtuell_class LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Virtuell_class main.cpp
    person.h person.cpp
    student.h student.cpp)

include(GNUInstallDirs)
install(TARGETS Virtuell_class
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
