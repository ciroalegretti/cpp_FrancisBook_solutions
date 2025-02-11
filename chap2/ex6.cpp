#include <iostream>
#include <cassert>
#include <cmath>

int main(int argc, char* argv[])
{

	double x_next, x_prev;
	double res = 1;
	double tol;
	double count = 0;

	x_prev = 0.0;

	std::cout << "Enter a tolerance for convergence: \t";
	std::cin >> tol;

	while (res > tol)
	{
		x_next = x_prev - (exp(x_prev) + pow(x_prev,3) - 5)/(exp(x_prev) + 3*pow(x_prev,2));

		res = fabs(x_next - x_prev);

		count++;

		std::cout<< "Iteration count " << count << " with residual: " << res << "\n"; 

		x_prev = x_next;
	}

   return 0;

}
