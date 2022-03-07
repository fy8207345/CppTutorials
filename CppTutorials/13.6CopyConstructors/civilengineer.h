#pragma once

#include "engineer.h"

class CivilEngineer: public Engineer{
    friend std::ostream& operator<<(std::ostream& out, const CivilEngineer& engineer);
    public:
        CivilEngineer();
        CivilEngineer(std::string_view name, int age, std::string_view address, int contract_cout, std::string_view speciality);
        ~CivilEngineer();
        CivilEngineer(const CivilEngineer& source);
    private:
        std::string speciality;
};