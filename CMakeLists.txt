cmake_minimum_required(VERSION 3.20)
project(DASTAL)

set(CMAKE_C_STANDARD 11)

add_executable(M01A01 "module01/activity01.c" extensions/extensions.h)
add_executable(M01A02 "module01/activity02.c" extensions/extensions.h)
add_executable(M01A03 "module01/activity03.cpp" extensions/extensions.h extensions/IntArray.h)