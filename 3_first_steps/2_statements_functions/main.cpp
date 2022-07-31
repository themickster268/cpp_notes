#include <iostream>

int addNumbers(int num1, int num2)
{
    return num1 + num2;
}

int multiplyNumbers(int num1, int num2){
    return num1 * num2;
}

int main()
{
    int firstNumber = 12;
    int secondNumber = 9;

    int sum = addNumbers(firstNumber, secondNumber);

    std::cout << "The sum of " << firstNumber << " and " << secondNumber << " is: " << sum << std::endl;

    std::cout << "Sum: " << addNumbers(3, 42) << std::endl;

    std::cout << "Product: " << multiplyNumbers(3, 5) << std::endl;
}