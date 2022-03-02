#include <iostream>

int main(int argc, char** argv)
{

    std::cout << std::endl;
    std::cout << "Non const refernece : " << std::endl;
    int age{25};
    int& ref_age {age};
    
    ref_age+=2;

    int *p_ref = &ref_age;
    int **pp = &p_ref;
    std::cout << "p_ref: " << p_ref << std::endl;
    std::cout << "pp: " << pp << std::endl;
    std::cout << "ref" << ref_age << std::endl;

    int *p_ref2 {new int{999}};
    pp = &p_ref2;
    std::cout << "p_ref: " << p_ref << std::endl;
    std::cout << "pp: " << pp << std::endl;
    std::cout << "ref" << ref_age << std::endl;

    delete p_ref2;
    p_ref2 = nullptr;

    age++;
    std::cout << "age : " << age << std::endl;
    std::cout << "ref_age : " << ref_age << std::endl;
    ref_age++;
    std::cout << "age : " << age << std::endl;
    std::cout << "ref_age : " << ref_age << std::endl;

    //不能修改内容
    const int& ref_age2{age};
    // ref_age2++;

    std::cout << "age : " << age << std::endl;
    std::cout << "ref_age2 : " << ref_age2 << std::endl;

    const int* const p_age {&age};
    std::cout << "age : " << age << std::endl;
    std::cout << "p_age : " << p_age << "-" << *p_age << std::endl;

    int * p {&age};
    int * & p2 {p};

    std::cout << "p : " << p << ": " << *p << std::endl;
    std::cout << "p2 : " << p2 << ": " << *p2 << std::endl;
    std::cout << "&p : " << p << ": " << &p << std::endl;
    std::cout << "&p2 : " << p2 << ": " << &p2 << std::endl;

    int birth = 33;
    p2 = &birth;
    std::cout << "p : " << p << ": " << *p << std::endl;
    std::cout << "p2 : " << p2 << ": " << *p2 << std::endl;
    std::cout << "&p : " << p << ": " << &p << std::endl;
    std::cout << "&p2 : " << p2 << ": " << &p2 << std::endl;

    *p2 = 44;
    std::cout << "p : " << p << ": " << *p << std::endl;
    std::cout << "p2 : " << p2 << ": " << *p2 << std::endl;
    std::cout << "&p : " << p << ": " << &p << std::endl;
    std::cout << "&p2 : " << p2 << ": " << &p2 << std::endl;
    return 0;
}