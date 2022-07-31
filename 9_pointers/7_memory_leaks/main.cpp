#include <iostream>

int main(){
    /* int *p_number {new int{67}}; // Points to some address, let's call it address1

    // Should delete and reset p_number here.

    int number{55}; // Lives at address2 - stack variable

    p_number = &number; // Now p_number points to address2 , but address1 is still in use by
                        // our program. But our program has lost access to that memory location.
                        // Memory has been leaked.
               */          

    // Double allocation
    /* int *p_number1 {new int{55}};

    // Use the pointer p_number1 here

    // Should delete and reset p_number1 here.

    p_number1 = new int{44}; // Memory with int{55} will be leaked.

    delete p_number1;
    p_number1 = nullptr; */

    // Nested scopes with dynamically allocated memory
    {
        int *p_number2 {new int{57}};
        
        // Use the dynamic memory here

        // Delete and reset p_number2
    }
    // Memory leak with int{57} leaked.

    
    std::cout << "Program ended properly" << std::endl;
    return 0;
}