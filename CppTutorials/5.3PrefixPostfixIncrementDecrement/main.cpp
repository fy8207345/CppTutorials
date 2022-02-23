#include <iostream>

int main(int argc, char** argv)
{
    int value {5};
    value++;
    std::cout << "value: " << value << std::endl;

    value = 5;
    std::cout << "value: " << value++ << std::endl;

    value = 5;
    std::cout << "value: " << ++value << std::endl;

    value = 5;
    std::cout << "value: " << --value << std::endl;

    value = 5;
    std::cout << "value: " << value-- << std::endl;

    value = {5};
    value += 5;
    std::cout << "value: " << value << std::endl;

    value = {5};
    value -= 5;
    std::cout << "value: " << value << std::endl;

    std::cout << std::boolalpha;
    return 0;
}