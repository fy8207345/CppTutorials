#pragma once
#include <iostream>
#include <string_view>

class Person
{
    friend std::ostream& operator<<(std::ostream& out, const Person& person);
protected:
    std::string name{};
public:
    Person();
    Person(std::string_view name, int age, std::string_view address); 
    Person(const Person& source);
    ~Person();
    std::string getName() const;
    int getAge() const;
    std::string getAddress() const;
    public:
        int age;
    private:
        std::string address;
};
