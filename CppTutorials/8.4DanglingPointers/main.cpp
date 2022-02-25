#include <iostream>

int main(int argc, char** argv)
{
    //Case 1: uninitialized pointer
    int *p;
    std::cout << std::endl;
    std::cout << "Case 1: uninitialized pointer: " << std::endl;
    //运行到下面会报错
    // std::cout << "p : " << *p << std::endl;
    

    //Case 2: deleted pointer
    int *p2{new int{1}};
    delete p2;
    //运行到下面会报错
    // *p2 = 123;
    // std::cout << "p2 : " << *p2 << std::endl;

    //Case 3: multiple pointers pointing to a same address.
    int *p3 {new int (88)};
    int *p4 {p3};
    std::cout << "p3 : " << p3 << "-" << *p3 << std::endl;
    std::cout << "p4 : " << p4 << "-" << *p4 << std::endl;

    delete p3;
    //p4目前属于垃圾数据
    std::cout << "p4 : " << p4 << "-" << *p4 << std::endl;
    return 0;
}