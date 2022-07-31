#include <iostream>

int main(){

    const size_t size {10};

    // Different ways you can declare an array
    // dynamically and how they are initialised

    double *p_salaries { new double[size]}; // Salaries array eill contain junk values

    int *p_students { new(std::nothrow) int[size]{}}; // All values initialised to 0

    // Allocating memory space for an array of size double
    // vars. First 5 will be initialised with 1, 2, 3, 4, 5, 
    // and the rest will be 0's.
    double *p_scores { new(std::nothrow) double[size]{1, 2, 3, 4, 5}};

    // nullptr check and use the allocated array
    if (p_scores)
    {
        std::cout << "size of scores (it's a regular pointer) : " << sizeof(p_scores) << std::endl;
        std::cout << "Successfully allocated memory for scores."  << std::endl;

        // Print out elements. Can use regular array notation, or pointer arithmetic
        for (size_t i = 0; i < size; i++)
        {
            std::cout << "value : " << p_scores[i] << " : " << *(p_scores + i) << std::endl;
        }
        
    }

    delete[] p_salaries;
    delete[] p_students;
    delete[] p_scores;

    p_salaries = nullptr;
    p_students = nullptr;
    p_scores = nullptr;

    std::cout << "=================================" << std::endl;

    // Static arrays vs dynamic arrays

    int scores[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Lives on the stack

    std::cout << "scores size : " <<std::size(scores) << std::endl;

    for (auto s : scores)
    {
        std::cout << "value: " << s << std::endl;
    }

    int *p_scores1 = new int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Lives on the Heap

    // std::cout << "p_scores1 size : " << std::size(p_scores1) << std::endl;

   /*  for (auto s : p_scores1)
    {
        std::cout << "value: " << s << std::endl;
    } */

    delete [] p_scores1;
    p_scores1 = nullptr;

    return 0;
}