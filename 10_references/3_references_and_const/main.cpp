#include <iostream>

int main(){

    // Non const reference
    // std::cout << "Non const reference: " << std::endl;
    int age {27};
    /*const int &ref_age{age};

    std::cout << std::endl;
    std::cout << "ref_age : " << ref_age << std::endl;
    std::cout << "ref_age : " << ref_age << std::endl;

    // Can modify original variable through reference
    std::cout << std::endl;
    std::cout << "Modify original variable through reference : " << std::endl;

    ref_age++; // Modify through reference

    std::cout << "ref_age : " << ref_age << std::endl;
    std::cout << "ref_age : " << ref_age << std::endl; */

    // Simulating reference behaviour with pointers
    /* const int * const p_age{&age};

    *p_age = 25;
 */
    return 0;
}