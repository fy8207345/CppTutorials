#include <iostream>

void func(){
    std::cout << "func" << std::endl;

    return ;
}

int max(int a, int b){
    if(a >= b){
        return a;
    }
    return b;
}

int main(int argc, char** argv)
{
    func();

    std::cout << "max: " << max(10,20) << std::endl;
    return 0;
}