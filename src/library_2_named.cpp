#include "library.hpp"
#include <sstream>
#include <fstream>
#include <cmath>

double hypotenuse(double a, double b) {
    return std::sqrt(a*a + b*b);
}

unsigned factorial(unsigned n) {
    unsigned m = 1;
    for(auto i = 1u; i <= n; i++) m *= i;
    return m;
}

void square_vector(std::vector<int>& v) {
    for(int& x: v) x = x*x;
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
int Person::age_in_year(int year) const { return year - birthday.year; };
int Person::current_age() const { return age_in_year(2020); } // use ctime to get actual time

std::ostream& operator<<(std::ostream& strm, const Person& p) {
    std::stringstream ss;
    ss << p.name << " "
       << "(" << p.current_age() << " years old)";
    return strm << ss.str();
}
