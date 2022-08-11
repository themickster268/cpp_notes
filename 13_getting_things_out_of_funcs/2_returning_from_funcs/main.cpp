#include <iostream>

int sum(int a, int b){
    int result = a + b;
    std::cout << "In : &result(int) : " << &result << std::endl;
    return result; // Default - Returns by value - ints are small enough to copy in memory
}

std::string concat_strings(std::string str1, std::string str2){
    std::string result = str1 + str2;
    std::cout << "In : &result(std::string) : " << &result << std::endl;
    return result; // In terms of returning strings, a reference to the 
                   // result string is returned, as strings are of a variable length
                   // in memory, improving memory optimisation
                   // Not all datatypes are returned by value
}

int main(){
    /* int x{34};
    int y{16};

    int result = sum(x, y);
    std::cout << "Out : &result(int) : " << &result << std::endl;
    std::cout << "sum : " << result << std::endl; */

    std::string in_str1{"Hello"};
    std::string in_str2{" World"};
    std::string result {concat_strings(in_str1, in_str2)};
    std::cout << "Out : &result(std::string) : " << &result << std::endl;
    std::cout << "concat_str : " << result << std::endl;

    return 0;
}