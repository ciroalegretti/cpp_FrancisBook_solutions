#include <iostream>
#include <cassert>
#include <cmath>

int main(int argc, char* argv[])
{

	double A[2][2] = {{2.0, 1.0},
                     	  {1.0, 1.0}};

	double invA[2][2];
	double detA;

	detA = A[0][0]*A[1][1] - A[0][1]*A[1][0];
  	std::cout << "Matrix determinant is: \t" << detA << "\n";

  	assert(detA != 0);

	invA[0][0] =   A[1][1]/detA;
	invA[1][1] =   A[0][0]/detA;
	invA[0][1] = - A[0][1]/detA;
	invA[1][0] = - A[1][0]/detA;

   	std::cout << "Entries for the inverse: \n";

  	for (int i=0 ; i<2; i++)
  	{
  		for (int j=0; j<2; j++)
  		{
	  	    std::cout << invA[i][j] << "\t";
  		}

  	std::cout << "\n";

  	}


   return 0;

}
