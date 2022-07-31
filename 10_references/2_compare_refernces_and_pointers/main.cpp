#include <iostream>

int main(){

    // Declare pointer and reference
    double double_value {12.34};
    double &ref_double_value {double_value}; // Reference to double_value
    double *p_double_value {&double_value}; // Pointer to double_value

    // Reading
    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;

    // Writing through pointer
    *p_double_value = 15.44;

    std::cout << std::endl;
    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;

    // Writing through reference
    ref_double_value = 18.44;

    std::cout << std::endl;
    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;

    
    // Reference can only refer to the original variable it was assigned to
    // Reference cannot be changed to refer to another variable
    double other_double_value {78.45};

    ref_double_value = other_double_value; // Only grabbing and storing value of other_variable

    std::cout << std::endl;
    std::cout << "Attempting to make refernce refer to something else..." << std::endl;
    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;


    // We can make the pointer point to something else
    p_double_value = &other_double_value;

    std::cout << std::endl;
    std::cout << "Making the pointer point somewhere else..." << std::endl;
    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "&double_value : " << &double_value << std::endl;
    std::cout << "&ref_double_value : " << &ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;


    *p_double_value = 555.5;

    std::cout << std::endl;
    std::cout << "Making the pointer point somewhere else..." << std::endl;
    std::cout << "double_value: " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "&double_value : " << &double_value << std::endl;
    std::cout << "&ref_double_value : " << &ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;

    return 0;
}