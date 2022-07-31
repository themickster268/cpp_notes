#include <iostream>

int main(){

    // BRACED INITIALISATION
    // Variable may contain random grabage value . WARNING
   /*  int elephant_count;

    int lion_count {}; // Initialises to zero

    int dog_count {10}; // Initialises to 10

    int cat_count {15}; // Initialises to 15

    // Can use expression as initialiser
    int domesticated_animals { dog_count + cat_count };

   // int new_number { doesnt_exist };

    // int narrowing_down {2.9};

    std::cout << "Elephant count: " << elephant_count << std::endl;
    std::cout << "Lion count: " << lion_count << std::endl;
    std::cout << "Dog count: " << dog_count << std::endl;
    std::cout << "Cat count: " << cat_count << std::endl;
    std::cout << "Domesticated animal count: " << domesticated_animals << std::endl; */

    // FUNCTIONAL INITIALISATION
    /* int apple_count(5);
    int orange_count(10);

    int fruit_count { apple_count + orange_count };

    // int bad_initialisation { doesnt_exist1 + doesnt_exist2 };

    // Information lost. Less safe than braced initialisers - .9 gets chopped off
    int narrowing_conversion_functional (2.9);

    std::cout << "Apple count: " << apple_count << std::endl;
    std::cout << "Orange count: " << orange_count << std::endl;
    std::cout << "Fruit count: " << fruit_count << std::endl;

    std::cout << "Narrowed converstion(2.9): " << narrowing_conversion_functional << std::endl; */

    // ASSIGNMENT INITIALISATION

    int bike_count = 2;
    int truck_count = 7;

    int vehicle_count = bike_count + truck_count;

    int narrowing_coversion_assignment = 2.9; // .9 gets chopped off

    std::cout << "Bike count: " << bike_count << std::endl;
    std::cout << "Truck count: " << truck_count << std::endl;
    std::cout << "Vehicle count: " << vehicle_count << std::endl;
    std::cout << "Narrowing conversion assignment(2.9): " << narrowing_coversion_assignment << std::endl;

    // Check the size with sizeof - returns number of bytes a variable/datatype occupies
    std::cout << "sizeof int: " << sizeof(int) << std::endl;
    std::cout << "sizeof truck_count: " << sizeof(truck_count) << std::endl;

    return 0;
}