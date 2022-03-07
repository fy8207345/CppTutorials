#pragma once
#include "person.h"

class Engineer: public Person{
    friend std::ostream& operator<<(std::ostream& out, const Engineer& engineer);
    public:
        Engineer();
        ~Engineer();
};