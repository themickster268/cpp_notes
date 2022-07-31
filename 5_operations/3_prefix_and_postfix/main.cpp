#include <iostream>

int main(){
    int value { 5 };
    //Increment by one
    value = value + 1; // 6
    std::cout << "The value is: " << value << std::endl;

    value = 5; // Reset value to 5
     
    // Decrement by one
    value = value - 1; // 4
    std::cout << "The value is: " << value << std::endl;

    std::cout << "------------------------------" << std::endl;

    // Postfix increment/decrement
    value = 5;
    std::cout << "The value is incrementing (postfix): " << value++ <<std::endl; // 5
    std::cout << "The value is: " << value << std::endl; // 6

    value = 5;
    std::cout << "The value is decrementing (postfix): " << value-- << std::endl; // 5
    std::cout << "The value is: " << value << std::endl; // 4

    std::cout << "------------------------------" << std::endl;

    // Prefix increment/decrement
    value = 5;
    std::cout << "The value is incrementing (prefix): " << ++value << std::endl; // 6
    std::cout << "The value is: " << value << std::endl;                          // 6

    value = 5;
    std::cout << "The value is decrementing (prefix): " << --value << std::endl; // 4
    std::cout << "The value is: " << value << std::endl;                          // 4

    return 0;
}