#include <iostream>

int main(int argc, char** argv)
{

    const size_t size {10};

    //dynamic arrays: live on the heap
    double *p_salaries {new double[size]}; // array will contain garbage values

    int *p_students {new(std::nothrow) int[size]{}}; // all values initialized to 0

    double *p_scores {new(std::nothrow) double[size]{1,2,3,4,5}}; // first 5 values will be 1,2,3,4,5, and the rest will be 0's.

    std::cout << "size of dynamic array : " << sizeof(p_salaries) / sizeof(double) << std::endl;

    //static arrays
    int scores[10] {1,2,3,4,5,6,7,8,9,10}; // live on the stack
    std::cout << "size of static array : " << std::size(scores) << std::endl;
    for(auto v : scores){
        std::cout << "value: " << v << std::endl;
    }

    delete [] p_salaries;
    p_salaries = nullptr;
    delete [] p_students;
    p_students = nullptr;
    delete [] p_scores;
    p_scores = nullptr;
    return 0;
}