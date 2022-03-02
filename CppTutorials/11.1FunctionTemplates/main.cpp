#include <iostream>

template <typename T> 
T maximum(T a, T b);

int main(int argc, char** argv)
{
    int x{5};
    int y{7};
    int* px {&x};
    int* py {&y};
    auto pmax = maximum(px, py);
    std::cout << "max: " << pmax << ", px :" << px << ", py :" << py << std::endl;
    auto m = maximum(1,23); 
    std::cout << "maximum: " << m << std::endl;
    std::cout << "maximum: " << maximum(12.2,2.7) << std::endl;
    return 0;
}

template <typename T> 
T maximum(T a, T b){
    return a >= b ? a : b;
}