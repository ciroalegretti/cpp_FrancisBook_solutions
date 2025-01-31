#include <iostream>
#include <string>

int main(int argc, char* argv [])
{

	std::string firstName;
	std::string lastName;
	
	std::cout << "Enter your first name and press RETURN: \n";
	std::getline(std::cin, firstName);
	
	std::cout << "Enter you last name and press RETURN: \n";
	std::getline(std::cin, lastName);
	
	std::cout << "Your name is: \t" << firstName << " " << lastName << "\n";

	return 0;
}
