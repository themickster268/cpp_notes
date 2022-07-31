#include <iostream>

int main(){
    // Declare and initialise pointer
    /* int* p_number {}; // Will initialise to nullpointer
    double* p_fractional_number {};

    // Explicitly initialise with nullptr
    int* p_number1{nullptr};
    double* p_fractional_number1{nullptr};

    // Pointers to different variables are of the same size
    std::cout << "sizeof(int) : " << sizeof(int) << std::endl; // 4 Bytes
    std::cout << "sizeof(double) : " << sizeof(double) << std::endl; // 8 Bytes
    std::cout << "sizeof(int*) : " << sizeof(int*) << std::endl; // Pointers occupy 8 Bytes in memory, regardless of type
    std::cout << "sizeof(double*) : " << sizeof(double*) << std::endl;
    std::cout << "sizeof(p_number1) : " << sizeof(p_number1) << std::endl;
    std::cout << "sizeof(p_fractional_number1) : " << sizeof(p_fractional_number1) << std::endl;

    // It doesn't matter if you put the * close to datatype or variable name
    int*  p_number2{nullptr};
    int * p_number3{nullptr};
    int  *p_number4{nullptr};

    std::cout << std::endl;

    
    // Confusing as you wonder if other_int_var6
    // is also a pointer to an int. It is not.
    // The structure is exactly the same for other_int_var
    
    int *p_number5{}, other_int_var{};
    int* p_number6{}, other_int_var6{};

    std::cout << "sizeof(p_number5) : " << sizeof(p_number5) << std::endl;
    std::cout << "sizeof(other_int_var) : " << sizeof(other_int_var) << std::endl;
    std::cout << "sizeof(p_number6) : " << sizeof(p_number6) << std::endl;
    std::cout << "sizeof(other_int_var6) : " << sizeof(other_int_var6) << std::endl;

    // It is better to separate these declarations on different lines though
    int *p_number7 {};
    int other_int_var7{}; // No room for confusion this time

    std::cout << std::endl; */

    // Initialising pointers and assigning them data
    // We know that pointers store memory addresses of variables
    int int_var{43};
    int *p_int {&int_var};

    std::cout << "Int var: " << int_var << std::endl;
    std::cout << "p_int (Address in memory): " << p_int << std::endl;

    // You can also change the address stored in a pointer any time
    int int_var1 {65};
    p_int = &int_var1;
    std::cout << "p_int (with different address): " << p_int << std::endl;

    // We cannnot cross assign between pointers of different types
    int *p_int1 {nullptr};
    double double_var {33};

    // p_int1 = &double_var; // Compiler error

    std::cout << std::endl;

    // Dereferencing a pointer:
    int* p_int2{nullptr};
    int int_data {56};
    p_int2 = &int_data;

    std::cout << "value: " << *p_int2 << std::endl; // Dereferencing a pointer

    return 0;
}