#include <iostream>
#include <fstream>
#include <cassert>
#include <cmath>
#include <iomanip>

int main(int argc, char* argv[])
{

	int i = 5;
	int* p_j;
	int* p_k;
	
	p_j = &i;	   	// assigns the address of i to p_j	
	i = *p_j*i;		// product between the content of pointer (*p_j) and integer (i)
	
	p_k = new int;      	// assigns an address to p_k
	*p_k = i;	   	 // stores i in memory with address p_k

	*p_j = 0;		// indirectly sets i = 0;
	
	std::cout << "i = " << i << std::endl;
	std::cout << "value p_j = " << *p_j << std::endl;
	std::cout << "value p_k = " << *p_k << std::endl;
	
	
	return 0;
}
