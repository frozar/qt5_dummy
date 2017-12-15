cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project(ma_fenetre)

# Default option to compile the project
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Choose the type of build." FORCE)
endif()
set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS
             "Release" "Debug" "Profiling")

set(CMAKE_CXX_COMPILER_ID "${CMAKE_CXX_COMPILER_ID}" CACHE STRING "C++ compiler ID" FORCE)

# Make the CMAKE_CXX_FLAGS definition appear in ccmake
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}" CACHE STRING "compile flags" FORCE)


# init_qt: Let's do the CMake job for us
set(CMAKE_AUTOMOC ON) # For meta object compiler
set(CMAKE_AUTORCC ON) # Resource files
set(CMAKE_AUTOUIC ON) # UI files

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Find the QtWidgets library
find_package(Qt5 REQUIRED Widgets)

set(project_SOURCES main.cpp MaFenetre.cpp)

add_executable(${PROJECT_NAME} ${project_SOURCES})

qt5_use_modules(${PROJECT_NAME} Widgets)
