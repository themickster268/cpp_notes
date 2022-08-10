#include <iostream>

int max(int a, int b); // Function declaration / Prototype
                       // Prototype includes the return type,
                       // function name, and parameter list.
                       // A function signature only does not
                       // include the return type.

int min(int a, int b);

int inc_mult(int, int); // Parameter names are optional

int main()
{

    int x{5}, y{2};

    int result = max(x, y);

    std::cout << "max is : " << result << std::endl;

    result = inc_mult(x, y);

    std::cout << "result : " << result << std::endl;

    return 0;
}

// Function Definiton. Shows up after main().
int max(int a, int b)
{
    return a > b ? a : b;
}

int min(int a, int b)
{
    return a < b ? a : b;
}


int inc_mult(int a, int b) {
    return ((++a) * (++b));
}