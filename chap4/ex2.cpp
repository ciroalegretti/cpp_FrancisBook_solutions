#include <iostream>

int main(int argc, char* argv[])
{
    // declaring the initial integers
    int i = 1;
    int j = 5;

    // declaring pointers to the integers
    int* p_i;
    int* p_j;

    // store dynamic adresses
    p_i = new int;
    p_j = new int;

    // de-reference and attribute values
    *p_i = i;
    *p_j = j;

    // swap values
    i = *p_j;
    j = *p_i;

    // check operation
    std::cout << "Initialized as '1', now i = " << i << "\n";
    std::cout << "Initialized as '5', now j = " << j << "\n";

    // free memory
    delete p_i, p_j;

    return 0;
}
