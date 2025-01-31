#include <iostream>

int main(int argc, char* argv[])
{
    double p,q,x,y;
    int j;
    
    p = 10;
    q = 100;
    j = 10;
    y = 5;

    if (p > q)
    {
    x = 0;
    }
    
    else if ((p <= q) && (j == 10))
    {
    x = 1;
    }
    
    else
    {
    x = 2;
    }
    
    std::cout << "x = " << x << "\n";
    
    return 0;
}
