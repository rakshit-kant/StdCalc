cmake_minimum_required(VERSION 3.20)

project(StdCalc LANGUAGES CXX)

set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)

set(CMAKE_LINKER_TYPE LLD)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(StdCalc src/main.cpp)

target_compile_options(StdCalc PRIVATE
    -Wall
    -Wextra
    -Wpedantic
    -O2
    -stdlib=libc++
)

target_link_options(StdCalc PRIVATE
    -stdlib=libc++
)
