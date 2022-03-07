#include <iostream>
#include <string>
#include "shape.h"
#include "circle.h"
#include "oval.h"

void func(){

    Circle circle1(7.2, "circle1");
    Circle circle2(8.2, "circle2");
    Circle circle3(9.2, "circle3");

    Oval oval1(3,4, "oval1");
    Oval oval2(3,4, "oval2");
    Oval oval3(3,4, "oval3");

    //无法多态
    Shape shapes[] {circle1, circle2, circle3, oval1, oval2, oval3};

    std::cout << sizeof(shapes) << std::endl;
    std::cout << sizeof(Shape) << std::endl;
    for(Shape& s : shapes){
        s.draw(); 
    }

    //可以使用多态
    Shape* pointers[] {&circle1, &circle2, &circle3, &oval1, &oval2, &oval3};
    for(Shape* p : pointers){
        p->draw();
    }
}

int main(int argc, char** argv)
{
    func();

    return 0;
}
