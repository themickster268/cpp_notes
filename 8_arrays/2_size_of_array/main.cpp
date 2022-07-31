#include <iostream>

int main()
{
    int scores[]{10, 12, 15, 11, 18, 17, 22, 23, 24, 55};

    /* int count {std::size(scores)}; // std::size() introducted in C++17

    // can get the size with std::size()
    std::cout << "Scores size: " << count << std::endl;

    // Print data out
    for (size_t i = 0; i < count; i++)
    {
        std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
    } */

    /* std::cout << "sizeof(scores): " << sizeof(scores) << std::endl;
    std::cout << "sizeof(scores[0]): " << sizeof(scores[0]) << std::endl;

    int count{sizeof(scores) / sizeof(scores[0])}; 

    std::cout << "Number of items in scores : " << count <<std::endl;

    for (size_t i = 0; i < count; i++)
    {
        std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
    } */

    // Range based for loop
    for (auto i : scores)
    {
        std::cout << "value :  " << i << std::endl;
    }
    
}