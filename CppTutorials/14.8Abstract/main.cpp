#include <iostream>
#include <string>
#include "shape.h"
#include "circle.h"
#include "oval.h"

void func(){

    Shape* s = new Circle(2.0, "Circle");
    Circle* c = dynamic_cast<Circle*>(s);
    
    if(c){
        // do something with circle.
        delete c;
    }else{
        std::cout << "could not transform shape to circle";
    }
    
}

int main(int argc, char** argv)
{
    func();

    return 0;
}
