#include <iostream>

int main()
{

    // int *data = new int[100000000000000000]; //

    /* for (size_t i = 0; i < 10000000; i++)
    {
        int *data = new int[1000000000];
    } */

    // Exception
    // std::nothrow

    // Exception
    /* for (size_t i = 0; i < 100; i++){
        try{
            int *data = new int[1000000000000000];
        }
        catch (const std::exception& e){
            std::cerr << "Something went wrong : " << e.what() << '\n';
        }
    } */

    // std::nothrow
    for (size_t i = 0; i < 100; i++){
        int *data = new(std::nothrow) int[1000000000000000];
        
        if(data != nullptr){
            std::cout << "Data allocated" << std::endl;
        } else {
            std::cout << "Data allocation failed" << std::endl;
        }
    }

    std::cout << "Program ending well." << std::endl;

    return 0;
}