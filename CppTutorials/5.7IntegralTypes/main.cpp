#include <iostream>

// short ,char 不能做数学运算
int main(int argc, char** argv)
{
    short int v1{10};
    short int v2{20};

    char c3{40};
    char c4{50};

    std::cout << "sizeof v1 : " << sizeof(v1) << std::endl;
    std::cout << "sizeof v2 : " << sizeof(v2) << std::endl;
    std::cout << "sizeof c3 : " << sizeof(c3) << std::endl;
    std::cout << "sizeof c4 : " << sizeof(c4) << std::endl;
    
    auto result1 = v1 + v2;
    auto result2 = c3 + c3;

    std::cout << "sizeof result1 : " << sizeof(result1) << std::endl;
    std::cout << "sizeof result2 : " << sizeof(result2) << std::endl;
    return 0;
}