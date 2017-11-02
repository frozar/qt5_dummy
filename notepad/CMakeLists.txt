
# Documentation: This file is adapted from the project 'mini-cmake-qt':
# https://github.com/euler0/mini-cmake-qt/blob/master/CMakeLists.txt

# An official example (but not so complete) is given at:
# http://doc.qt.io/qt-5/cmake-manual.html

# An official example given some hint to build with Qt4 at:
# https://wiki.qt.io/Using_CMake_build_system

cmake_minimum_required(VERSION 2.8.11)

# init_qt: Let's do the CMake job for us
set(CMAKE_AUTOMOC ON) # For meta object compiler
set(CMAKE_AUTORCC ON) # Resource files
set(CMAKE_AUTOUIC ON) # UI files

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

project(Notepad)

set(SOURCE_FILES
    main.cpp
    notepad.cpp
)

# Find the QtWidgets QtPrintSupport libraries
find_package (Qt5 REQUIRED Widgets PrintSupport)

# Tell CMake to create the notepad executable
add_executable(${PROJECT_NAME} ${SOURCE_FILES})

qt5_use_modules(${PROJECT_NAME} Widgets PrintSupport)
