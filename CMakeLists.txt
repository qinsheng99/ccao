cmake_minimum_required(VERSION 3.19)
project(abc)

set(CMAKE_CXX_STANDARD 14)

add_executable(abc main.cc suppert.cc suppert.h cycle/cycle.cc cycle/cycle.h)