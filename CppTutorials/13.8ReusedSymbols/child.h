#pragma once

#include "parent.h"

class Child: public Parent{
    public:
        Child() = default;
        Child(int member): member(member){

        }
        ~Child() = default;

        void print_member() const{
            std::cout << "value of child is : " << member << std::endl;
            std::cout << "value of parent is : " << Parent::member << std::endl;
        }

        int member{};
};