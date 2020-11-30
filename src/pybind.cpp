#include <pybind11/pybind11.h>
#include "library.hpp"

namespace py = pybind11;

PYBIND11_MODULE(pyBarbadoop, m) {
    m.doc() = "PybindCourse module - barbadoop";
    m.def("factorial", &factorial, "Calculate factorial");
}
