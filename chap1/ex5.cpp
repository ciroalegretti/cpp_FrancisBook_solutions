#include <iostream>
#include <string>

int main(int argc, char* argv [])
{
	// memory allocation
	std::string firstName;
	std::string lastName;

	// value input 
	std::cout << "Enter your first name and press RETURN: \n";
	std::getline(std::cin, firstName);

	std::cout << "Enter you last name and press RETURN: \n";
	std::getline(std::cin, lastName);

	// result output
	std::cout << "Your name is: \t" << firstName << " " << lastName << "\n";

	return 0;
}
