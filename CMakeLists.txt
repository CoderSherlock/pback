cmake_minimum_required(VERSION 3.9)

project(pback)
set(CMAKE_BUILD_TYPE Release)
set (CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/core)

add_library(pback core/rules.cpp core/rules.cpp)