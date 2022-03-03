#include <iostream>

const double PI {3.1415926535897932384626433832795};

class Cylinder{
    private:
        double radius {1.0};
        double height {1.0};
    public:
        Cylinder() = default;
        
        Cylinder(double radius, double height){
            this->radius = radius;
            this->height = height;
        }

        double volume(){
            return PI * radius * radius * height;
        }

        double getRadius(){
            return radius;
        }
};

int main(int argc, char** argv)
{
    Cylinder cylinder(2.0, 3.0);
    std::cout << cylinder.volume() << std::endl;
    return 0;
}
