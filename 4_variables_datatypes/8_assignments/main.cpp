#include <iostream>

int main() {
    int var1 {123}; // Declare and initialise
    std::cout << "var: " << var1 << std::endl;

    var1 = 55; // Assign
    std::cout << "var: " << var1 << std::endl;

    std::cout << std::endl;

    std::cout << "-------------" << std::endl;

    double var2 {4.0}; // Declare and initialise
    std::cout << "var2: " << var2 << std::endl;

    var2 = 99.99; // Assign
    std::cout << "var2: " << var2 << std::endl;

    std::cout << std::endl;

    std::cout << "-------------" << std::endl;

    bool state {false}; // Declare and initialise
    std::cout << std::boolalpha;
    std::cout << "state: "  << state << std::endl;

    state = true;
    std::cout << "state: " << state << std::endl;

    std::cout << "-------------" << std::endl;

    // Auto type deduction
    // Be careful about auto assignments
    auto var3 {333u}; // Declare and initialise with type deduction

    var3 = -22; // Assigning negative number. DANGER! 

    std::cout << "var3: " << var3 << std::endl;

    return 0;
}