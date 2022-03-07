#pragma once
#include "person.h"

//protected继承后，父级的所有属性都protected及以下：
// public变protected
// protected不变
// private不变
class Nurse: protected Person{
    public:
        Nurse(){
            age = 1;
        }
};