#pragma once
#include "person.h"

class Engineer: public Person{
    friend std::ostream& operator<<(std::ostream& out, const Engineer& engineer);
    public:
        Engineer();
        Engineer(std::string_view name, int age, std::string_view address, int contract_cout);
        ~Engineer();
        Engineer(const Engineer& engineer);
    private:
        int contract_cout{};
};