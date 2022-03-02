#include <iostream>

int main(int argc, char** argv)
{
    auto func = [](){
        std::cout << "Hello lambda!" << std::endl;
    };
    func();

    [](){
        std::cout << "call directly!" << std::endl;
    }();

    auto result = [](double a, double b) -> double{
        return a + b;
    }(1.2,3.4);
    std::cout << "Result: " << result << std::endl;

    //capture list
    double a{10};
    double b{20};

    auto func2 = [&a, b](){
        std::cout << "a , b : " << a + b << std::endl;
        a++;
    };
    func2();

    std::cout << "a : " << a << std::endl;

    //capture by value
    int c{42};
    auto func3 = [c](){
        std::cout << "inner value : " << c << "address: " << &c << std::endl;
    };
    for(size_t i{}; i < 5 ; i++){
        std::cout << "Outer value : " << c <<  "address: " << &c << std::endl;
        func3();
        c++;
    }

    //capture by reference
    int d{42};
    auto func4 = [&d](){
        std::cout << "inner value : " << d << "address: " << &d << std::endl;
    };
    for(size_t i{}; i < 5 ; i++){
        std::cout << "Outer value : " << d <<  "address: " << &d << std::endl;
        func4();
        d++;
    }

    //capture by pointer
    int* pe{new int{42}};
    auto func5 = [pe](){
        std::cout << "inner value : " << *pe << "address: " << pe << std::endl;
    };
    for(size_t i{}; i < 5 ; i++){
        std::cout << "Outer value : " << *pe <<  "address: " << pe << std::endl;
        func5();
        ++*pe;
    }

    delete pe;
    pe = nullptr;
    return 0;
}
