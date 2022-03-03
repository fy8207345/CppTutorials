#include <iostream>

template <typename T>
concept TinyType = requires(T t){
    sizeof(T) <= 4; //simple requirement. only checks syntax
    requires sizeof(T) <= 4;// Nested Requirement. checks if the expression is true.
};

template <typename T>
concept Addable = requires(T a, T b){
    //noexcept is optional
    {a + b} noexcept -> std::convertible_to<int>; // compound requirement
    //checks if a + b is valid syntax, doesn't throw exceptions(optional), and the result is convertible to int(optional).
};

template <typename T>
requires Addable<T>
T add(T a, T b){
    return a + b;
}

int main(int argc, char** argv)
{
    std::cout << "Result : " << add(1.1, 3.3) << std::endl;
    return 0;
}
