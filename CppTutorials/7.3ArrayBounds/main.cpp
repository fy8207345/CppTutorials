#include <iostream>

int main(int argc, char** argv)
{
    int numbers[] {1,2,3,4,5,6,7,8,9,0};
    std::cout << "numbers[12]: " << numbers[12] << std::endl;
    numbers[12] = 100;
    std::cout << "numbers[12]: " << numbers[12] << std::endl;
    return 0;
}