#pragma once
#include "shape.h"

class Circle: public Shape{
    public:
        Circle() = default;
        Circle(double radius, std::string_view desc): Shape(desc), radius(radius){

        }
        ~Circle() = default;

        void draw() const{
            std::cout << "Circle:called: " << desc << ", radius: " << radius << std::endl;
        }
    private:
        double radius{0.0};
};