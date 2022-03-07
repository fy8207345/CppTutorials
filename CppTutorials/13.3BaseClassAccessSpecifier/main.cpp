#include <iostream>
#include "player.h"
#include <string>

//public继承不缩小可见性
//protected继承，父类的属性可见性最高为protected
//private继承，父类的属性可见性最高为private
int main(int argc, char** argv)
{
    Player p("call on duty", "John Snow");
    std::cout << p << std::endl;
    return 0;
}
