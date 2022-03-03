#include <iostream>
#include "constants.h"
#include "cylinder.h"

int main(int argc, char** argv)
{
    Cylinder cylinder(2.0, 3.0);
    std::cout << cylinder.volume() << std::endl;
    return 0;
}
