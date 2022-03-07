#include "civilengineer.h"

CivilEngineer::CivilEngineer(){
    std::cout << "CivilEngineer constructor called:" << this << std::endl;
}

CivilEngineer::~CivilEngineer(){
    std::cout << "CivilEngineer destructor called:" << this << std::endl;
}

std::ostream& operator<<(std::ostream& out, const CivilEngineer& engineer){
    out << "Person [" << engineer.name << "]";
    return out;
}