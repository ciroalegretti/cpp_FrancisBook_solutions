#include <iostream>
#include <fstream>
#include <cassert>
#include <cmath>
#include <iomanip>

int main(int argc, char* argv[])
{

	double* a;	// set one pointer for each vector
	double* b;
	double dot;
	int k = 0;
	
	
	while (k < 1e9)
	{
	a = new double [3];	// allocate memory for vector size [3]
	b = new double [3];
	
	a[0] = 1.0;
	a[1] = 2.0;
	a[2] = 3.0;
	
	b[0] = 4.0;
	b[1] = 5.0;
	b[2] = 6.0;
	
	for (int i=0; i<3; i++)
	{
		dot += a[i]*b[i];
	}
	
	std::cout << "The dot product is " << dot << "\t k is " << k << std::endl;
	
	delete[] a;
	delete[] b;
	
	dot = 0;
	
	k++;
	
	}
	
	return 0;
}
