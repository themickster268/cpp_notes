#include <iostream>

int max(int a, int b){
    return a > b ? a : b;
}

// Overloads are defined with different function signatures (name and parameters)
// If we tried to overload a function with the same signature, but with
// a different return type, we get a compiler error.  
/* double max(int a, int b){
    return a > b ? a : b;
} */

double max(double a, double b){
    return a > b ? a : b;
}

double max(double a, int b)
{   
    std::cout << "(double, int) overload called..." << std::endl;
    return a > b ? a : b;
}

double max(int a, double b)
{
    std::cout << "(int, double) overload called..." << std::endl;
    return a > b ? a : b;
}

std::string_view max(std::string_view a, std::string_view b){
    return a > b ? a : b;
}

int main(){
    int int_value1{41};
    int int_value2{29};

    double double_value1{47.2};
    double double_value2{55.01};

    std::string_view first{"Hello"};
    std::string_view second{"World"};

    std::cout << "max (" << int_value1 << ", " << int_value2 << ") : "
                << max(int_value1, int_value2) << std::endl;

    std::cout << "max (" << double_value1 << ", " << double_value2 << ") : "
              << max(double_value1, double_value2) << std::endl;

    std::cout << "max (" << first << ", " << second << ") : "
              << max(first, second) << std::endl;

    std::cout << "max(dog, cat) : " << max("dog", "cat") << std::endl;
    return 0;
}