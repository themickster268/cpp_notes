#include <iostream>
#include <string>

int main(){

    // std::cout - print to the console

    // std::cin - store input

    // std::cerr - print error messages

    // std::clog - print log messages

    // std::getline(std::cin, variable_name); - allows input with spaces

    /* std::cout << "Hello c++20!" << std::endl;

    int age = 21;

    std::cout << "Age: " << age << std::endl;

    std::cerr << "Error: Something went wrong." << std::endl;
    std::clog << "Log Message: something happened" << std::endl; */

    /* int age1;
    std::string name;

    std::cout << "Please enter your name and age: " << std::endl;

    // std::cin >> name;
    // std::cin >> age1;

    std::cin >> name >> age1;

    std::cout << "Hello " << name << ", you are " << age1 << " years old." << std::endl; */

    // Data with spaces
    std::cout << "Please enter your full name and age: " << std::endl;
    int age2;
    std::string full_name;

    std::getline(std::cin, full_name);
    std::cin >> age2;

    std::cout << "Hello " 
            << full_name << ", you are "
            << age2 << " years old." << std::endl;

   
}