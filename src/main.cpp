#include <iostream>
#include "library.hpp"

int main() {
    std::cout << "20! = " << factorial(20) << std::endl;
    std::cout << "fibonacci(10) = " << fibonacci(10) << std::endl;
    auto fib5 = fibonacci(5);
    square_vector(fib5);
    std::cout << "square_vector(fibonacci(5)) = " << fib5 << std::endl;
}
