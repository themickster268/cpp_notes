#include <iostream>
#include "compare.h" // Preprocessor
#include "operations.h"

int main() {

    int maximum = max(134, 56);
    int minimum{min(134, 56)};

    std::cout << "Max : " << maximum << std::endl;
    std::cout << "Min : " << minimum << std::endl;

    int x{4}, y{5};

    int result{incr_mult(x, y)};

    std::cout << "Result : " << result << std::endl;

    return 0;
}

