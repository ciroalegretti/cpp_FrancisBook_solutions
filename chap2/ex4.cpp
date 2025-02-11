#include <iostream>

int main(int argc, char* argv[])
{

   double u[3] = {1.0, 2.0, 3.0};
   double v[3] = {6.0, 5.0, 4.0};
   double A[3][3] = {{1.0, 5.0, 0.0},
                     {7.0, 1.0, 2.0},
                     {0.0, 0.0, 1.0}};
   double B[3][3] = {{-2.0, 0.0, 1.0},
                     {1.0, 0.0, 0.0},
                     {4.0, 1.0, 0.0}};
   double w[3];

   double x[3], y[3], z[3];
   double C[3][3], D[3][3];


/*   // Calc x
   for (int i=0; i<3; i++)
   {
   x[i] = u[i] - v[i];

   std::cout << x[i] << "\n";
   }
*/

/*   // Calc y and z
   for (int i=0; i<3; i++)
   {
   	for (int j=0; j<3; j++)
   	{
//   	y[i] += A[i][j]*u[j];
   	z[i] += A[i][j]*u[j];
   	}

   z[i] -= v[i]; // if computed inside inner loop will be decrased by v[i] three times!
//   std::cout << z[i] << "\n";
   }
*/

/*   // Calc C
   for (int i=0; i<3; i++)
   {
   	for (int j=0; j<3; j++)
   	{
   	C[i][j] += 4*A[i][j] - 3*B[i][j];

	std::cout << C[i][j] << "\t";
   	}
   	std::cout << "\n";
   }
*/

   // Calc D
   for (int i=0; i<3; i++)
   {
       for (int j=0; j<3; j++)
       {
           for (int k=0; k<3; k++)
           {
           D[i][j] += A[i][k]*B[k][j];
           }
       std::cout << D[i][j] << "\t";
       }
   std::cout << "\n";
   }

   return 0;

}
