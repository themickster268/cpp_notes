#include <iostream>

int main(){

    int num1 {60};
    int num2 {60};

    std::cout << "Number1 : " << num1 << std::endl;
    std::cout << "Number2 : " << num2 << std::endl;

    std::cout << std::endl;
    std::cout << "Comparing variables" << std::endl;

    std::cout << std::boolalpha; // output as true/false

    // Stess the need for parenthesis here
    std::cout << "number1 < number2: " << (num1 < num2) << std::endl;
    std::cout << "number1 <= number2: " << (num1 <= num2) << std::endl;
    std::cout << "number1 > number2: " << (num1 > num2) << std::endl;
    std::cout << "number1 >= number2: " << (num1 >= num2) << std::endl;
    std::cout << "number1 == number2: " << (num1 == num2) << std::endl;
    // std::cout << std::noboolalpha;
    std::cout << "number1 != number2: " << (num1 != num2) << std::endl;

    std::cout << std::endl;
    std::cout << "store comparison result and use it later" << std::endl;

    bool result = (num1 == num2);

    std::cout << num1 << " == " << num2 << " : " << result << std::endl;
    return 0;
}