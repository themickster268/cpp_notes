#include <iostream>
#include <string>

int main(){
    std::string full_name; // Empty string
    std::string planet {"Earth. Where the sky is blue"};// Initialise with string literal
    std::string preferred_planet {planet}; // Initialise woth other existing string
    std::string message {"Hello there", 5}; // Initialise with part of a string literal.
                                            // Upto but not including char at index 5
                                            // Contains 'Hello'

    std::string weird_message(4, 'e'); // Initialise with multiple copies of a char
                                       // Contains 'eee'
    std::string greeting{"Hello World"};
    std::string saying_hello {greeting, 6, 5}; // Initialise with part of an existing std::string
                                               // Starting at index 6, taking5 characters
                                              // Will contain 'World'

    std::cout << "full_name: " << full_name << std::endl;
    std::cout << "planet : " << planet << std::endl;
    std::cout << "preferred_planet : " << preferred_planet << std::endl;
    std::cout << "message : " << message << std::endl;
    std::cout << "weird_message : " << weird_message << std::endl;
    std::cout << "greeting : " << greeting << std::endl;
    std::cout << "saying_hello : " << saying_hello << std::endl;

    // We can Change an std::string at runtime
    planet = "Earth. Where the sky is blue. Earth. Where the sky is blue. Earth. Where the sky is blue.";
    std::cout << "planet : " << planet << std::endl;


    // Using raw char array containing cstring
    const char *planet1 { "Earth. Where the sky is blue." };
    // Assigning planet1 so that it points to a different char array
    // rather than modifying the original array it was declared with.
    // Memory is wasted as a result.
    planet1 = "Earth. Where the sky is blue. Earth. Where the sky is blue. Earth. Where the sky is blue";
    std::cout << "planet1 : " << planet1 << std::endl;

    return 0;
}