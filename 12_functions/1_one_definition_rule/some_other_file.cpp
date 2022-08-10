#include "person.h"

// double weight{};

double add(double num1, double num2)
{
    return num1 + num2;
}

/* struct Point
{
    double m_x{};
    double m_y{};
}; */


int Person::person_count = 8;

Person::Person(const std::string &name_param, int age_param)
    : full_name{name_param}, age{age_param}{
        person_count++;
    }