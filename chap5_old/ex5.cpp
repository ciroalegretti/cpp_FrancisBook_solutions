#include <iostream>
#include <cassert>
#include <cmath>

void Multiply(double (&A)[2][2], double (&B)[2][2], double (&C)[2][2]);

int main(int argc, char* argv[])
{

	double A[2][2] = {{4.0, 2.0},{1.0, 2.0}};
//	double B[1][2] = {{1.0,1.0}};
	double B[2][2] = {{3.0, 2.0},{3.0, 2.0}};
	double C[2][2];
	
	Multiply(A,B,C);
	
}

void Multiply(double (&A)[2][2], double (&B)[2][2], double (&C)[2][2])
{

	// assert if matrix dimensions are compatible for multiplication
	int colsA = sizeof(A[0])/sizeof(A[0][0]);
	int rowsB = sizeof(B)/sizeof(B[0]);
	
	assert(colsA == rowsB);
	std::cout << "Columns of A and rows of B are equal! Let's multiply" << std::endl;
	
	for (int i=0; i<2; i++)
	{
		for (int j=0; j<2; j++)
		{
			for (int k=0; k<2; k++)
			{
				C[i][j] += A[i][k]*B[k][j];
			}
			std::cout << C[i][j] << std::endl;
		}
	}
	
//	return C[2][2];
	
}


