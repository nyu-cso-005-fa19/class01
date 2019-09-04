cmake_minimum_required(VERSION 3.0)
project(cso-class01)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c11")

set(SOURCE_FILES1 src/hello.c)
add_executable(hello ${SOURCE_FILES1})
set(SOURCE_FILES2 src/fun.c)
add_executable(fun ${SOURCE_FILES2})
