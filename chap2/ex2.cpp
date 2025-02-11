#include <iostream>

int main(int argc, char* argv[])
{
    double p,q,x,y;
    int j;
    int condNumb = 0;

    // Get values from user input
    std::cout << "Enter a value for 'p' \n";
    std::cin >> p;

    std::cout << "Enter a value for 'q' \n";
    std::cin >> q;

    std::cout << "Enter a value for 'y' \n";
    std::cin >> y;

    std::cout << "Enter a value for 'j' \n";
    std::cin >> j;

    // Item 1
    if ((p - q > 1e-8) || (j != 10))
    {
	x = 5.0;
	condNumb = 1;
    }

    // Item 2
    if ((y - q > 1e-8) && (j = 20))
    {
	x = 5.0;
	condNumb = 2;
    }
    else
    {
	x = p;
    }

    // Item 3
    if (p - q > 1e-8)
    {
	x = 0.0;
	condNumb = 3;
    }
    else if ((p - q < 1e-8) && (j = 10))
    {
	x = 1;
	condNumb = 3;
    }
    else
    {
	x = 2;
    }

    // print result
    std::cout << "Condition " << condNumb << " is met: x = " << x << "\n";

    return 0;
}
