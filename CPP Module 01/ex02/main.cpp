#include <iostream>

int	main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "Adress of string is : "<< &string << std::endl;
	std::cout << "Adress of stringPTR is : "<< stringPTR << std::endl;
	std::cout << "Adress of stringREF is : "<< &stringREF << std::endl;

	std::cout << "Value of string is : "<< string << std::endl;
	std::cout << "Value of stringPTR is : "<< *stringPTR << std::endl;
	std::cout << "Value of stringREF is : "<< stringREF << std::endl;
	return (0);
}