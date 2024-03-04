cmake_minimum_required(VERSION 3.5)

project(2DShapes LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(2DShapes main.cpp base.h
    shapes.h shapes.cpp)

include(GNUInstallDirs)
install(TARGETS 2DShapes
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
