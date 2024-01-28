cmake_minimum_required(VERSION 3.5)

project(1-4Console LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(1-4Console main.cpp
)

include(GNUInstallDirs)
install(TARGETS 1-4Console
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
