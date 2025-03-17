#include "header/ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter& copy){(void)copy;}

ScalarConverter::~ScalarConverter(){}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& rhs){
	if (this != &rhs){}
	return *this;
}

static void	printError(const std::string str){
	std::cout << "Cannot display : " << str << "." << std::endl;
}

static void	printChar(const std::string str){
std::cout << "INFO : printChar" << std::endl;

	if (str[0] < 32 || str[0] == 127)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : '" << str << "'" << std::endl;
	std::cout << "int : " << static_cast<int>(str[0]) << std::endl;
	std::cout << "float : " << static_cast<float>(str[0]) << ".0f" << std::endl;
	std::cout << "double : " << static_cast<double>(str[0]) << ".0" << std::endl;
}

static void	printFloat(const std::string str){
	std::cout << "INFO : printFloat" << std::endl;

	float	nb = atof(str.c_str()); // c_str : converti de const std::string vers const char *

	if (nb < 0 || nb > 127)
		std::cout << "char : Impossible" << std::endl;
	else if (nb < 32 || nb == 127)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : '" << static_cast<char>(nb) << "'"  << std::endl;
	std::cout << "int : " << static_cast<int>(nb) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float : " << static_cast<float>(nb) << "f" << std::endl;
	std::cout << "double : " << static_cast<double>(nb) << std::endl;
}

static void	printDouble(const std::string str){
	std::cout << "INFO : printDouble" << std::endl;

	char *end;

	double nb = strtod(str.c_str(), &end);
	if (nb != '\0')
		printError(str);

	if (nb < 0 || nb > 127)
		std::cout << "char : Impossible" << std::endl;
	else if (nb < 32 || nb == 127)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : '" << static_cast<char>(nb) << "'" << std::endl;
	std::cout << "int : " << static_cast<int>(nb) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float : " << static_cast<float>(nb) << "f" << std::endl;
	std::cout << "double : " << static_cast<double>(nb) << std::endl;
}

static void	printInt(const std::string str){
	std::cout << "INFO : printInt" << std::endl;

	int	nb = atoi(str.c_str());

	if (nb < 0 || nb > 127)
		std::cout << "char : Impossible" << std::endl;
	else if (nb < 32 || nb == 127)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : '" << static_cast<char>(nb) << "'"  << std::endl;
	std::cout << "int : " << static_cast<int>(nb) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float : " << static_cast<float>(nb) << "f" << std::endl;
	std::cout << "double : " << static_cast<double>(nb) << std::endl;
}

static void	edgeCase(const std::string str){
	std::cout << "INFO : edgeCase" << std::endl;

	if (str.length() == 1)
		printChar(str);
	else if (str == "+inf" || str == "+inff"){
		std::cout << "char :  impossible" << std::endl;
		std::cout << "int : " << std::numeric_limits<int>::max() << std::endl;
		std::cout << "float : " << std::numeric_limits<float>::max() << std::endl;
		std::cout << "double : " << std::numeric_limits<double>::max() << std::endl;
	}

	else if (str == "-inf" || str == "-inff"){
		std::cout << "char :  impossible" << std::endl;
		std::cout << "int : " << std::numeric_limits<int>::min() <<std::endl;
		std::cout << "float : " << std::numeric_limits<float>::min() << std::endl;
		std::cout << "double : " << std::numeric_limits<double>::min() << std::endl;
	}

	else if (str == "nan" || str == "nanf"){
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : nanf" << std::endl;
		std::cout << "double : nan" << std::endl;
	}

	else
		printError(str);
}

void	ScalarConverter::convert(const std::string str){


	if (!std::isdigit(str[0]) && std::isprint(str[0]))
	edgeCase(str);

	else if (str.length() - 1 == 'f')
	{
		long unsigned i = 0;

		while (i < str.length() - 1 && (std::isdigit(str[i]) || str[i] == '.'))
			i++;
		if (i == str.length() - 1)
			printFloat(str);
		else
			printError(str);
	}
	else if (str.find('.') != std::string::npos)
	{
		long unsigned i = 0;

		while (std::isdigit(str[i]) || str[i] == '.')
			i++;
		if (i == str.length())
			printDouble(str);
		else
			printError(str);
	}
	else if (std::isdigit(str[0]))
	{
		long unsigned i = 0;

		while (i < str.length() && std::isdigit(str[i]))
			i++;
		if (i == str.length())
			printInt(str);
		else
			printError(str);
	}
	else
		printError(str);
}
