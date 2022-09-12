cmake_minimum_required(VERSION 3.23)
project(lab6)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(lab6 main.cpp Widget.cpp Widget.h)
target_link_libraries(lab6
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )

