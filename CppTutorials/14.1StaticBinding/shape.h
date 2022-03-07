#pragma once

#include <string>
#include <iostream>
#include <string_view>

class Shape{
    public:
        Shape() = default;
        Shape(const std::string_view desc): desc(desc){

        }
        ~Shape() = default;

        void draw() const{
            std::cout << "shape:called: " << desc << std::endl;
        }

    protected:
        std::string desc{""};
};