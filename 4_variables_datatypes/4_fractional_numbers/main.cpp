#include <iostream>
#include <iomanip>


int main(){
    // Declare and initialise
    float number1{1.123456789012345678890f}; // Precision: 7 digits
    double number2{1.123456789012345678890}; // Precision: 15 digits
    long double number3{1.123456789012345678890L};

    // print out the sizes
    std::cout << "sizeof float: " << sizeof(float) << std::endl;
    std::cout << "sizeof double: " << sizeof(double) << std::endl;
    std::cout << "sizeof long double: " << sizeof(long double) << std::endl;

    std::cout << std::setprecision(20); // controls the precision of std::cout
    std::cout << "number1 is: " << number1 << std::endl; // 7 digits
    std::cout << "number2 is: " << number2 << std::endl; // 15'ish digits
    std::cout << "number3 is: " << number3 << std::endl; // 15 digits

    // Float problems: The precision is usually too limited
    // for a lot of applications
    float number4 = 192400023.0f; // Error: Narrowing conversion - more than 7 digits
    std::cout << "number4 is: " << number4 << std::endl;

    std::cout << "--------------------------" << std::endl;

    // Scientific notation
    // What we have seen so far in terms of floating point types
    // is fixed notation. There is another notation, scientific
    // that is handy of you have really huge numbers or small numbers
    // to represent.

    double number5 {192400023};
    double number6 {1.92400023e8};
    double number7 {1.924e8}; // Can ommit the lower 00023
                                // for simplicity if our application allows

    double number8 {0.00000000003498};
    double number9 {3.498e-11}; // 3.298 multiplied by 10exp(-11)

    std::cout << "number5 is: " << number5 << std::endl;
    std::cout << "number6 is: " << number6 << std::endl;
    std::cout << "number7 is: " << number7 << std::endl;
    std::cout << "number8 is: " << number8 << std::endl;
    std::cout << "number9 is: " << number9 << std::endl;

    std::cout << "--------------------------" << std::endl;

    // Infinity and NaN
    std::cout << std::endl;
    std::cout << "Infinity and NaN" << std::endl;

    double number10 { -5.6};
    double number11 {}; // Initialised to 0
    double number12 {}; // Initialised to 0

    // Infinity
    double result { number10 / number11};

    std::cout << number10 << " / " << number11 << " yeilds: " << result << std::endl;
    std::cout << result << " + " << number10 << " yeilds: " << result + number10 << std::endl;

    // NaN
    result = number11 / number12;

    std::cout << number11 << " / " << number12 << " = " << result << std::endl;

    return 0;
}