#include <iostream>

void swapUsingPointers(double* p_a, double* p_b);	// function prototyping
void swapUsingReference(double& a, double& b);

int main(int argc, char* argv[])
{
	double a = 3.3;		// start double
	double b = 5.8;		// start double
	double* p_a;		// start pointer
	double* p_b;		// start pointer
	
	p_a = &a;		// get double position to pointer
	p_b = &b;		// get double position to pointer	

	std::cout << "double a was " << a << std::endl;
	std::cout << "double b was " << b << std::endl;
	std::cout << std::endl;

	//swapUsingPointers(p_a, p_b);		// function call
	swapUsingReference(a,b);

	// de-referencing pointers and printing swaped variables
	std::cout << "now double a is " << *p_a << std::endl;
	std::cout << "now double b is " << *p_b << std::endl;	

}

// function definition
void swapUsingPointers(double* p_a, double* p_b)
//-----------------------------------------------------------------
//	Function that recieves two pointers and swaps its contents
//-----------------------------------------------------------------
{
	// (*p_a) is the CONTENT of the pointer
	double aTemp = *p_a; 		// preserving old a berfore overwrite

	*p_a = *p_b;
	*p_b = aTemp;
	
}

// function definition
void swapUsingReference(double& a, double& b)
//-----------------------------------------------------------------
//	Function that recieves two reference variables and swaps its contents
//-----------------------------------------------------------------
{
	double aTemp = a; 		// preserving old a berfore overwrite

	a = b;
	b = aTemp;
	
}
