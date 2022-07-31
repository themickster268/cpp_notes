#include <iostream>

int main(){
    // Declare an array of ints
    // int scores[10]; // Junk data

    // Read data
    /* std::cout << "Scores[0]: " << scores[0] << std::endl;
    std::cout << "Scores[1]: " << scores[1] << std::endl; */

    // Read with loop 
    /* for (size_t i = 0; i < 10; i++){
        std::cout << "Scores[" << i << "]: " << scores[i] << std::endl;
    } */

    // Write data into an array
    /* scores[0] = 20;
    scores[1] = 21;
    scores[2] = 22; */

    /* for (size_t i = 0; i < 10; i++)
    {
        std::cout << "Scores[" << i << "]: " << scores[i] << std::endl;
    } */

    // Writing array data using a loop
    /* for (size_t i = 0; i < 10; i++)
    {
        scores[i] = i * 10;
    }
    
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << "Scores[" << i << "]: " << scores[i] << std::endl;
    } */

    // Declare and initialise an array
    /* double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};

    for (size_t i = 0; i < 5; i++)
    {
        std::cout << "salary[" << i << "]: " << salaries[i] << std::endl;
    } */
    

    // If you don't initialise all the elements, those you leave out
    // are initialise to 0

    /* int families [5] {12, 7, 5};

    for (size_t i = 0; i < 5; i++)
    {
        std::cout << "families[" << i << "]: " << families[i] << std::endl;
    } */

    // Omitting the size of the array at declaration
    /* int class_sizes[] {10, 12, 15, 11, 18, 17, 56};

    // Printing using a range based for loop
    for (auto value : class_sizes)
    {
        std::cout << "Value : " << value << std::endl;
    } */

   /*  const int birds[]{10, 12, 15, 11, 18, 17, 56};
    birds[2] = 8; */

    int scores [] {2, 5, 8, 2, 5, 6, 9};
    int sum {0};

    for (int element : scores)
    {
        sum += element;
    }

    std::cout << "Score sum : " << sum << std::endl;
    

    return 0;
}