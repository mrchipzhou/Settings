cmake_minimum_required(VERSION 3.0.0)
project(qml-painter-board VERSION 0.1.0)


SET(CMAKE_PREFIX_PATH "/Users/mrchip/Qt5.13.0/5.13.0/clang_64")

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

message("Looking for Qt")
find_package(Qt5 COMPONENTS Core Quick Qml)
if (${Qt5_FOUND})
    message("Found Qt " ${Qt5_VERSION})
else()
    message("Couldn't find Qt")
endif()



AUX_SOURCE_DIRECTORY(src DIR_SRC)
qt5_add_resources(QML_QRC ${CMAKE_CURRENT_SOURCE_DIR}/res/qml.qrc)

add_executable(qml-painter-board ${QML_QRC} ${DIR_SRC} main.cpp  )

target_compile_definitions(${PROJECT_NAME} PRIVATE $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>)

target_link_libraries(
    qml-painter-board
    Qt5::Core
    Qt5::Quick
    Qt5::Qml
    )
