#include <iostream>

int main(int argc, char* argv[])
{
    // declaring the initial integers
    int i = 1;
    int j = 5;

    // declaring pointers to the integers
    int* p_i;
    int* p_j;

    // store adresses
    p_i = &i;
    p_j = &j;

    // de-reference and overwrite values
    *p_i = 5;
    *p_j = 1;

    // check operation
    std::cout << "Initialized as '1', now i = " << *p_i << "\n";
    std::cout << "Initialized as '5', now j = " << *p_j << "\n";

    return 0;
}
