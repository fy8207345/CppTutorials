#include <iostream>
#include <string>
#include "shape.h"
#include "circle.h"
#include "oval.h"

void func(){
    Shape shape("shape1");
    shape.draw();

    Oval oval(2.0, 3.0, "Oval");
    oval.draw();

    Circle circle(3.3, "Circle");
    circle.draw();

    //pointer binding
    Shape* pshape = &shape;
    pshape->draw();
    pshape = &oval;
    pshape->draw();
    pshape = &circle;
    pshape->draw();  

    //reference binding
    Shape& r = shape;
    r.draw();
    r = oval;
    r.draw();
    r = circle;
    r.draw();  
}

int main(int argc, char** argv)
{
    func();

    return 0;
}
