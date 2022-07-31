#include <iostream>

int main(){
    bool a {true};
    bool b {false};
    bool c {true};

    std::cout << std::boolalpha;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;

    //AND Operator
    std::cout << std::endl;
    std::cout << "Basic AND operations" << std::endl;

    std::cout << "A && B: " << (a && b) << std::endl; // False
    std::cout << "A && C: " << (a && c) << std::endl; // True
    std::cout << "A && B && C: " << (a && b && c) << std::endl; // False

    // OR Operator
    std::cout << std::endl;
    std::cout << "Basic OR operations" << std::endl;

    std::cout << "A || B: " << (a || b) << std::endl;           // True
    std::cout << "A || C: " << (a || c) << std::endl;           // True
    std::cout << "A || B || C: " << (a || b || c) << std::endl; // True

    // NOT
    std::cout << std::endl;
    std::cout << "Basic NOT operations" << std::endl;

    std::cout << "!a : " << (!a) << std::endl; // False
    std::cout << "!b : " << (!b) << std::endl; // True
    std::cout << "!c : " << (!c) << std::endl; // False

    // Combining Logical Operators
    std::cout << std::endl;
    std::cout << "Combining Logical operators" << std::endl;
    std::cout << "!(a && b) || c: " << (!(a && b) || c) << std::endl;

    // Combining logical and relational operators
    int d {45};
    int e {20};
    int f {11};

    std::cout << std::endl;
    std::cout << "Relational and Logical operations on integers" << std::endl;
    std::cout << "d: " << d << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "f: " << f << std::endl;

    std::cout << std::endl;

    std::cout << "(d > e) && (d > f): " << ((d > e) && (d > f)) << std::endl; // true
    std::cout << "(d == e) || (e <= f): " << ((d == e) || (e <= f)) << std::endl; // false
    std::cout << "(d < e) || (d > f): " << ((d < e) || (d > f)) << std::endl; // true
    std::cout << "(f > e) || (d < f): " << ((f > e) || (d < f)) << std::endl; // false
    std::cout << "(d > f) && (f <= d): " << ((d > f) && (f <= d)) << std::endl; // true
    std::cout << "(d > e) && (d <= f): " << ((d > e) && (d <= f)) << std::endl; // false
    std::cout << "(!a) && (d == e): " << ((!a) && (d == e)) << std::endl; // false

    return 0;
}