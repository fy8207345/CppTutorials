#include <iostream>


int main(int argc, char** argv)
{
    int v {2};
    switch (v)
    {
    case 1:
        std::cout << "value 1" << std::endl;
        std::cout << "value 1" << std::endl;
        break;
    
    default:
        std::cout << "value default" << std::endl;
        std::cout << "value default" << std::endl;
        break;
    }
    return 0;
}