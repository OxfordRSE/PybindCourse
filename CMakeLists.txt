cmake_minimum_required(VERSION 3.13)

project(IntroCMakeCourse LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

set(
        src_source_files
        src/library.cpp
        src/main.cpp
)

set(
        src_header_files
        src/library.hpp
)

add_executable(main_executable ${src_source_files} ${src_header_files})
