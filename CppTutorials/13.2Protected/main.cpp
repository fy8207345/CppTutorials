#include <iostream>
#include "player.h"
#include <string>

int main(int argc, char** argv)
{
    Player p("call on duty", "John Snow");
    std::cout << p << std::endl;
    return 0;
}
