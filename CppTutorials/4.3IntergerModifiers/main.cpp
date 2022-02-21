#include <iostream>


int main(int argc, char** argv)
{
    short short_ver {-32768}; //2 bytes
    short int short_int {455};
    signed short signed_short {122};
    signed short int signed_short_int {-456};
    unsigned short int unsigned_short_int {456};

    int int_var{55}; //4 bytes
    signed signed_var{66};
    signed int signed_int{77};
    unsigned int unsigned_int{88};

    long long_var{99}; //4 or 8 bytes
    long int long_int{33};
    signed long signed_long{44};
    signed long int signed_long_int{55};
    unsigned long int unsigned_long_int{66};

    long long long_long{888}; // 8 bytes
    long long int long_long_int{999};
    signed long long signed_long_long{00};
    signed long long int signed_long_long_int{11};
    unsigned long long int unsigned_long_long_int{22};

    std::cout << "short: " << sizeof(short) << std::endl;
    std::cout << "int: " << sizeof(int) << std::endl;
    std::cout << "long: " << sizeof(long) << std::endl;
    std::cout << "long long: " << sizeof(long long) << std::endl;
    return 0;
}