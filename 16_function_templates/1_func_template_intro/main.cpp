#include <iostream>
#include <string>

template <typename T>
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

template <typename T>
T multiply(T a, T b) {
    return a * b;
}

int main()
{
    int a{10};
    int b{23};

    double c{34.7};
    double d{23.4};

    std::string e{"Hello"};
    std::string f{"World!"};

    std::cout << "maximum(int) : " << maximum(a, b) << std::endl;
    std::cout << "maximum(double) : " << maximum(c, d) << std::endl;
    std::cout << "maximum(std::string) : " << maximum(e, f) << std::endl;

    /* double x{7.0};
    double y{5.1};
    auto result = multiply(x, y); // Cannot multiply two strings
    std::cout << std::endl;
    std::cout << "Result : " << result << std::endl; */


    /* double x{5.1};
    double y{7.9};

    auto result = maximum(x, y);
    std::cout << "result : " << result << std::endl; */

    int x{5};
    int y{7};

    int *p_x = &x;
    int *p_y = &y;

    auto result = maximum(p_x, p_y);
    std::cout << "result : " << *result << std::endl;

    return 0;
}
