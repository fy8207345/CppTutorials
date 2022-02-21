#include <iostream>
#include <iomanip>


int main(int argc, char** argv)
{
    float number1 {1.12345678901234567890f};
    double number2{1.12345678901234567890};
    long double number3{1.12345678901234567890L};

    double number5{192400023};
    double number6{1.9240023e8};
    double number7{1.924e8};

    std::cout << std::setprecision(30);

    std::cout << sizeof(float) << std::endl;
    std::cout << number1 << std::endl;

    std::cout << sizeof(double) << std::endl;
    std::cout << number2 << std::endl;

    std::cout << sizeof(long double) << std::endl;
    std::cout << number3 << std::endl;

    float f {192400023.0};

    std::cout << f << std::endl;
    bool red = 1;
    // bool blue{2}; //编译错误
    
    std::cout << std::boolalpha;
    std::cout << red << std::endl;

    std::cout << sizeof(bool) << std::endl;
    return 0;
}