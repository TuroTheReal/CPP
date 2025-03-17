#include "header/ScalarConverter.hpp"

int main(int ac, char **av){
	if (ac == 2)
		return ScalarConverter::convert(av[1]), 0;
	else
		std::cout << "Input must be : .ScarlarConverter to_convert" << std::endl;
	return 1;
}
