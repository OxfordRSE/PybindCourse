#include "library.hpp"
#include <sstream>
#include <fstream>

unsigned factorial(unsigned n) {
    unsigned m = 1;
    for(auto i = 1u; i <= n; i++) m *= i;
    return m;
}

std::vector<int> fibonacci(int N) {
    std::vector<int> out;
    out.reserve(N);
    int start = 1, temp = 0;
    int sum = {};
    for(auto i = 0; i < N; i++) {
        sum = start + temp;
        out.push_back(sum);
        start = temp;
        temp = sum;
    }
    return out;
}

Person::Person(Date bday, std::string n) : birthday(bday), name(n) {}
int Person::age() { return 2020 - birthday.year; } // use ctime to get actual time
