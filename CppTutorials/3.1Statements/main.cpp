#include <iostream>

int addNumbers(int first, int second)
{
    return first + second;
}

int main(int argc, char** argv)
{
    int firstNumber = 12;
    int secondNumber = 9;

    int first = {3};
    int second = {5};

    int sum1 = addNumbers(first, second);
    std::cout << "the sum of the numbers is : " << sum1 << std::endl;

    int sum = addNumbers(firstNumber, secondNumber);
    std::cout << "the sum of the two numbers is : " << sum << std::endl;
    return 0;
}