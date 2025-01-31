#include <iostream>
#include <fstream>
#include <cassert>
#include <cmath>
#include <iomanip>

int main(int argc, char* argv[])
{

	int rows = 2, cols = 2;
	double** A;		// two pointers for each matrix
	double** B;
	double** C;	

	for (int k = 0; k < 1e9; k++)
	{
	A = new double* [rows];  // allocate memory for each row 
	B = new double* [rows];
	C = new double* [rows];
	for (int i = 0; i < rows; i++)
	{
		A[i] = new double [cols];	// allocate memory for each col inside each row
		B[i] = new double [cols];
		C[i] = new double [cols];
	}
	
	
	A[0][0] = 1.0;
	A[0][1] = 2.0;
	A[1][0] = 3.0;
	A[1][1] = 4.0;
	
	B[0][0] = 0.0;
	B[0][1] = 0.0;
	B[1][0] = 0.0;
	B[1][1] = 0.0;
	
	for (int i=0; i<2; i++)
	{
		for (int j=0; j<2; j++)
		{
		C[i][j] = A[i][j] + B[i][j];
		std::cout << "Entry " << i << j << " is " << C[i][j] << std::endl;
		}
	}
	
	for (int i=0; i<2; i++)
	{
		delete[] A[i]; // deallocating cols
		delete[] B[i];
		delete[] C[i];
	}
	
	
	
	delete[] A; // deallocating rows
	delete[] B;
	delete[] C;
	
	}
	
	return 0;
}
