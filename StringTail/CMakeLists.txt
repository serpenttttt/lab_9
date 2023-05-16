cmake_minimum_required(VERSION 3.24)
project(tail C)

set(CMAKE_C_STANDARD 11)

add_executable(tail main.c tail.h tail.c)