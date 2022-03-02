#include <iostream>

int main(int argc, char** argv)
{

    int *p {new int{55}}; // points to some address, let's call that address

    // should delete and reset here

    int number{55}; // lives at address2

    p = &number; // now p points to address2. but address1 is still in use by our program.
                 // But our program has lost access to that memory location.
                 // Memory has benn leaked.

    {
        int *p2 {new int{77}};
    }
    // memory with {77} leaked.
    return 0;
}