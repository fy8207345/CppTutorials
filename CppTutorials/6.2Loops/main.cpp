#include <iostream>


int main(int argc, char** argv)
{
    const size_t COUNT {10};
    //for
    for(size_t i {}; i < COUNT; i++){
        std::cout << "loop: " << i << std::endl;
    }

    //while
    size_t i {0};
    while (i < COUNT)
    {
        std::cout << "while : " << i << std::endl;
        i++;
    }
    
    //do while
    i = 0;
    do{
        std::cout << "do while: " << i << std::endl;
        i++;
    }while(i < 0);

    return 0;
}