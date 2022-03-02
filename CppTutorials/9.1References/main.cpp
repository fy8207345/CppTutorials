#include <iostream>

int main(int argc, char** argv)
{

    int v_int{25};
    double v_double{33.65};
    int *p{new int{33}};

    int* & p2 = p;

    std::cout << "p2: " << p2 << "-" << *p2 << std::endl;
    std::cout << "p: " << p << "-" << *p << std::endl;

    int& reference_to_int_var{v_int};
    int& reference_to_int_value2 = v_int;
    double& reference_to_double_value1 {v_double};

    std::cout << "int value: " << v_int << std::endl;
    std::cout << "double value: " << v_double << std::endl;
    v_int = 335;
    std::cout << "reference value: " << reference_to_int_var << std::endl;
    std::cout << "reference value2: " << reference_to_int_value2 << std::endl;
    std::cout << "reference value: " << &v_int << std::endl;
    std::cout << "reference value: " << &reference_to_int_var << std::endl;
    std::cout << "reference value2: " << &reference_to_int_value2 << std::endl;

    delete p;
    p = nullptr;
    return 0;
}