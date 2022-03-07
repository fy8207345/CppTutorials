#pragma once
#include "shape.h"

class Oval: public Shape{
    public:
        Oval() = default;
        Oval(double x_radius, double y_radius, std::string_view desc): Shape(desc), x_radius(x_radius), y_radius(y_radius){

        }
        ~Oval() = default;

        void draw() const {
            std::cout << "Oval:called: " << desc << ", xradius: " << x_radius << std::endl;
        }

    private:
        double x_radius{0.0};
        double y_radius{0.0};
};