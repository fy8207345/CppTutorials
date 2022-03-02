#include <iostream>

int sum(int a, int b){
    int result = a + b;
    std::cout << "In. result is at : " << &result << std::endl;
    return result;
}

std::string concat(std::string str1, std::string str2){
    std::string result = str1 + str2;
    std::cout << "In String. result is at : " << &result << std::endl;
    return result;
}

int main(int argc, char** argv)
{
    int result = sum(1, 2); //result is a copy the returned value.
    std::cout << "Out. result is at : " << &result << std::endl;

    std::string strResult = concat("heelo", "world");
    std::cout << "Out String. result is at : " << &strResult << std::endl;
    return 0;
}
