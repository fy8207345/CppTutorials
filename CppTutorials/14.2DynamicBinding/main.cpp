#include <iostream>
#include <string>
#include "shape.h"
#include "circle.h"
#include "oval.h"

void func(){
    Shape* shape = new Oval(2.0, 3.0, "Oval");
    shape->draw();

    delete shape;
    shape = new Circle(5.5, "Circle");
    shape->draw();
    delete shape;
}

int main(int argc, char** argv)
{
    func();

    return 0;
}
