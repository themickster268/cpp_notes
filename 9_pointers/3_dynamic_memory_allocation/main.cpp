#include <iostream>

int main(){

    // BAD PRACTISE
    // Writing into uninitialised pointer through dereferencing
    // int *p_num1; // Contains junk address : could be anything
    // std::cout << "Writing in the 55." << std::endl;
    // *p_num1 = 55; // Writing into junk address : BAD!
    // std::cout << std::endl;
    // std::cout << "Writing into uninitialised pointer though dereference" << std::endl;
    // std::cout << "p_num1 : " << p_num1 << std::endl; // Reading from junk memory
    // std::cout << "Dereferencing bad memory " << std::endl;
    // std::cout << "*p_num1 : " << *p_num1 << std::endl;
    
    
    /* 
    // Initialising pointer to null
    // int *p_num2 {nullptr}; // also works
    int *p_num2 {}; // Initialised with pointer equivalent of zero : nullptr
                    // A pointer pointing to nowhere
    std::cout << "Writing into nullptr memory. " << std::endl;
    *p_num2 = 33;   // Writing into a pointer pointing to nowhere : BAD, CRASH
    std::cout << "Done writing into nullptr memory" << std::endl;

    std::cout << std::endl;
    std::cout << "Reading and writing through nullptr: " << std::endl;
    // std::cout << "p_num2 : " << p_num2 << std::endl;
    // std::cout << "*p_num2 : " << *p_num2 << std::endl; // Reading from nullptr */

    /* {
        int local_scope_var { 53 }; // Memory allocated on the stack for this int variable
    }// variable falls out for scope and memory is automatically freed from the stack */

    // Initialise the pointer with dynamic memory (heap memory). Dynamically 
    // allocate memory at runtime and make a pointer to it
    /* int *p_number {nullptr};
    p_number = new int; // Dynamically allocate space for a single int on the heap
                        // This memory belongs to our program from now on. The system
                        // cannot use it for anything else, untill we return it.
                        // After this line executes, we will have a valid memory location
                        // allocated. The size of the allocated memory will be such that it
                        // can store the type pointed to by the pointer

    *p_number = 77;  // Writing into dynamically allocated memory using dereferencing

    std::cout << std::endl;
    std::cout << "Dynamically allocated memory : " << p_number << std::endl;
    std::cout << "*p_number : " << *p_number << std::endl;

    // Return memory to OS
    delete p_number;
    p_number = nullptr; */

    
    // It is also possible to initialise the pointer with a valid
    // address on declaration. Not with a nullptr
    int *p_number5{new int}; // Not initialised - Memory location contains junk value
    int *p_number6{new int (22)}; // using direct initialisation
    int *p_number7{new int { 23 }}; // using uniform initialisation

    std::cout << std::endl;
    std::cout << "Initialise with valid memory address at declaration: " << std::endl;
    std::cout << "p_number5: " << p_number5 << std::endl;
    std::cout << "*p_number5: " << *p_number5 << std::endl; // junk value

    std::cout << "p_number6: " << p_number6 << std::endl;
    std::cout << "*p_number6: " << *p_number6 << std::endl;

    std::cout << "p_number7: " << p_number7 << std::endl;
    std::cout << "*p_number7: " << *p_number7 << std::endl;

    // Remember to release memory
    delete p_number5;
    p_number5 = nullptr;

    delete p_number6;
    p_number6 = nullptr;

    delete p_number7;
    p_number7 = nullptr;

    std::cout << std::endl;

    // We can reuse pointers
    p_number5 = new int(81);
    std::cout << "*p_number5 : " << *p_number5 << std::endl;

    delete p_number5;
    p_number5 = nullptr;


    // Calling delete twice on a pointer : BAD!
    p_number5 = new int(99);
    std::cout << "*p_number5 : " << *p_number5 << std::endl;

    // delete p_number5;
    delete p_number5; 
    p_number = nullptr;

    std::cout << "Program is ending properly" <<std::endl;

    return 0;
}