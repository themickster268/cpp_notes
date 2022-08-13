#include <iostream>

int main(){

    // Capture lists
    // Allows lambda functions to use variables that have been declared 
    // outside the scope of the function.

    double a{10};
    double b{20};

    auto func = [a, b](){
        std::cout << "a + b : " << (a + b) << std::endl;
    };
    func();

    // Capturing by value : what we have in the lambda function is a copy
    /* int c{42};

    auto func1 = [c](){
        std::cout << "Inner value : " << c << std::endl;
    };

    for (size_t i = 0; i < 5; i++)
    {
        std::cout << "Outer value : " << c << std::endl;
        func1();
        c++;
    } */

    // Capturing by reference : Working with the original outside value
    int c{42};

    auto func2 = [&c]()
    {
        std::cout << "Inner value : " << c << std::endl;
    };

    for (size_t i = 0; i < 5; i++)
    {
        std::cout << "Outer value : " << c << std::endl;
        func2();
        c++;
    }

    return 0;
}