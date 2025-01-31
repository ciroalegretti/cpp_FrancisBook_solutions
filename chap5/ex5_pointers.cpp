#include <iostream>
#include <cassert>
#include <cmath>

void Multiply(double** A, double** B, double** C);

int main(int argc, char* argv[])
{
	int rows = 2, cols = 2;
	
	// memory allocation
	double** A = new double* [rows];
	double** B = new double* [rows];
	double** C = new double* [rows];
	
	for (int i=0; i<rows; i++)
	{
		A[i] = new double [cols];
		B[i] = new double [cols];
		C[i] = new double [cols];				
	}
	
	// setting some entries
	A[0][0] = 3.0; A[0][1] = 2.0;
	A[1][0] = 3.0; A[1][1] = 2.0;
	
	B[0][0] = 1.0; B[0][1] = 2.0;
	B[1][0] = 1.0; B[1][1] = 2.0;
	
	std::cout << "Rows: " << sizeof(A)/sizeof(A[0]) << std::endl;
	std::cout << "Cols: " << sizeof(A[0])/sizeof(A[0][0]) << std::endl;
	
	
	Multiply(A,B,C);
	
	// deallocate memory
	for (int i=0; i<rows; i++)
	{
		delete[] A[i];
		delete[] B[i];
		delete[] C[i];
	}
	delete[] A;
	delete[] B;
	delete[] C;
	
}

void Multiply(double** A, double** B, double** C)
{
	int cols_A, rows_B; //must be equal
	
	cols_A = sizeof(A[0])/sizeof(A[0][0]);
	rows_B = sizeof(B)/sizeof(B[0]);
	assert(cols_A == rows_B);
	
	
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
	
}



