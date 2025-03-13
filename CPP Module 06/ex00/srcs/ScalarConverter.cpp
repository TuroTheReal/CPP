#include "header/ScarlarConverter.hpp"

ScalarConverter::ScalarConverter(){
std::cout << "Scarlar Dflt Const called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& copy){
	std::cout << "Scarlar Copy Const called" << std::endl;
}

~ScalarConverter::ScalarConverter(){
	std::cout << "Scarlar Dest called" << std::endl;
}

ScalarConverter::ScalarConverter& operator=(const ScalarConverter& rhs){
	std::cout << "Scarlar OP = called" << std::endl;
}

static void	ScalarConverter::convert(const std::string str){

}
