cmake_minimum_required(VERSION 3.5)

project(Classroom LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Classroom main.cpp

    temp_task.h temp_task.cpp)

include(GNUInstallDirs)
install(TARGETS Classroom
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
