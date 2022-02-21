#include <iostream>


int main(int argc, char** argv)
{
    int number1 = 15; //十进制
    int number2 = 017; //八进制
    int number3 = 0xF; //十六进制
    int number4 = 0b00001111; //二进制

    std::cout << number1 << std::endl;
    std::cout << number2 << std::endl;
    std::cout << number3 << std::endl;
    std::cout << number4 << std::endl;
    return 0;
}