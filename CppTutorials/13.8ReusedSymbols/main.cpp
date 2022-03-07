#include <iostream>
#include <string>
#include "parent.h"
#include "child.h"

void func(){
    
    Parent p1{5};
    p1.print_member();
    
    Child c{10};
    c.print_member();
    c.Parent::print_member();
}

int main(int argc, char** argv)
{
    func();

    return 0;
}
