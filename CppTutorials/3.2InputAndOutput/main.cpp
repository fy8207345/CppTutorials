#include <iostream>
#include <string>


int main(int argc, char** argv)
{
    std::cout << "Hello!" << std::endl;
    //Error
    std::cerr << "Error!" << std::endl;
    //Log Message
    std::clog << "Log!" << std::endl;

    int age;
    std::string name;

    // std::cout << "Please type in your last name:" << std::endl;
    // std::cin >> name;

    // std::cout << "Please type in your age: " << std::endl;
    // std::cin >> age;

    std::cout << "type your name and age: " << std::endl;
    std::cin >> name >> age;

    std::cout << "Hello " << name << "! Your are " << age << " years old!" << std::endl;

    int age1;
    std::string full_name;

    std::cout << "Please type in your full name:" << std::endl;
    std::getline(std::cin, full_name);

    std::cout << "Type in your age : " << std::endl;
    std::cin >> age1;
    std::cout << "Hello " << full_name << "! Your are " << age1 << " years old!" << std::endl;
    return 0;
}