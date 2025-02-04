#include <iostream>
#include <cmath>

int main(int argc, char* argv [])
{

	// declaring variables
	double vect1[3] = {1.0,2.0,3.0};
	double vect2[3] = {4.0,5.0,6.0};
	double inProd;
	double norm1,norm2;

	// manipulation
	inProd = vect1[0]*vect2[0] + vect1[1]*vect2[1] + vect1[2]*vect2[2];

	norm1 = sqrt(pow(vect1[0],2) + pow(vect1[1],2) + pow(vect1[2],2));
	norm2 = sqrt(pow(vect2[0],2) + pow(vect2[1],2) + pow(vect2[2],2));

	// output to terminal
	std::cout << "The inner product between the vectors is " << inProd;
	std::cout << "\n";
	std::cout << "The first vector norm is " << norm1;
	std::cout << "\n";
	std::cout << "The second vector norm is " << norm2;
	std::cout << "\n";

	return 0;
}
