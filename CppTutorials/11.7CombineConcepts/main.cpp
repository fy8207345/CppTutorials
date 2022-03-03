#include <iostream>

template <typename T>
concept TinyType = requires(T t){
    sizeof(T) <= 4;
    requires sizeof(T) <= 4;
};

template <typename T>
T func(T t) requires std::integral<T> && TinyType<T> {
    std::cout << "value: " << t << std::endl;
    return 2*t;
}

template <typename T>
requires std::integral<T> && TinyType<T>
T add(T a, T b){
    return a + b;
}
int main(int argc, char** argv)
{
    long long int l = 2;
    long long int l2 = 2;
    int a = 2;
    int b = 4;
    //编译错误
    // std::cout << "result : " << add(l, l2) << std::endl;
    std::cout << "result : " << add(a, b) << std::endl;
    return 0;
}
