#include <iostream>


int main(int argc, char** argv)
{
    // 1 byte
    char value = 65; // 'A'
    std::cout << value << std::endl;
    std::cout << static_cast<int>(value) << std::endl;   
    return 0;
}