cmake_minimum_required(VERSION 3.10)
project(Wzxx)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/_build/exe)

file(GLOB_RECURSE  SRC_FILES
    "./controller/*.cpp"
    "./data/*.cpp"
    "./main/*.cpp"
    "./main/*.hpp"
    "./model/*.cpp"
    "./view/*.cpp"
)

file (GLOB_RECURSE  HEAD_FILES
    "./controller/*.h"
    "./data/*.h"
    "./main/*.h"
    "./model/*.h"
    "./view/*.h"
)

add_executable(WenZiXiuXian ${SRC_FILES} ${HEAD_FILES})