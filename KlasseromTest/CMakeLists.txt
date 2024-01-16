cmake_minimum_required(VERSION 3.5)

project(KlasseromTest LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(KlasseromTest main.cpp


    test_fredag12.h test_fredag12.cpp
    types.cpp
    types_kodeeksempel.h types_kodeeksempel.cpp)

include(GNUInstallDirs)
install(TARGETS KlasseromTest
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
