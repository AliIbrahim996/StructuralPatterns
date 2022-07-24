cmake_minimum_required(VERSION 3.15)
project(adapter_design_pattern CXX)

add_library(adapter_design_pattern  src/adapter.cpp)
target_include_directories(adapter_design_pattern PUBLIC include)

set_target_properties(adapter_design_pattern PROPERTIES PUBLIC_HEADER "include/adapter/adapter.h")
install(TARGETS adapter_design_pattern)
