#include <iostream>
#include <cstring>

//template
template <typename T> T maximum(T a, T b){
    return a >= b ? a : b;
}
//template specializtion
template <>
const char* maximum<const char*>(const char* a, const char* b){
    return (std::strcmp(a, b) > 0) ? a : b;
}

int main(int argc, char** argv)
{
    int a{10};
    int b{20};
    int maxint = maximum(a, b);
    const char* g{"wild"};
    const char* h{"animal"};

    std::cout << maximum(g, h) << std::endl;
    return 0;
}
