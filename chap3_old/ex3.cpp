#include <iostream>
#include <fstream>
#include <cassert>
#include <cmath>
#include <iomanip>

int main(int argc, char* argv[])
{

	int points;
	double step;
	
	std::cout << "Enter grid points: \n";
	std::cin >> points;
	assert(points > 1);
	
	step = 1.0/(points - 1);
	std::cout << "Step is \t" << step << "\n";

	double x[points-1],y[points-1];

	y[0] = 1.0;
	x[0] = 0.0;
	
	std::ofstream data_out("xy.dat");
	assert(data_out.is_open());
	data_out.setf(std::ios::scientific);
	data_out.setf(std::ios::showpos);
	data_out.precision(10);

	data_out << "x" << std::setw(25) << "y" << std::setw(30) << "y_exact" << std::setw(25) << "error \n";
	data_out << x[0] << "\t" << y[0] << "\t" << exp(-x[0]) << "\t" << exp(-x[0]) - y[0] << "\n";

	for (int i=1; i<points; i++)
	{
		x[i] = x[i-1] + step;
		y[i] = y[i-1]/(step + 1.0);
		data_out << x[i] << "\t" << y[i] << "\t" << exp(-x[i]) << "\t" << exp(-x[i]) - y[i] << "\n";
	}
	
	
	data_out.close();
	
	return 0;
}
