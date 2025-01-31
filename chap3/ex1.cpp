#include <iostream>
#include <fstream>
#include <cassert>

int main(int argc, char* argv[])
{
	double x[4] = {0.0, 1.0, 1.0, 0.0};
	double y[4] = {0.0, 0.0, 1.0, 1.0};
	char action;
	bool a;
	
	std::ifstream write_out("ex1.dat"); // reading as ifstream

	if (write_out.is_open())
		{
		std::cout << "File already exists. Overwrite or append \? (o/a) \n"; 
		std::cin >> action;
		}
	else
		{
		std::cout << "No previous data file. \n"; 
		action = 'o';
		}

	write_out.close();
	
	if (action == 'o')
		{
		std::ofstream write_out("ex1.dat");
		assert(write_out.is_open());
		write_out.setf(std::ios::scientific);
		write_out.setf(std::ios::showpos);
		write_out.precision(10);
		
		for (int i=0; i<4; i++)
		{
			write_out << x[i] << "\t";
		}
		write_out.flush();
		write_out << "\n";
		
		for (int i=0; i<4; i++)
		{
			write_out << y[i] << "\t";
		}
		write_out.flush();
		write_out << "\n";		
		}
		
	else if (action == 'a')
		{
		std::ofstream write_out("ex1.dat", std::ios::app);
		assert(write_out.is_open());
		write_out.setf(std::ios::scientific);
		write_out.setf(std::ios::showpos);
		write_out.precision(10);
		
		for (int i=0; i<4; i++)
		{
			write_out << x[i] << "\t";
		}
		write_out.flush();
		write_out << "\n";
		
		for (int i=0; i<4; i++)
		{
			write_out << y[i] << "\t";
		}
		write_out.flush();
		write_out << "\n";		
		
		}
	else
		{
		std::cout << "Invalid option \n";
		}
	
	write_out.close();

	return 0;
}
