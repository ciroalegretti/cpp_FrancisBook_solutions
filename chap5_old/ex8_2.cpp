#include <iostream>
#include <cassert>
#include <cmath>

void reduceMatrix(int n, double** A, int I, int J, double** redA);

int main(int argc, char* argv[])
{
	int n = 4; //rowsAndColumns;
	//std::cout << "Enter square matrix size: " << std::endl;
	//std::cin >> n;
	//---------------------------------------------------------
	// dynamic memory allocation
	//---------------------------------------------------------
	double** A    = new double* [n];
	double** redA = new double* [n-1];

	for (int i=0; i<n; i++)
	{
		A[i] = new double [n];
	}
	for (int i=0; i<n-1; i++)
	{
		redA[i] = new double [n];
	}
	//---------------------------------------------------------
	// Allocating entries
	//---------------------------------------------------------
    A[0][0] = 1.0, A[0][1] = 0.0, A[0][2] = 5.0, A[0][3] = 3.0;
    A[1][0] = 4.0, A[1][1] = -1.0, A[1][2] = 5.0, A[1][3] = 2.0;
    A[2][0] = 9.0, A[2][1] = 4.0, A[2][2] = 6.0, A[2][3] = 1.0;
    A[3][0] = 0.0, A[3][1] = 0.0, A[3][2] = 2.0, A[3][3] = 4.0;
    // Determinant = 264

	std::cout << "First reduced matriz [0][0]: " << std::endl;

	reduceMatrix(n,A,0,0,redA);
	//std::cout << "Determinant: " << Determinant(n,A) << std::endl;
	//---------------------------------------------------------
	// cleaning memory
	//---------------------------------------------------------
	for (int i=0; i<n; i++)
	{
		delete[] A[i];
	}
	for (int i=0; i<n-1; i++)
	{
		delete[] redA[i];
	}
	delete[] A;
	delete[] redA;
	//---------------------------------------------------------

	return 0;
}

void reduceMatrix(int n, double** A, int I, int J, double** redA)
{
	int i = 0, j = 0;
/*	if (n == 1)
	{
		return A[0][0];
	}
	else:
	{*/
	for (int row=1; row<n; row++)
	{
		for (int col=0; col<n; col++)
		{
			if ((col == J) || (row == I))
			{
				continue;
			}
			else
			{
				redA[i][j] = A[row][col];
				std::cout << redA[i][j] << "\t";
			}
		}
		std::cout << std::endl;
		i++;		// next row
		j = 0;		// restart col counter
	}
	//}
}

