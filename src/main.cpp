#include <iostream>
#include "library.hpp"

int main() {
    std::cout << "20! = " << factorial(20) << std::endl;
    std::cout << "fibonacci(10) = " << vector_str(fibonacci(10)) << std::endl;
}
