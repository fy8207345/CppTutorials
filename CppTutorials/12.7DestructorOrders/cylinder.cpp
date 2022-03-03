#include "cylinder.h"

Cylinder::Cylinder(double radius, double height){
    this->radius = radius;
    this->height = height;
}

double Cylinder::volume(){
    return PI * radius * radius * height;
}