cmake_minimum_required(VERSION 3.24)
project(prog C)

set(CMAKE_C_STANDARD 11)

add_executable(prog main.c merge.h merge.c)