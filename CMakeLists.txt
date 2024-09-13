cmake_minimum_required(VERSION 3.18)
project(sm83-disassembler)

set(CMAKE_CXX_STANDARD 17)
add_executable(sm83 src/main.cpp)

target_include_directories(sm83-disassembler PRIVATE include)