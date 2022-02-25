#include <iostream>

int main(int argc, char** argv)
{
    char message [5] {'h', 'e', 'l', 'l', 'o'}; //5个字符，无截止符\0
    //message2 和 message4 是字符串的正确使用方法，其他两种不能直接打印
    char message2 [6] {'h', 'e', 'l', 'l', 'o'}; //6个字符，有截止符\0
    char message3 [] {'h', 'e', 'l', 'l', 'o'}; //5个字符，无截止符\0
    char message4 [] {"hello"}; //6个字符，有截止符\0
    std::cout << "message : ";
    for(auto v : message){
        std::cout << v;
    }
    std::cout << std::endl;
    //可能会打印一些垃圾内存数据
    std::cout << "message : " << message << std::endl;
    std::cout << "message2 : " << message2 << std::endl;
    //可能会打印一些垃圾内存数据
    std::cout << "message3 : " << message3 << std::endl;
    std::cout << "message4 : " << message4 << std::endl;

    std::cout << std::endl;
    std::cout << "size: " << std::size(message) << std::endl; 
    std::cout << "size: " << std::size(message2) << std::endl; 
    std::cout << "size: " << std::size(message3) << std::endl; 
    std::cout << "size4: " << std::size(message4) << std::endl; 

    //modify
    message[1] = 'a';
    std::cout << "message : ";
    for(auto v : message){
        std::cout << v;
    }
    return 0;
}