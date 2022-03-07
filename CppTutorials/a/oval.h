#pragma once
#include "shape.h"

class Oval: public Shape{
    public:
        Oval() = default;
        Oval(double x_radius, double y_radius, std::string_view desc): Shape(desc), x_radius(x_radius), y_radius(y_radius){

        }
        virtual ~Oval() = default;

        virtual void draw() const override {
            std::cout << "Oval:called: " << desc << ", xradius: " << x_radius << std::endl;
        }

        virtual double surface() const {
            return 0.0;
        }

    private:
        double x_radius{0.0};
        double y_radius{0.0};
};