#include <iostream>

class Dog
{
public:
    Dog() = default;
    ~Dog(){
        std::cout << "dog destructor!!" << std::endl;
    }
};

void func(){
    Dog dog;
}

int main(int argc, char** argv)
{
    func();
    return 0;
}
