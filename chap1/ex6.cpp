#include <iostream>
#include <cmath>

int main(int argc, char* argv [])
{
	int days[5] = {34,58,57,32,43};
	double average;

	average = ((double)(days[0]) + (double)(days[1]) + (double)(days[2]) + (double)(days[3]) + (double)(days[4]))/5;
	
	std::cout << "Average of passing cars for 5 days: \t" << average << "\n";

	return 0;
}
