#include <iostream>
#include <iomanip>

int main(int argc, char** argv)
{
    auto v {1};
    auto v2 {13.0};
    auto v3 {14.0f};
    auto v4 {14.0L};
    auto v5 {'e'};

    auto v6 {123u}; //unsigned
    auto v7 {123ul}; //unsigned long
    auto v8 {123ll}; //long long

    std::cout << std::setprecision(20);

    std::cout << sizeof(v) << std::endl;
    std::cout << v2 << std::endl;
    std::cout << v3 << std::endl;
    std::cout << v4 << std::endl;
    std::cout << v5 << std::endl;
    std::cout << v6 << std::endl;
    std::cout << v7 << std::endl;
    std::cout << sizeof(v8) << std::endl;
    return 0;
}