#include <iostream>

int main(int argc, char** argv)
{
    char *p_char {nullptr};
    char char_var {'A'};

    p_char = &char_var;

    std::cout << "the value stored in p_char is : " << *p_char << std::endl;

    char char1 {'C'};
    p_char = & char1;
    std::cout << "the value stored in p_char is : " << *p_char << std::endl;

    char *p_message {"Hello World!"};
    std::cout << "the value stored in p_message is : " << *p_message << std::endl;
    return 0;
}