#include <iostream>

int main(){

    // Can use a normal pointer to char like we've been doing
    // for double, int and anything else really.
    char *p_char_var{nullptr};
    char char_var{'A'};

    p_char_var = &char_var;

    std::cout << "The value stored in p_char_var is : " << *p_char_var << std::endl;

    char char_var1{'C'};
    p_char_var = &char_var1;

    std::cout << "The value stored in p_char_var is : " << *p_char_var << std::endl;

    // Pointer to char can also do something special.
    // You can initialise  a pointer to char with a string literal : C-String
    const char * p_message {"Hello World!"};

    std::cout << "p_message : " << p_message << std::endl;

    // *p_message = 'B'; // Compile error

    std::cout << "*p_message : " << *p_message << std::endl;

    // Allow users to modify the string
    char message1[] {"Hello World!"};
    message1[0] = 'B';
    std::cout << "message1 : " << message1 << std::endl;

    return 0;
} // c++ programming - 10:27:25