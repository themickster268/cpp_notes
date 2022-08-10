#include <iostream>

void say_age(int *p_age); // Parameter

int main()
{
    int age{24};

    std::cout << "age - before : " << age << " &age : " << &age << std::endl;

    say_age(&age); // Argument

    std::cout << "age - after : " << age << " &age : " << &age << std::endl;

    return 0;
}

void say_age(int *p_age)
{   
    // 'p_age' will point to the original 'age' variable in main()
    // Original 'age' variable will be affected

    ++(*p_age); // Dereference 'p_age' then increment it
    std::cout << "Hello! You are " << *p_age << " years old."
              << " p_age : " << p_age << std::endl;
}