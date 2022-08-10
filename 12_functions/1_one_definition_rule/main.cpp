#include <iostream>
#include "some_other_file.cpp"
// #include "person.h"

// Variable : Declaration and definition
// Cannot have more than one definition for
// the wieght variable.
double weight{};

double add(double num1, double num2);

/* int Person::person_count = 8;

Person::Person(const std::string &name_param, int age_param)
    : full_name{name_param}, age{age_param}
{
    person_count++;
}
 */
struct Point
{
    double m_x{};
    double m_y{};
};


int main()
{
    /* Point p1;

    std::cout << "p1.x : " << p1.m_x << " p1.y : " << p1.m_y << std::endl; */

    Person p1("John Snow", 34);
    p1.print_info();

    return 0;
}

/* double add(double num1, double num2)
{
    return num1 + num2;
} */

