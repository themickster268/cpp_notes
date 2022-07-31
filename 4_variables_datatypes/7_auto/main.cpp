#include <iostream>

int main(){

    auto var1{12};
    auto var2{13.0};
    auto var3{14.0f};
    auto var4{15.0l};
    auto var5{'e'};

    // int modifier suffixes
    auto var6{123u}; //unsigned
    auto var7{123ul}; // unsigned long
    auto var8{123ll}; // long long

    std::cout << "var1 occupies: " << sizeof(var1) << " Bytes" << std::endl;
    std::cout << "var2 occupies: " << sizeof(var2) << " Bytes" << std::endl;
    std::cout << "var3 occupies: " << sizeof(var3) << " Bytes" << std::endl;
    std::cout << "var4 occupies: " << sizeof(var4) << " Bytes" << std::endl;
    std::cout << "var5 occupies: " << sizeof(var5) << " Bytes" << std::endl;
    std::cout << "var6 occupies: " << sizeof(var6) << " Bytes" << std::endl;
    std::cout << "var7 occupies: " << sizeof(var7) << " Bytes" << std::endl;
    std::cout << "var8 occupies: " << sizeof(var8) << " Bytes" << std::endl;
}