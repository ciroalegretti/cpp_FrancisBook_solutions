#include <iostream>

int main(int argc, char* argv[])
{
    // pointer-to-array (double) declaration
    double* vec1;
    double* vec2;

    // run 1.000.000.000 to assess memory management
    //for (int i=0; i<1e+9; i++)
    {
        // dyn. mem. alloc. for pointers (array's first element)
        vec1 = new double [3];
        vec2 = new double [3];

        // assigning arbitrary values
        for (int i=0; i<3; i++)
        {
            vec1[i] = i;	// (0,1,2)
            vec2[i] = 2*i;	// (0,2,4)
        }

        // dot-product declaration and calculation
        double dot_prod;

        for (int i=0; i<3; i++)
        {
            dot_prod += vec1[i]*vec2[i];
        }

        std::cout << "Dot product = " << dot_prod << "\n";

        // memory de-allocation
        delete[] vec1;
        delete[] vec2;
    }

    return 0;
}
