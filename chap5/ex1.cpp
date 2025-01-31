#include <iostream>

void printInt(int* p_a);	// function prototyping

int main(int argc, char* argv[])
{
	int a = 3;		// start int
	int* p_a;		// start pointer
	
	p_a = &a;		// get int position to pointer

	printInt(p_a);

}

// function definition
void printInt(int* p_a)
//---------------------------------------------------------------
//	Function that recieves a pointer and print its content
//---------------------------------------------------------------
{
	// (*p_a) is the CONTENT of the pointer
	std::cout << "Integer value: " << *p_a << std::endl;
}
