#include <iostream>

int main(int argc, char** argv)
{
    int *p_number{}; //0, 空指针
    int *p_number2; //垃圾数字
    double *p_fractional_number {nullptr};

    std::cout << "p: " << p_number << std::endl;
    std::cout << "p2: " << p_number2 << std::endl;

    std::cout << "size int* : " << sizeof(int*) << std::endl;
    std::cout << "size p : " << sizeof(p_number) << std::endl;
    std::cout << "size p_fractional_number : " << sizeof(p_fractional_number) << std::endl;

    //以下三种都是指针
    int* p1{};
    int * p2{};
    int *p3{};

    //p4, p6都是指针，p5, p7都是int变量
    int *p4{}, p5{};
    int* p6{}, p7{};
    // p4 = 5;
    p5 = 5;
    // p6 = 5;
    p7 = 5;

    std::cout << "p4: " << p4 << std::endl;
    std::cout << "p5: " << p5 << std::endl;
    std::cout << "p6: " << p6 << std::endl;
    std::cout << "p7: " << p7 << std::endl;

    int int_var {43};
    int *p_int{&int_var};

    std::cout << "int_var: " << int_var << std::endl;
    std::cout << "p_int: " << p_int << std::endl;
    
    int int_var1 {65};
    p_int = &int_var1;
    std::cout << "int_var: " << int_var << std::endl;
    std::cout << "p_int: " << p_int << std::endl;

    
    return 0;
}