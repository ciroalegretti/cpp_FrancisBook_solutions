#include <iostream>
#include <cmath>

void meanAndStd(double* mean, double* std, double values[]);

int main(int argc, char* argv[])
{
	double mean;		// start double
	double std;		// start double
	double* p_mean;
	double* p_std;
	
	// get adresses to pointers
	p_mean = &mean;
	p_std = &std;
	
	double values[5] = {1.0, 1.1, 0.9, 0.8, 1.05};

	meanAndStd(p_mean,p_std,values);

	std::cout << "Mean = " << mean << std::endl;
	std::cout << "STD = " << std << std::endl;

}

void meanAndStd(double* mean, double* std, double values[])
//-----------------------------------------------------------
//  Recieves values array and pointers for mean and std
//	calculates and modify contents (de-references)
//	pointers for mean and std
//-----------------------------------------------------------
{
	double sum, deviance;
	
	for (int i=0; i<5; i++)
	{
		sum += values[i];
	}
	*mean = sum/5;		// de-referencing mean

	for (int i=0; i<5; i++)
	{
		deviance += pow(values[i] - *mean,2);
	}
	deviance /= 4;
	*std = sqrt(deviance);	// de-referencing std

}

