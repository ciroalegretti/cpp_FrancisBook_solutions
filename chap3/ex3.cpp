#include <iostream>
#include <cstdlib>
#include <cassert>

int main(int argc, char* argv[])
{
    int number_of_nodes = atoi(argv[1]);
    assert(number_of_nodes > 1);

    double step = 1.0/(number_of_nodes - 1);
    // arrays initialization with zero-based indexing
    double x[number_of_nodes - 1];
    double y[number_of_nodes - 1];

    // print node count and grid step size
    std::cout << "Number of nodes = " << number_of_nodes << "\n";
    std::cout << "Grid step = " << step << "\n";

    for (int i = 0; i < number_of_nodes; i++)
    {
	x[i] += i*step;
	std::cout << x[i] << "\n";
    }

    std::ofstream data_out("xy.dat");
    assert(data_out.is_open());

    data_out << "x" << std::setw(25) << "y" << std::setw(30) << "y_ex" << std::setw(25) << "err (%) \n";
    data_out << x[0] << "\t" << y[0] << "\t" << exp( - x[0]) << "\t" << (exp( - x[0]) - y[0])/exp( - x[0]) << "\n";



    return 0;
}
