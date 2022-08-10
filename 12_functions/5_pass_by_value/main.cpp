#include <iostream>

void say_age(int age); // Parameter

int main(){
    int age{24};

    std::cout << "age - before : " << age << " &age : " << &age << std::endl;

    say_age(age); // Argument

    std::cout << "age - after : " << age << " &age : " << &age << std::endl;

    return 0;
}

void say_age(int age){
    ++age; // Change the copy. Outside 'age' not affected
    std::cout << "Hello! You are " << age << " years old." << " &age : " <<  &age << std::endl; 
}