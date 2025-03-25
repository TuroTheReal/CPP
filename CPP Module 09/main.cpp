#include "BitcoinExchange.hpp"

int main (int ac, char **av)
{
	if (ac == 2)
	{
		// charge le csv
		// if openable getline av[1](input.txt)
		// check line 1 = date | value
		// check fmt de la ligne
		// si bon vas cherche la date exeacte ou la precedente plus proche et return la vlue du Bitcoin
		// multiplie la valeur du bitcoin du csv par la value de linput
		return 0;
	}
	return std::cout << "Error: could not open file" << std::endl, 1;
}