#include "person.h"

Person::Person(){
    std::cout << "Person Constructed!" << this << std::endl;
}
Person::Person(std::string_view name, int age, std::string_view address): name(name), age(age), address(address){
    std::cout << "Person Constructed called  with args! " << this << std::endl;
}
Person::~Person(){
    std::cout << "Person Destructed!" << this << std::endl;    
}

Person::Person(const Person& source): name(source.name), age(source.age), address(source.address)
{

}

int Person::getAge() const{
    return age;
}

std::string Person::getAddress() const{
    return address;
}

std::string Person::getName() const{
    return name;
}

std::ostream& operator<<(std::ostream& out, const Person& person){
    out << "Person [name: " << person.name << ", age: " << person.getAge() << ", address: " << person.getAddress() << "]";
    return out;
}