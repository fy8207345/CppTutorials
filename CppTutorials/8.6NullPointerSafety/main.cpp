#include <iostream>

int main(int argc, char** argv)
{

    int *p {};

    if(p){
        std::cout << "not null pointer" << std::endl;
    }else{
        std::cout << "null pointer" << std::endl;
    }

    if(p){
        delete p;
        p = nullptr;
    }
    return 0;
}