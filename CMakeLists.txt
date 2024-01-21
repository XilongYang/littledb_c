cmake_minimum_required(VERSION 3.16)
project(littledb)

set(CMAKE_C_STANDARD 11)

include_directories(include)
include_directories(src)

add_library(littledb
        include/littledb.h
        src/endian.c
        src/sha256.c
        src/common_operations.c
)

enable_testing()
add_subdirectory(test)
