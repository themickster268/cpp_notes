#include <iostream>

int main(){

    // Capturing everything outside of lambda func by 
    // Making copies of values
    /* int c{42};

    auto func = [=](){
        std::cout << "Inner value : " << c << std::endl;
    };

    for (size_t i = 0; i < 5; i++)
    {
        std::cout << "Outer value : " << c << std::endl;
        func();
        c++;
    } */

    // Capturing everthing outside lambda func by reference
    int c{42};
    double d{12.2};

    auto func = [&]()
    {
        std::cout << "Inner value c : " << c << std::endl;
        std::cout << "Inner value d : " << d << std::endl;
    };

    for (size_t i = 0; i < 5; i++)
    {
        std::cout << "Outer value c : " << c << std::endl;
        std::cout << "Outer value d : " << d << std::endl;
        func();
        c++;
        d+= 0.5;
    }
    

    return 0;
}