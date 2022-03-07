#include <iostream>
#include <string>
#include "civilengineer.h"

void func(){
    

    Engineer e("engineer", 23, "adress2");
    std::cout << e << std::endl;
    std::cout << "-------------" << std::endl;

    Engineer e2(e);
    std::cout << e2 << std::endl;
    std::cout << "-------------" << std::endl;
}

int main(int argc, char** argv)
{
    func();

    return 0;
}
