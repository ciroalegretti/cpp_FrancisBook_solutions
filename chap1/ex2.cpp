#include <iostream>

int main(int argc, char* argv [])
{

	//  allocate variable memory
	int int1,int2;

	// input from keyboard and assign values
	std::cout << "Enter first integer\n";
	std::cin >> int1;
	std::cout << "Enter second integer\n";
	std::cin >> int2;

	// manipulate and print output
	std::cout << "The product between the two integers is " << int1*int2;
	std::cout << "\n";

	return 0;
}
