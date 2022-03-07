#pragma once
#include "person.h"

class Engineer: private Person{

    protected:
        using Person::age; //让下级子类可以访问age属性
};