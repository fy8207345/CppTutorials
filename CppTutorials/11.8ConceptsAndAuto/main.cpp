#include <iostream>
#include <concepts>

std::integral auto add(std::integral auto a, std::integral auto b){
    return a + b;
}

int main(int argc, char** argv)
{
    // std::floating_point auto a = add(10, 8); //编译错误
    std::integral auto a = add(10, 8);
    // std::floating_point auto x = 7; //编译错误
    std::floating_point auto x = 7.7;
    std::cout << a << std::endl;
    std::cout << x << std::endl;
    return 0;
}
