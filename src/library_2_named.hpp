#ifndef _LIBRARY_HPP
#define _LIBRARY_HPP

#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include <fstream>

double hypotenuse(double a, double b);

template <typename T>
std::string vector_str(const std::vector<T>& v) {
    std::stringstream ss = {};
    ss << "[ ";
    for(const auto i: v) ss << i << " ";
    ss << "] ";
    return ss.str();
}
template <typename T>
std::ostream& operator<<(std::ostream& strm, const std::vector<T>& v) {
    return strm << vector_str(v);
}

unsigned factorial(unsigned n);
std::vector<int> fibonacci(int N);
void square_vector(std::vector<int>& v);

struct Date {
    unsigned year; // No BC dates!
    unsigned month;
    unsigned day;
};

class Person {
    private:
        Date birthday;
    public:
        Person(Date bday, std::string n);
        std::string name;
        int current_age() const;
        int age_in_year(int year) const;
};

std::ostream& operator<<(std::ostream& strm, const Person& p);
#endif
