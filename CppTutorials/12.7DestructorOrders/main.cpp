#include <iostream>
#include <string_view>

class Dog
{
    private:
        std::string name;
    public:
        Dog(std::string_view name){
            this->name = name;
            std::cout <<  "dog constructor: " << name << std::endl;
        };
        ~Dog(){
            std::cout << "dog destructor: " << name << std::endl;
        }
};

void func(){
    Dog dog1("dog1");
    Dog dog2("dog2");
    Dog dog3("dog3");
    Dog dog4("dog4");
}

int main(int argc, char** argv)
{
    func();
    return 0;
}
