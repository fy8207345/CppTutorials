#pragma once
#include <iostream>
#include <string_view>

class Person
{
    friend std::ostream& operator<<(std::ostream& out, const Person& person);
    public:
        int age{};
    protected:
        std::string name{};
    public:
        Person();
        Person(std::string_view name);
        ~Person();
        std::string getName() const;
};
