#include <iostream>
#include <cmath>

int main(int argc, char* argv [])
{
	double A[2][2] = {{1.0,2.0} , {3.0,4.0}};
	double B[2][2] = {{1.0,1.0} , {1.0,1.0}};
	double C[2][2];
	double D[2][2];

	C[0][0] = A[0][0] + B[0][0];
	C[1][0] = A[1][0] + B[1][0];
	C[0][1] = A[0][1] + B[0][1];
	C[1][1] = A[1][1] + B[1][1];
	
	D[0][0] = A[0][0]*B[0][0] + A[0][1]*B[1][0];
	D[0][1] = A[0][0]*B[0][1] + A[0][1]*B[1][1];
	D[1][0] = A[1][0]*B[0][0] + A[1][1]*B[1][0];
	D[1][1] = A[1][0]*B[0][1] + A[1][1]*B[1][1];

	std::cout << "Entries for matrix C: \n";
	std::cout << C[0][0] << "\t" << C[0][1] << "\n" ;
	std::cout << C[1][0] << "\t" << C[1][1] << "\n" ;

	std::cout << "Entries for matrix D: \n";
	std::cout << D[0][0] << "\t" << D[0][1] << "\n" ;
	std::cout << D[1][0] << "\t" << D[1][1] << "\n" ;


	return 0;
}
