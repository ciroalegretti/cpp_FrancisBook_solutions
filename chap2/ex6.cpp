#include <iostream>
#include <cassert>
#include <cmath>

int main(int argc, char* argv[])
{
                     
	double xnew, xold;
	double res = 1;
	double count = 0;
	
	xold = 0.0;
	
	//for (int i=1; i<100; i++)
	while (res > 1e-3)
	{
		xnew = xold - (exp(xold) + pow(xold,3) - 5)/(exp(xold) + 3*pow(xold,2));
		
		res = fabs(xnew - xold);
		
		count++;

		std::cout<< "Iteration count " << count << " with residual: " << res << "\n"; 
		
		xold = xnew;
	}
	
    
   return 0;
}
