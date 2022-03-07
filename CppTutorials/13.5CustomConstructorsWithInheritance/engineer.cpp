#include "engineer.h"

Engineer::Engineer(){
    std::cout << "Engineer constructor called:" << this << std::endl;
}

Engineer::Engineer(std::string_view name, int age, std::string_view address, int contract_cout):
    Person(name, age, address), contract_cout(contract_cout){
    std::cout << "Engineer constructor called with args:" << this << std::endl;
}

Engineer::~Engineer(){
    std::cout << "Engineer destructor called:" << this << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Engineer& engineer){
    out << "Engineer [" << engineer.name << "]";
    return out;
}