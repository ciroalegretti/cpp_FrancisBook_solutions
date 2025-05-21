#include <iostream>
#include <cmath>

void meanAndStd(double& mean, double& std, double values[]);

int main(int argc, char* argv[])
{
	double mean;		// start double
	double std;		// start double
	double values[5] = {1.0, 1.1, 0.9, 0.8, 1.3};

	meanAndStd(mean,std,values);

	std::cout << "Mean = " << mean << std::endl;
	std::cout << "STD = " << std << std::endl;

}

void meanAndStd(double& mean, double& std, double values[])
{
	double sum, deviance;
	
	for (int i=0; i<5; i++)
	{
		sum += values[i];
	}
	mean = sum/5;

	for (int i=0; i<5; i++)
	{
		deviance += pow(values[i] - mean,2);
	}
	deviance /= 4;
	std = sqrt(deviance);

}
