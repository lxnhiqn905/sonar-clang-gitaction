cmake_minimum_required(VERSION 3.9)
project(sonar_scanner_example)

set(CMAKE_C_FLAGS " ${CMAKE_C_FLAGS} --coverage")
set(CMAKE_C_STANDARD 99)

add_executable(main src/main.c)
