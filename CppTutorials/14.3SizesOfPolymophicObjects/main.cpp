#include <iostream>
#include <string>
#include "shape.h"
#include "circle.h"
#include "oval.h"

void func(){

    std::cout << sizeof(Shape) << std::endl;
    std::cout << sizeof(Oval) << std::endl;
    std::cout << sizeof(Circle) << std::endl;
}

int main(int argc, char** argv)
{
    func();

    return 0;
}
