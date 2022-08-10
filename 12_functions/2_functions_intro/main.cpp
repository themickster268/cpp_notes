#include <iostream>

// Function that takes a single parameter, and doesn't
// return the result explicitly
void enter_bar(size_t age)
{ // Function parameters
    if (age >= 18)
    {
        std::cout << "You are " << age << " years old. Please proceed." << std::endl;
    }
    else
    {
        std::cout << "Sorry, you're too young to enter. No offense!" << std::endl;
    }
}

// NOTE: Functions are uniquely identified through their NAME
// and their INPUT PARAMETERS (Not including their return type).

int max(int a, int b)
{
    /* if (a > b){
        return a;
    } else {
        return b;
    } */
    return a > b ? a : b;
}


// Function that doesn't take parameters and returns mothing
void say_hello()
{
    std::cout << "Hello there" << std::endl;
    return; // You can omit this return statement for functions returning void
}

// Function that takes no parameters and returns something
int lucky_number()
{
    return 99;
}

// Parameters passed this way are scoped localy in the function.
// Changes to them are not visible outside the function. What we
// have inside the function are actually COPIES of the arguments
// passed to the function.
double increment_multiply(double a, double b){
    std::cout << "Inside function, before increment : " << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    double result {(++a) * (++b)};

    std::cout << "Inside function, after increment : " << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    // Returning the result
    return result;
}

int main()
{

    // enter_bar(25); // Function arguments
    // enter_bar(15);

    /* for (size_t i{1}; i <= 20; i++)
    {
        enter_bar(i);
    } */

   /*  int result = max(100, 20);

    int x{-5}, y{6};
    result = max(x, y);

    std::cout << "max is : " << result << std::endl; */

    // say_hello();

    /* int result{lucky_number()};

    std::cout << "max is : " << result << std::endl; */

    double h{3.00}, i{4.00};

    std::cout << "Outside function, before increment : " << std::endl;
    std::cout << "h : " << h << std::endl;
    std::cout << "i : " << i << std::endl;

    double incr_multi_result = increment_multiply(h, i);

    std::cout << "Outside function, after increment : " << std::endl;
    std::cout << "h : " << h << std::endl;
    std::cout << "i : " << i << std::endl;

    return 0;
}