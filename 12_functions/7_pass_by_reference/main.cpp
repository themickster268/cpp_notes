#include <iostream>

void say_age(int &r_age); // Parameter

int main()
{
    int age{24};

    std::cout << "age - before : " << age << " &age : " << &age << std::endl;

    say_age(age); // Argument

    std::cout << "age - after : " << age << " &age : " << &age << std::endl;

    return 0;
}

void say_age(int &r_age)
{
    ++r_age; // Change the Reference. Outside 'age' will be affected
    std::cout << "Hello! You are " << r_age << " years old."
              << " &age : " << &r_age << std::endl;
}