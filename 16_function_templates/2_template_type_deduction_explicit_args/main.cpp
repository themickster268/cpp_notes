#include <iostream>

template <typename T>
T maximum(T a, T b)
{
    return a > b ? a : b;
}

int main()
{

    int a{10}, b{23};
    double c{34.7}, d{23.4};
    std::string e{"hello"}, f{"world"};

    maximum(a, b); // int type deduced
    maximum(c, d); // double type deduced
    maximum(e, f); // std::string type deduced 

    maximum<double>(c, d); // Explicitly say that we want the double
                           // version called, if an instance is not there
                           // already, it will be created.
    maximum<double>(a, c); // Works, even of parameters are of different
                           // numeric types, there is implicit conversion
                           // from int to double for the first parameter.
    // maximum<double>(a, e); // Error: cannot convert std::string to double.

    // std::cout << "result : " << result << std::endl;
    return 0;
}