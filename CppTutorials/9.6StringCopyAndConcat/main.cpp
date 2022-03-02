#include <iostream>
#include <cstring>

int main(int argc, char** argv)
{
    char dest[50] = "Hello ";
    char src[50] = "World!";

    std::strcat(dest, src);
    std::strcat(dest, " Goodbye World!");
    // std::cout << "dest: " << dest << std::endl;

    long long l = 1000000000;
    std::cout << l / 2 * (l + 1) << std::endl;
    return 0;
}