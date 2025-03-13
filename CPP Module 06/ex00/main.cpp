#include "header/ScarlarConverter.hpp"

int main(int ac, char **av){
	if (ac == 2)
		return ScarlarConverter::convert(av[1]), 0;
	return 1;
}
