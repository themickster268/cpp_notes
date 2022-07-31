#include <iostream>

int main(){
    int int_value {45};
    double double_value {33.45};

    int &r_to_int_value_1{int_value}; // Assignment through initialisation
    int &r_to_int_value_2 = int_value; // Assign through assignment
    double &r_to_double_value_1 {double_value};

    // You have to declare and initialise in one statement!
    // int& some_reference; - ERROR!!!

    std::cout << "int_value : " << int_value << std::endl;
    std::cout << "double_value : " << double_value << std::endl;
    std::cout << "r_to_int_value_1 : " << r_to_int_value_1 << std::endl;
    std::cout << "r_to_int_value_2 : " << r_to_int_value_2 << std::endl;
    std::cout << "r_to_double_value_1 : " << r_to_double_value_1 << std::endl;

    // Using 'address of' (&) operator to print memory address
    std::cout << "&int_value : " << &int_value << std::endl;
    std::cout << "&double_value : " << &double_value << std::endl;
    std::cout << "&r_to_int_value_1 : " << &r_to_int_value_1 << std::endl;
    std::cout << "&r_to_int_value_2 : " << &r_to_int_value_2 << std::endl;
    std::cout << "&r_to_double_value_1 : " << &r_to_double_value_1 << std::endl;

    std::cout << "sizeof(int) : " << sizeof(int) << std::endl;
    std::cout << "sizeof(int&) : " << sizeof(int&) << std::endl;
    std::cout << "sizeof(r_to_int_value_1) : " << sizeof(r_to_int_value_1) << std::endl;


    // Modify through reference : changes will be reflected in original variable
    std::cout << std::endl;
    std::cout << "Modifying int_value through reference..." << std::endl;

    r_to_int_value_1 = 55;

    std::cout << "int_value(updated through reference) : " << int_value << std::endl;

    // Modifying original variable : changes will also be reflected in references
    std::cout << std::endl;
    std::cout << "Modifying double_value..." << std::endl;

    double_value = 103.2;

    std::cout << "r_to_double_value_1 (after updating double_value) : " << r_to_double_value_1 << std::endl;
}