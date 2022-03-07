#include "civilengineer.h"

CivilEngineer::CivilEngineer(){
    std::cout << "CivilEngineer constructor called:" << this << std::endl;
}

CivilEngineer::CivilEngineer(std::string_view name, int age, std::string_view address, int contract_cout, std::string_view speciality):
    Engineer(name, age, address, contract_cout), speciality(speciality)
{
    std::cout << "CivilEngineer constructor called with args:" << this << std::endl;
}

CivilEngineer::~CivilEngineer(){
    std::cout << "CivilEngineer destructor called:" << this << std::endl;
}

std::ostream& operator<<(std::ostream& out, const CivilEngineer& engineer){
    out << "CivilEngineer [" << engineer.name << "]";
    return out;
}