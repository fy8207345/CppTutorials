#include <iostream>

const size_t SIZE = 10;

int main(int argc, char** argv)
{
    //声明数组, 存放10个元素
    int scores[SIZE];

    //写入数据
    for (size_t i = 0; i < SIZE; i++)
    {
        scores[i] = i * 3;
    }
    
    //读取数据
    std::cout << std::endl;
    for(size_t i{0};i<SIZE;i++){
        std::cout << i << ": " << scores[i] << std::endl;
    }

    //声明并初始化
    double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};
    for(size_t i{0};i<5;i++){
        std::cout << i << ": " << salaries[i] << std::endl;
    }

    //省略数组大小
    int class_sizes[] {10,12,15,11,18,17};
    for(int value : class_sizes){
        std::cout << "value: " << value << std::endl;
    }
    std::cout << "length of class_sizes: " << sizeof(class_sizes) / sizeof(int) << std::endl;
    std::cout << "size of class_sizes: " << std::size(class_sizes) << std::endl;

    const int multipliers[] {22, 30, 15};
    //常量不能修改
    // multipliers[1] = 20;
    return 0;
}