cmake_minimum_required(VERSION 3.0.0)
project(BoostTest VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 11)

set(BOOST_ROOT "/Users/mrchip/Libs/boost")

find_package(Boost COMPONENTS system filesystem REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})

add_executable(BoostTest main.cpp)

target_link_libraries(BoostTest ${Boost_LIBRARIES})

