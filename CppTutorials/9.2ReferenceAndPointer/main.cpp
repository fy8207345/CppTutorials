#include <iostream>

int main(int argc, char** argv)
{

    double double_value {12.34};
    double &ref_double_value {double_value}; //引用初始化后不可变
    double *p_double_value {&double_value};

    //reading 
    std::cout << "double value : " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;

    //writing throug pointer
    *p_double_value = 15.44;
    std::cout << std::endl;
    std::cout << "double value : " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;

    //writing through reference
    ref_double_value = 18.44;
    std::cout << std::endl;
    std::cout << "double value : " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;

    double double_value2 {23.45};
    ref_double_value = double_value2; //地址没有改变，但是值内容改变了

    std::cout << std::endl;
    std::cout << "double value : " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;

    double some_other_value {99.99};
    p_double_value = &some_other_value;

    std::cout << std::endl;
    std::cout << "double value : " << double_value << std::endl;
    std::cout << "ref_double_value: " << ref_double_value << std::endl;
    std::cout << "p_double_value: " << p_double_value << std::endl;
    std::cout << "*p_double_value: " << *p_double_value << std::endl;
    return 0;
}