#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include "library.hpp"

namespace py = pybind11;
PYBIND11_MAKE_OPAQUE(std::vector<int>);

PYBIND11_MODULE(pyBarbadoop, m) {
    m.doc() = "PybindCourse module - barbadoop";
    m.def("factorial", &factorial, "Calculate factorial");
    m.def("fibonacci", &fibonacci, "Calculate fibonacci series, first N numbers");
    m.def("square_vector", &square_vector, "Square vector elements in place");
    py::bind_vector<std::vector<int>>(m, "VectorInt");
}
