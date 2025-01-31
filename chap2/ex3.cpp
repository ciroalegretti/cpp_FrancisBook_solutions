#include <iostream>

int main(int argc, char* argv[])
{

    int sum = 0;
    int a = 0;

    std::cout << "Enter int for summation and hit RETURN \n";
    std::cout << "Enter (-1) in the end to get sum \n";
    std::cout << "Enter (-2) to reset summation \n";

    while ((a != -1) && (sum <= 100))
    {
    std::cout << "Enter next int \n";
    std::cin >> a;
    if (a != -1)
    {
        sum += a;
    }
    if (a == -2)
    {
    sum = 0;
    std::cout << "Sum reset to 0, starting again \n";
    }
    }
    
    std::cout << "Sum = " << sum << "\n";
    
    return 0;
}
