#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cassert>
#include <iomanip>
#include <cmath>

int main(int argc, char* argv[])
{
    int number_of_nodes = atoi(argv[1]);
    assert(number_of_nodes > 1);

    double step = 1.0/(number_of_nodes - 1);
    // arrays initialization with zero-based indexing
    double x[number_of_nodes];
    double y[number_of_nodes];
    double y_ex[number_of_nodes];

    // print node count and grid step size
    std::cout << "Number of nodes = " << number_of_nodes << "\n";
    std::cout << "Grid step = " << step << "\n";

    for (int i = 0; i < number_of_nodes; i++)
    {
	x[i] = i*step;
	//std::cout << x[i] << "\t" << i << "\n";
    }

    // enforce boundary condition
    y[0] = 1.0;
    y_ex[0] = 1.0;

    std::ofstream data_out("xy.dat");
    assert(data_out.is_open());

    data_out.precision(4);

    data_out << "x \t" << "y_calc \t" << "y_exac \t" << "err (%) \n";
    data_out << x[0] << "\t" << y[0] << "\t" << exp( - x[0]) << "\t" << 0.0 << "\n";

    for (int i = 1; i < number_of_nodes; i++)
    {
        y[i] = y[i-1]/(step + 1);
        y_ex[i] = exp( - x[i]);
	data_out << x[i] << "\t" << y[i] << "\t" << y_ex[i] << "\t" << std::abs(y_ex[i] - y[i])*100/y_ex[i] << "\n";
    }

    data_out.flush();
    data_out.close();


    return 0;
}
