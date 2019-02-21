cmake_minimum_required(VERSION 3.1)

project(swipl_test)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "../bin/")
set(CMAKE_BUILD_TYPE Debug)

include(FindPkgConfig)
pkg_check_modules(SWIPL REQUIRED swipl)
include_directories(${SWIPL_INCLUDE_DIRS})
link_directories(${SWIPL_LIBRARY_DIRS})

add_executable(swipl_test src/swipl_test.cpp)
target_link_libraries(swipl_test ${SWIPL_LIBRARIES})
