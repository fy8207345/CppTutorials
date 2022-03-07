#pragma once
#include <iostream>

class Parent{
    public:
        Parent() = default;
        Parent(int member): member(member){

        }
        ~Parent() = default;

        void print_member() const{
            std::cout << "value of parent is : " << member << std::endl;
        }

        int member{};
};