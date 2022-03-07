#pragma once

#include <string>
#include <iostream>
#include <string_view>

class Shape{
    public:
        Shape() = default;
        Shape(const std::string_view desc): desc(desc){

        }
        virtual ~Shape(){
            std::cout << "Shape destructor called!!" << std::endl;
        }

        virtual void draw() const{
            std::cout << "shape:called: " << desc << std::endl;
        }

        //pure virtual functions
        virtual double surface() const = 0;

    protected:
        std::string desc{""};
};