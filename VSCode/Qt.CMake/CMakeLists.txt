cmake_minimum_required(VERSION 3.0.0)
project(QtTest VERSION 0.1.0)

SET(CMAKE_PREFIX_PATH "/Users/mrchip/Qt5.13.0/5.13.0/clang_64")

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
message("Looking for Qt")
find_package(Qt5 COMPONENTS Widgets)
if (${Qt5_FOUND})
    message("Found Qt " ${Qt5_VERSION})
else()
    message("Couldn't find Qt")
endif()

include(CTest)
enable_testing()

set(sources
    mainwindow.cpp
    main.cpp
)
add_executable(QtTest WIN32 ${sources})
qt5_use_modules(QtTest Widgets)

target_link_libraries(
    QtTest
    Qt5::Widgets
    )

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
