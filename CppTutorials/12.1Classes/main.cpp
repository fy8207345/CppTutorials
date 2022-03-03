#include <iostream>

const double PI {3.1415926535897932384626433832795};

class Cylinder{
    public:
        double radius {1.0};
        double height {1.0};
        double volume(){
            return PI * radius * radius * height;
        }
};

int main(int argc, char** argv)
{
    Cylinder cylinder;
    cylinder.height = 2;
    std::cout << cylinder.volume() << std::endl;
    std::cout << sizeof(cylinder) << std::endl;
    std::cout << sizeof(double) << std::endl;
    return 0;
}
