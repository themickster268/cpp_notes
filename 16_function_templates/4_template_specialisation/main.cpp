#include <iostream>

// Function template
template <typename T>
T maximum(T a, T b);

// Template specialisation - Overrides compiler behaviour
template <>
const char *maximum<const char *>(const char *a, const char *b);

int main()
{
    int a{10}, b{23};
    double c{34.7}, d{23.4};
    std::string e{"hello"}, f{"world"};

    int max_int = maximum(a, b);         // int type deduced
    double max_double = maximum(c, d);   // double type deduced
    std::string max_str = maximum(e, f); // string type deduced

    const char *g{"wild"};
    const char *h{"animal"};

    const char *result = maximum(g, h);
    std::cout << "max(const char*, const char*) : " << result << std::endl;

    return 0;
}

template <typename T>
T maximum(T a, T b)
{
    return a > b ? a : b;
}

template <>
const char *maximum<const char *>(const char *a, const char *b)
{
    // std::strcmp doc : https://en.cppreference.com/w/c/string/byte/strcmp
    return (std::strcmp(a, b) > 0) ? a : b;
}