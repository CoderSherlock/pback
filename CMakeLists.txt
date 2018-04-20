cmake_minimum_required(VERSION 3.9)

project(pback)
set(CMAKE_BUILD_TYPE Release)
set (CMAKE_CXX_STANDARD 17)
SET(CMAKE_EXE_LINKER_FLAGS "-static")



include_directories(${CMAKE_CURRENT_SOURCE_DIR}/core)

add_library(pback-lib core/rules.cpp core/rules.cpp core/config.h)
add_executable(pback-bin main.cpp)

target_link_libraries(pback-bin pback-lib stdc++fs)