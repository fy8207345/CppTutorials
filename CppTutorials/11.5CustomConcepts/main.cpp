#include <iostream>

template <typename T>
concept MyIntegral = std::is_integral_v<T>;

template <typename T>
concept MyMultipliable = requires(T a, T b){
    a * b; // just makes sure the syntax is valid
};

template <typename T>
concept Incrementable = requires(T a){
    a+=1;
    ++a;
    a++;
};

//语法1
template <typename T>
requires MyIntegral<T>
T add(T a, T b){
    return a + b;
}

//语法2
template <MyIntegral T>
T add2(T a, T b){
    return a + b;
}

auto add3(MyIntegral auto a, MyIntegral auto b){
    return a + b;
}

int main(int argc, char** argv)
{
    std::cout << "result: " << add(1,2) << std::endl;
    std::cout << "result: " << add2(1,2) << std::endl;
    std::cout << "result: " << add3(1,2) << std::endl;
    return 0;
}
