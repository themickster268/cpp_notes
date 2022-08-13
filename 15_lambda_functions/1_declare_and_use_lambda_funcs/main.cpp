#include <iostream>

/*
    Lambda function signature:
    [capture list] (parameters) -> return type {
        // Function Body
    };

    auto func = [](){
        std::cout << "Hello World!" << std::endl;
    };

    func();

    // Calling a lambda function directly after definition
    [](){
        std::cout << "Hello World!" << std::endl;
    }();

    [](double a, double b){
        std::cout << "a + b : " << (a + b) << std::endl;
    }(12.1, 5.7);

    auto result = [](double a, double b) -> double {
        return(a + b);
    }(12.1, 5.7);

    auto result = [](double a, double b) {
        return a + b;
    };
    std::cout << "result : " << result << std::endl;
*/

int main()
{

    auto func1 = [](double a, double b) 
    {
        return a + b;
    };

    auto func2 = [](double a, double b) -> int {
        return a + b;
    };

    /* auto result1 = func1(23, 7);
    auto result2 = func1(9, 45);

    std::cout << "result1: " << result1 << std::endl;
    std::cout << "result2: " << result2 << std::endl;
    std::cout << "direct call: " << func1(5, 2) << std::endl; */

    double a{6.9};
    double b{3.5};

    auto result1 = func1(a, b); // 4 bytes
    auto result2 = func2(a, b); // 8 bytes

    std::cout << "sizeof(result1) : " << sizeof(result1) << std::endl;
    std::cout << "sizeof(result2) : " << sizeof(result2) << std::endl;
    std::cout << "result1 : " << result1 << std::endl;
    std::cout << "result2 : " << result2 << std::endl;

    return 0;
}