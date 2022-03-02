#include <iostream>

int main(int argc, char** argv)
{
    //capture everything by value
    int a {42};
    auto func = [=] () {
        std::cout << "inner value: " << a << ". adress:"  << &a << std::endl;
    };
    for(size_t i{}; i < 5; i++){
        std::cout << "outer value: " << a << ". adress:"  << &a << std::endl;
        func();
        a++;
    }

    std::cout << "--------------------" << std::endl;
    
    //capture everything by reference
    int b {42};
    auto func2 = [&] () {
        std::cout << "inner value: " << b << ". adress:" << &b << std::endl;
    };
    for(size_t i{}; i < 5; i++){
        std::cout << "outer value: " << b << ". adress:"   << &b << std::endl;
        func2();
        b++;
    }

    return 0;
}
