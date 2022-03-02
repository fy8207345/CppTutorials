#include <iostream>
#include <cstring>

int main(int argc, char** argv)
{
    const char message1 [] {"the sky is blue."};
    const char* message2 {"the sky is blue."};
    std::cout << "message1: " << message1 << std::endl;

    //strlen ignores null character
    std::cout << "strlen(message1): " << std::strlen(message1) << std::endl;

    //includes null character
    std::cout << "sizeof(message1): " << sizeof(message1) << std::endl;

    //strlen ignores null character
    std::cout << "strlen(message2): " << std::strlen(message2) << std::endl;

    //指针的长度：8个字节
    std::cout << "sizeof(message2): " << sizeof(message2) << std::endl;

    const char* string1 {"Alabama"}; //字符串
    const char* string2 {"Blabama"};
    char string3[] {"Alabama"}; //数组，指针
    //编译错误
    // string3 = "hhaha";

    std::cout << "std::strcmp: " << std::strcmp(string1, string2) << std::endl;

    string1 = "Alabama";
    string2 = "Alabamb";
    std::cout << "std::strcmp: " << std::strcmp(string1, string2) << std::endl;

    string1 = "Alabamb";
    string2 = "Alabama";
    std::cout << "std::strcmp: " << std::strcmp(string1, string2) << std::endl;
    

    long long l = 1000000000;
    long long l2 = 1000000000;
    long long l3 = l * l2;

    std::cout << l3 << std::endl;

    return 0;
}