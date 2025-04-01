#include "BitcoinExchange.hpp"

int main (int ac, char **av)
{
	if (ac == 2)
	{
		BitcoinExchange getInfo(av[1]);
		return 0;
	}
	return std::cout << "Error: could not open file" << std::endl, 1;
}