#include <iostream>
#include <cassert>
#include <cmath>

int calcFac(int n);

int main(int argc, char* argv[])
{
	int n; 
	int fac;
	std::cout << "Enter a number to calculate its factorial: \t" << std::endl;
	std::cin >> n;
	fac = calcFac(n);
	std::cout << "The factorial of " << n << " is " << fac << std::endl;
	
	return 0;
}

int calcFac(int n)
{
	assert(n>0);
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n*calcFac(n-1);	
	}
		
}



