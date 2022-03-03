#include <iostream>
#include "constants.h"
#include "cylinder.h"

int main(int argc, char** argv)
{
    //stack object
    Cylinder c(10, 2);
    std::cout << "volume : " << c.volume() << std::endl;

    //heap object
    Cylinder* c2 = new Cylinder(11, 20);
    std::cout << "volume c2 : " << (*c2).volume() << std::endl;
    std::cout << "volume c2 : " << c2->volume() << std::endl;

    delete c2;
    c2 = nullptr;
    return 0;
}
