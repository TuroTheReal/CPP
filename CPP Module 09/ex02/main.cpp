#include "PmergeMe.hpp"

int main (int ac, char **av)
{
	if (ac == 2)
	{
		PmergeMe sortInput();
		return 0;
	}
	return std::cerr << "Error: " << std::endl, 1;
}