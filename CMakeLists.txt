cmake_minimum_required(VERSION 3.10)
project(UnitConverter C)

set(CMAKE_C_STANDARD 99)

include_directories(src)

add_executable(unit_converter src/main.c src/unit_converter.c)

add_executable(test_unit_converter tests/test_unit_converter.c src/unit_converter.c)


