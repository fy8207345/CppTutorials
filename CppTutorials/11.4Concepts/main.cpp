#include <iostream>
#include <concepts>

//语法1
template <typename T>
requires std::integral<T>
T add(T a, T b){
    return a + b;
}

//语法2
template <typename T>
T add(T a, T b) requires std::integral<T>{
    return a + b;
}

//语法3
template <std::integral T>
T add2(T a, T b){
    return a + b;
}

auto add(std::integral auto a, std::integral auto b){
    return a + b;
}

int main(int argc, char** argv)
{
    std::cout << "result: " << add(1,2) << std::endl;
    // std::cout << "result: " << add(2.1,3.1) << std::endl;
    return 0;
}
