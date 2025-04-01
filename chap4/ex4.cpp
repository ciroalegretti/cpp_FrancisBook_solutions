#include <iostream>

int main(int argc, char* argv[])
{
    // pointer declaration
    double** A;
    double** B;
    double** C;

    for (int k=0; k<1e9; k++)
    {
        // dynamic memory allocation
        A = new double* [2];
        B = new double* [2];
        C = new double* [2];

        for (int i=0;i<2;i++)
        {
	    A[i] = new double [2];
	    B[i] = new double [2];
	    C[i] = new double [2];
        }

        // assigning values
        for (int i=0; i<2; i++)
        {
	    for (int j=0; j<2; j++)
	    {
	        A[i][j] = 1.0;
	        B[i][j] = 2.0;
	    }
        }

        // Calculate C and print to console
        for (int i=0; i<2; i++)
        {
	    for (int j=0; j<2; j++)
	    {
    	        C[i][j] = A[i][j] + B[i][j];
	        //std::cout << C[i][j] << "\t";
	    }
        //std::cout << "\n";
        }

        // memory deallocation
        for (int i=0;i<2;i++)
        {
	    delete[] A[i];
	    delete[] B[i];
	    delete[] C[i];
        }
        delete[] A;
        delete[] B;
        delete[] C;
    }

    return 0;
}
