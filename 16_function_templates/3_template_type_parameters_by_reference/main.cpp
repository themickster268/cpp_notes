#include <iostream>

/* template <typename T> T maximum(T a, T b){ // Passby value - copies of original values are made
    std::cout << "In - &a : " <<  &a << std::endl;
    return a > b ? a : b;
} */

template <typename T>
const T &maximum(const T &a, const T &b);

    int main()
{
    double a {23.5} , b{51.2};

    std::cout << "Out - &a: " << &a << std::endl;

    double max1 = maximum(a, b);    
    std::cout << "max1 : " << max1 << std::endl;
    return 0;
}

template <typename T>
const T &maximum(const T &a, const T &b)
{
    std::cout << "In - &a : " << &a << std::endl; // True references to outside values
    return a > b ? a : b;
}
