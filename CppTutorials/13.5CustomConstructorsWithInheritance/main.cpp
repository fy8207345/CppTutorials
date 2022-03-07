#include <iostream>
#include <string>
#include "civilengineer.h"

void func(){
    Person p("name", 12, "address");
    std::cout << p << std::endl;
    std::cout << "-------------" << std::endl;

    Engineer e("engineer", 23, "adress2", 2);
    std::cout << e << std::endl;
    std::cout << "-------------" << std::endl;

    CivilEngineer c("civil", 34, "addd", 5, "special");
    std::cout << c << std::endl;
    std::cout << "-------------" << std::endl;
}

int main(int argc, char** argv)
{
    func();

    return 0;
}
