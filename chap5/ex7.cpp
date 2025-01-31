#include <iostream>
#include <cassert>
#include <cmath>

double CalcNorm(double* x, int s, int p = 2);

int main(int argc, char* argv[])
{
	double x[3] = {1.0, 2.0, 3.0};
	//double p = 2.0;
	int s = 3;
	
	double pNorm;
	
	//pNorm = CalcNorm(x,s,p);
	pNorm = CalcNorm(x,s);
	
	std::cout << pNorm << std::endl;
		
}

double CalcNorm(double* x, int s, int p)
{
	double a = 0.0;
	
	for (int i=0; i<s; i++)
	{
		double temp = fabs(x[i]);
		a += pow(temp, p);
	}
	
	return pow(a, 1.0/p);
}



