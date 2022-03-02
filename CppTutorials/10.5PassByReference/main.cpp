#include <iostream>

void say(int& age);

//输入输出参数
void max_int(int input1, int input2, int& output){
    if(input1 >= input2){
        output = input1;
    }else{
        output = input2;
    }
}

int main(int argc, char** argv)
{
    int age{23};

    std::cout << "before: " << age << ", address : " << &age << std::endl;
    say(age);
    std::cout << "after: " << age << ", address : " << &age << std::endl;
    return 0;
}

void say(int& age){
    ++age; //change the copy. outside age is not affected.
    std::cout << "hello, you are " << age << ", address : " << &age << std::endl;
}