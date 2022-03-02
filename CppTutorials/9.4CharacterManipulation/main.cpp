#include <iostream>
#include <cctype>

int main(int argc, char** argv)
{

    char c = 'A';
    std::cout << std::isalnum(c) << std::endl;
    std::cout << std::isalpha(c) << std::endl;
    std::cout << std::islower(c) << std::endl;
    std::cout << std::isupper(c) << std::endl;
    std::cout << std::isdigit(c) << std::endl;
    std::cout << std::iscntrl(c) << std::endl;
    std::cout << std::isgraph(c) << std::endl;
    std::cout << std::isspace(c) << std::endl;
    std::cout << std::isblank(c) << std::endl;
    std::cout << std::isprint(c) << std::endl;
    std::cout << std::ispunct(c) << std::endl;
    std::cout << std::tolower(c) << std::endl;
    std::cout << std::toupper(c) << std::endl;

    return 0;
}