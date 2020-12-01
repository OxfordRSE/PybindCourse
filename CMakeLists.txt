cmake_minimum_required(VERSION 3.13)

project(Barbadoop LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
add_compile_options(-Wall -pedantic -fPIC)

option(PYTHON_BINDINGS "Whether to build the Python bindings" ON)

set(Barbadoop_source  src/library.cpp)
set(Barbadoop_headers src/library.hpp)

add_library(Barbadoop ${Barbadoop_source} ${Barbadoop_headers})
add_executable(barbadoop src/main.cpp)
target_link_libraries(barbadoop PRIVATE Barbadoop)

if (PYTHON_BINDINGS)
    add_subdirectory(pybind11)
    pybind11_add_module(pyBarbadoop src/pybind.cpp)
    target_link_libraries(pyBarbadoop PRIVATE Barbadoop)
endif ()
