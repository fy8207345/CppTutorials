#include "engineer.h"

Engineer::Engineer(){
    std::cout << "Engineer constructor called:" << this << std::endl;
}

Engineer::~Engineer(){
    std::cout << "Engineer destructor called:" << this << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Engineer& engineer){
    out << "Person [" << engineer.name << "]";
    return out;
}