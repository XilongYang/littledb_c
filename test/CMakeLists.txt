cmake_minimum_required(VERSION 3.16)
project(littledb)

set(CMAKE_C_STANDARD 11)
set(UNITY_SRC ../third_party/unity-2.5.2/unity.c)

include_directories(../third_party/unity-2.5.2/)

enable_testing()

add_executable(endian_test 
    ${UNITY_SRC}
    endian_test.c
)

target_link_libraries(endian_test
    littledb
)

add_test(NAME EndianTests COMMAND endian_test)
