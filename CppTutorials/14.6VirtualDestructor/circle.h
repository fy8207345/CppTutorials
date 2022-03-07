#pragma once
#include "shape.h"

class Circle: public Shape{
    public:
        Circle() = default;
        Circle(double radius, std::string_view desc): Shape(desc), radius(radius){

        }
        virtual ~Circle() override{
            std::cout << "Circle destructor called!!" << std::endl;
        }

        virtual 
        void draw() const override {
            std::cout << "Circle:called: " << desc << ", radius: " << radius << std::endl;
        }
    private:
        double radius{0.0};
};