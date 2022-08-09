#include <iostream>

int main()
{
    // std::strlen : Find the length of a string
    // real arrays and those decayed into pointers
    /* const char message1[] {"The sky is blue."};

    // Array decays into pointer when we use const char*
    const char *message2 {"The sky is blue."};

    std::cout << "message1: " << message1 << std::endl;
    std::cout << "message2: " << message2 << std::endl;
    std::cout << "*message2: " << *message2 << std::endl;

    // strlen ignores the null character '\0'
    std::cout << "strlen(message1) : " << std::strlen(message1) << std::endl;

    // sizeof() includes the null character '\0'
    std::cout << "sizeof(message1) : " << sizeof(message1) << std::endl;

    // std::strlen still works with decayed arrays
    std::cout << "strlen(message2) : " << std::strlen(message2) << std::endl;

    // Only Prints the size of the pointer, not the character array it points to
    std::cout << "sizeof(message2) : " << sizeof(message2) << std::endl; */

    // std::strcmp - signature : int strcmp(const char *lhs, const char *rhs);
    // Returns negative value if lhs appears before rhs in lexicographical order,
    // Zero if lhs and rhs are equal.
    // and a Positive value if lhs appears after rhs in lexicographical order.
    /* std::cout << std::endl;
    std::cout << "strd::strcmp : " << std::endl;
    const char *string_data1{"Alabama"};
    const char *string_data2{"Blabama"};

    char string_data3[] = {"Alabama"};
    char string_data4[] = {"Blabama"};

    // Print out the comparison
    std::cout << "std::strcmp (" << string_data1 << ", " << string_data2 << ") : "
        << std::strcmp(string_data1, string_data2) << std::endl;

    std::cout << "std::strcmp (" << string_data3 << ", " << string_data4 << ") : "
              << std::strcmp(string_data3, string_data4) << std::endl;

    string_data1 = "Alabama";
    string_data2 = "Alabamb";

    // string_data3 = "Alabama";
    // string_data4 = "Alabamb";

    std::cout << "std::strcmp (" << string_data1 << ", " << string_data2 << ") : "
              << std::strcmp(string_data1, string_data2) << std::endl; */

    // std::strncmp - int strncmp(const char *lhs, const char *rhs, std::size_t count)
    // Compares n characters from the left in the strings
    // Returns : Negative value if lhs appears before rhs in lxicographical order.
    // Zero if lhs and rhs are equal, or if the count is zero.
    // Positive value if lhs appears after rhs in lexicographical order.

    // Print out the comparison
   /*  size_t n{3};
    const char *string_data1{"Alabama"};
    const char *string_data2{"Blabama"};

    std::cout << std::endl;
    std::cout << "std::strncmp : " << std::endl;
    std::cout << "std::strcmp(" << string_data1 << ", " << string_data2 << ", " << n << ") : "
              << std::strncmp(string_data1, string_data2, n) << std::endl;

    string_data1 = "aaaia";
    string_data2 = "aaance";

    std::cout << "std::strcmp(" << string_data1 << ", " << string_data2 << ", " << n << ") : "
              << std::strncmp(string_data1, string_data2, n) << std::endl;

    n = 5;
    std::cout << "std::strcmp(" << string_data1 << ", " << string_data2 << ", " << n << ") : "
              << std::strncmp(string_data1, string_data2, n) << std::endl;

    string_data1 = "aaaoa";
    string_data2 = "aaance";


    std::cout << "std::strcmp(" << string_data1 << ", " << string_data2 << ", " << n << ") : "
              << std::strncmp(string_data1, string_data2, n) << std::endl; */

    // Find the first occurance of a character
    // Docs : https://en.cppreference.com/w/cpp/string/byte/strchr
    // we use std::strchr to finf all the characters one by one
    /* std::cout << std::endl;
    std::cout << "std::strchr : " << std::endl;

    // Can make this a const pointer to prevent users from making it point somewhere else
    const char * const str {"Try not. Do, or do not. There is no try."};
    
    char target = 'T';
    const char *result = str;
    size_t iterations {};

    while ((result = std::strchr(result, target)) != nullptr)
    {
        std::cout << "Found '" << target
            << "' starting at '" << result << "'" << std::endl;

        // Increment result, otherwise we'll find the target at the same location
        result++; // Using pointer arithmetic
        iterations++;
    }
    std::cout << "Found " << iterations << " occurances of " << target << std::endl; */


    // Find the last occurance of a character
    // docs: https://en.cppreference.com/w/cpp/string/byte/strchr

    char input[] = "/home/user/hello.cpp";
    char *output = std::strrchr(input, '/');
    if (output)
    {
        std::cout << output+1 << std::endl; // +1 because we want to start printing past
                                            // the character found by std::strrchr.
    }
    

    return 0;
}