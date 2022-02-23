#include <iostream>
#include <limits>

int main(int argc, char** argv)
{
    std::cout << "the range for short is from " << std::numeric_limits<short>::min() 
        << " to " << std::numeric_limits<short>::max() << std::endl;

        std::cout << "the range for unsigned short is from " << std::numeric_limits<unsigned short>::min() 
        << " to " << std::numeric_limits<unsigned short>::max() << std::endl;

        std::cout << "the range for int is from " << std::numeric_limits<int>::min() 
        << " to " << std::numeric_limits<int>::max() << std::endl;

        std::cout << "the range for unsigned int is from " << std::numeric_limits<unsigned int>::min() 
        << " to " << std::numeric_limits<unsigned int>::max() << std::endl;

        std::cout << "the range for long is from " << std::numeric_limits<long>::min() 
        << " to " << std::numeric_limits<long>::max() << std::endl;

        std::cout << "the range for unsigned long is from " << std::numeric_limits<unsigned long>::min() 
        << " to " << std::numeric_limits<unsigned long>::max() << std::endl;

        std::cout << "the range for float is from " << std::numeric_limits<float>::min() 
        << " to " << std::numeric_limits<float>::max() << std::endl;

        std::cout << "the range for float is from " << std::numeric_limits<float>::lowest() 
        << " to " << std::numeric_limits<float>::max() << std::endl;

        std::cout << "the range for double is from " << std::numeric_limits<double>::min() 
        << " to " << std::numeric_limits<double>::max() << std::endl;

        std::cout << "the range for long double is from " << std::numeric_limits<long double>::min() 
        << " to " << std::numeric_limits<long double>::max() << std::endl;

        std::cout << "the range for long long is from " << std::numeric_limits<long long>::min() 
        << " to " << std::numeric_limits<long long>::max() << std::endl;

        std::cout << "the range for unsigned long long is from " << std::numeric_limits<unsigned long long>::min() 
        << " to " << std::numeric_limits<unsigned long long>::max() << std::endl;

        std::cout << std::boolalpha;
        std::cout << "int is signed : " << std::numeric_limits<int>::is_signed << std::endl;
        std::cout << "int digits: " << std::numeric_limits<int>::digits << std::endl; 
    return 0;
}