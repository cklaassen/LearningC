cmake_minimum_required(VERSION 3.17)
project(LearningC C)

set(CMAKE_C_STANDARD 99)

add_executable(LearningC main.c)
add_library(test_lib STATIC test.c)
add_library(calculator STATIC calculator.c)