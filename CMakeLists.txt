cmake_minimum_required(VERSION 3.15)

include(${CMAKE_CURRENT_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

FILE(GLOB_RECURSE HEADERS include/*.h include/*.hpp)
FILE(GLOB_RECURSE SOURCES src/*.cpp src/*.h src/*.hpp)

add_library(adapter_design_pattern ${HEADERS} ${SOURCES})
target_include_directories(adapter_design_pattern PUBLIC include)
