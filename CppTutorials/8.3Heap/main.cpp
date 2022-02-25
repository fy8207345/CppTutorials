#include <iostream>

int main(int argc, char** argv)
{
    //声明指针
    int *p {};
    //指针指向heap上分配的内存
    p = new int; 
    *p = 77; //向该内存写入数据
    std::cout << std::endl;
    std::cout << "*p : " << *p << std::endl;

    delete p; //释放内存
    p = nullptr;

    int *p1 {new int};
    int *p2 {new int(32)};
    int *p3 {new int{64}};
    
    std::cout << "*p1 : " << *p1 << std::endl;
    std::cout << "*p2 : " << *p2 << std::endl;
    std::cout << "*p3 : " << *p3 << std::endl;

    delete p1;
    delete p2;
    delete p3;
    p1 = nullptr;
    p2 = nullptr;
    p3 = nullptr;

    return 0;
}