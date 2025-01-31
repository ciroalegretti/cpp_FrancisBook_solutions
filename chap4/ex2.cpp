#include <iostream>
#include <fstream>
#include <cassert>
#include <cmath>
#include <iomanip>

int main(int argc, char* argv[])
{

	int a = 5;
	int b = 10;
	
	int* p_a;
	int* p_b;
	int* p_aa;
	
	p_a = &a;
	p_b = &b;
	
	p_aa = new int;		// new avaliable memory space (to preserve original a content)
	*p_aa = a;
	
	*p_a = b;
	*p_b = *p_aa;
	
	std::cout << "a was 5, now is = " << *p_a << std::endl;
	std::cout << "b was 10, now is = " << *p_b << std::endl;	
	
	
	return 0;
}
