#pragma once

#include "engineer.h"

class CivilEngineer: public Engineer{
    friend std::ostream& operator<<(std::ostream& out, const CivilEngineer& engineer);
    public:
        CivilEngineer();
        ~CivilEngineer();
};