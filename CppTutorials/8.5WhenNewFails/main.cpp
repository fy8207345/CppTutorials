#include <iostream>

int main(int argc, char** argv)
{

    //case 1: nothrow
    int *data = new(std::nothrow) int [1000000000000000000];
    if(data != nullptr){
        std::cout << "data allocated: " << data << std::endl;
    }else{
        std::cout << "data allocated failed: " << data << std::endl;
    }

    //case 2: try catch
    try
    {
        int *lots_of_ints1 {new int[1000000000000000000]};
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return -1;
    }
    

    for(size_t i{}; i < 1000000000000000000; i++){
        int * lots_of_int2 {new int[10000000]};
    }
    return 0;
}