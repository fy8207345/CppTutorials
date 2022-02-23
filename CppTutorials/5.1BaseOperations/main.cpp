#include <iostream>

int main(int argc, char** argv)
{
    //addition +
    int number1 {2};
    int number2 {7};
    int result = number1 + number2;
    std::cout << "result: " << result << std::endl;

    //subtraction -
    result = number2 - number1;
    std::cout << "result: " << result << std::endl;

    //multiplication *
    result = number2 * number1;
    std::cout << "result: " << result << std::endl;

    //Integer division /
    result = number2 / number1;
    std::cout << "result: " << result << std::endl;

    //Modulus % 浮点数不能做模数
    result = number2 % number1;
    std::cout << "result: " << result << std::endl;
    return 0;
}