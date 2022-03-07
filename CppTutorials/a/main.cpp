#include <iostream>

struct a{
    int a;
};
struct b{
    struct a* a1;
    struct a* a2;
    long l;
    unsigned char c[1];
};

int main(int argc, char** argv)
{
    std::cout << sizeof(struct a*) << std::endl;
    std::cout << sizeof(long) << std::endl;
    std::cout << sizeof(b) << std::endl;
    return 0;
}
