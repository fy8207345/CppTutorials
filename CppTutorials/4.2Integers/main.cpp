#include <iostream>


int main(int argc, char** argv)
{
    int elephant_count; //未初始化
    int lion_count{}; //初始化为0
    int dog_count{10}; //初始化为10
    int cat_count{15}; 
    int domesticated_animals {dog_count + cat_count};
    int no_warning(2.9); //无编译错误
    int hhh(10);
    //会编译错误
    // int narrowing_conversion{2.9};
    int assignment = 2.9;

    std::cout << "sizeof int : " << sizeof(int) << std::endl;
    std::cout << "sizeof int : " << sizeof(hhh) << std::endl;
    return 0;
}