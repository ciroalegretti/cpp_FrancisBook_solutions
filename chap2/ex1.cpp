#include <iostream>

int main(int argc, char* argv[])
{
    // memory allocation
    double x,y,z;

    // get values from keyboard input
    std::cout << "Enter a value for 'x' \n";
    std::cin >> x;

    std::cout << "Enter a value for 'y' \n";
    std::cin >> y;

    // double conditional with "||" (OR)
    if ((x > y) || (x < 5.0))
    {
	// value asignment if TRUE
	z = 4;
    }
    else
    {
	// value asignment if FALSE
	z = 2.0;
    }

    std::cout << "\n Asigned value is: " << z << "\n";

    return 0;
}
