#include <iostream>



int main(){
    int max {};

    int a {35};
    int b {20};

    std::cout << std::endl;
    std::cout << "using regular if" << std::endl;

    if (a > b)
    {
        max = a;
    } else {
        max = b;
    }

    std::cout << "max: " << max << std::endl;

    a = 4;
    b = 15;

    std::cout << std::endl;
    std::cout << "using ternary operator" << std::endl;

    max = (a > b) ? a : b;

    std::cout << "max: " << max << std::endl;


    // Ternary initialisation
    std::cout << std::endl;
    std::cout << "Speed" << std::endl;
    bool fast {false};

    int speed { fast ? 300 : 150 };

    std::cout << "The speed is: " << speed << std::endl;
}