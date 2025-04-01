#include <iostream>

int main(int argc, char* argv[])
{
    int i = 5;	// integer declaration
    int* p_j;	// pointer to int declar.

    p_j = &i;	// store the add. to i in the pointer

    i *= *p_j;	// multiply the de-referenced pointer

    std::cout << i << "\n";	// check if 25 is printed

    int* p_k;	// pointer to an int declaration

    // allocate memory and store value to p_k
    p_k = new int;
    *p_k = i;

    *p_j = 0;	// change value pointed to by p_y to zero

    std::cout << "i = " << i << "\n";
    std::cout << "content of p_j = " << *p_j << "\n";
    std::cout << "content of p_k = " << *p_k << "\n";

    delete p_k;

    return 0;
}
