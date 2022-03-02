#include <iostream>
#include <string>

int main(int argc, char** argv)
{
    std::string full_name; //empty string
    std::string planet {"Earth . where the sky is blue"};
    std::string prefered_planet {planet};
    std::string message {"Hello     there", 5}; // = Hello
    std::string loops(4, 'e'); // = eeee
    std::string s = " hello string ";
    std::string say_hello {planet, 6, 5}; //start at index 6,pick 5 chars

    std::cout << s << std::endl;
    std::cout << message << std::endl;
    std::cout << loops << std::endl;
    std::cout << say_hello << std::endl;
    std::cout << "length : " << s.length() << std::endl;

    std::cout << &planet << std::endl;
    std::cout << &prefered_planet << std::endl;

    planet = "Earth . where the sky is blue Earth . where the sky is blue Earth . where the sky is blue";
    std::cout << &planet << std::endl;
    std::cout << planet << std::endl;
    return 0;
}