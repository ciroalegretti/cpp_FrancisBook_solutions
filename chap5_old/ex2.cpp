#include <iostream>

void modifyInt(int* p_a);	// function prototyping

int main(int argc, char* argv[])
{
	int a = 3;		// start int
	int* p_a;		// start pointer
	
	p_a = &a;		// get int position to pointer

	modifyInt(p_a);		// function call

}

// function definition
void modifyInt(int* p_a)
//---------------------------------------------------------------
//	Function that recieves a pointer and modify its content
//---------------------------------------------------------------
{
	// (*p_a) is the CONTENT of the pointer
	*p_a = 20;
	std::cout << "Integer value: " << *p_a << std::endl;
}
