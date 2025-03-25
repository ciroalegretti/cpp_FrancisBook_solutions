#include <iostream>
#include <fstream>
#include <cassert>

int main(int argc, char* argv[])
{
    double x[4] = {0.0, 1.0, 1.0, 0.0};
    double y[4] = {0.0, 0.0, 1.0, 1.0};
    bool decision;

    std::ifstream read_input("x_and_y.dat");

    if (read_input.is_open())
    {
	read_input.close();
	std::cout << "File exists! Append? \n";
	std::cout << "Yes (1) or No (0)? \n";
	std::cin >> decision;
    }

    if (decision)	// true
    {
        std::ofstream write_output("x_and_y.dat", std::ios::app);
        assert(write_output.is_open());

        write_output.setf(std::ios::scientific);
        write_output.setf(std::ios::showpos);
        write_output.precision(10);

        for (int i=0; i<=3; i++)
        {
            write_output << x[i] << "\t";
        }
        write_output << "\n";
        write_output.flush();

        for (int i=0; i<=3; i++)
        {
            write_output << y[i] << "\t";
        }
        write_output << "\n";
        write_output.flush();

        write_output.close();

    }
    else		// false
    {
	std::ofstream write_output("x_and_y.dat");
        assert(write_output.is_open());

        write_output.setf(std::ios::scientific);
        write_output.setf(std::ios::showpos);
        write_output.precision(10);

        for (int i=0; i<=3; i++)
        {
            write_output << x[i] << "\t";
        }
        write_output << "\n";
        write_output.flush();

        for (int i=0; i<=3; i++)
        {
            write_output << y[i] << "\t";
        }
        write_output << "\n";
        write_output.flush();

        write_output.close();

    }

    return 0;

}
