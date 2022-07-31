#include <iostream>

int main(){
    
    // for loop
    /* for (unsigned int i {0}; i < 10000; i++){
        std::cout << i <<  " : I love C++" << std::endl;
    }
    std::cout << "Loop done" << std::endl; */

    // Use size_t - alias for unsigned int / positive while numbers
    /* for (size_t i {0}; i < 10; i++)
    {
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done" << std::endl; */

    // size of size_t in bytes
    // std::cout << "sizeof(size_t): " << sizeof(size_t) << std::endl;

    //Scope of iterator
    /* for (size_t i{0}; i < 10; i++){
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done" << std::endl; */
    // std::cout << "i: " << i << std::endl; Compiler error: i is not in scope


    // Iterator declared outside of loop
    /* size_t i {0}; // Iterator defined outside loop
    for (i; i < 10; i++)
    {
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done" << std::endl;
    std::cout << "i: " << i << std::endl; */

    // Leave out the iterator declaration
   /*  size_t i{0}; // Iterator defined outside loop
    for (  ; i < 10; i++)
    {
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done" << std::endl;
    std::cout << "i: " << i << std::endl; */

    // Don't hard code values
    const size_t COUNT {100};
    for (size_t i{0}; i < COUNT; i++)
    {
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done" << std::endl;

    return 0;
}