#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include "library.hpp"

namespace py = pybind11;
using namespace py::literals;
PYBIND11_MAKE_OPAQUE(std::vector<int>);

PYBIND11_MODULE(pyBarbadoop, m) {
    m.doc() = "PybindCourse module - barbadoop";
    m.def("factorial", &factorial, "Calculate factorial", "n"_a);
    m.def("fibonacci", &fibonacci, "Calculate fibonacci series, first N numbers", "n"_a = 10);
    m.def("square_vector", &square_vector, "Square vector elements in place", "v"_a);
    m.def("hypotenuse", &hypotenuse, "Calculate hypotenuse of triangle", "a"_a, "b"_a);
    py::bind_vector<std::vector<int>>(m, "VectorInt");
}
