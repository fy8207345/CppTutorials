#include "person.h"

Person::Person(){
    std::cout << "Person Constructed!" << this << std::endl;
}
Person::Person(std::string_view name): name(name){
    std::cout << "Person Constructed!" << this << this->getName() << std::endl;
}
Person::~Person(){
    std::cout << "Person Destructed!" << this << std::endl;    
}

std::string Person::getName() const{
    return name;
}

std::ostream& operator<<(std::ostream& out, const Person& person){
    out << "Person [" << person.name << "]";
    return out;
}