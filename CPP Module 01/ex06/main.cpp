#include "Harl.hpp"

int	main(int ac, char **av){
	if (ac != 2){
		std::cout << "I don't understand what you are try to say." << std::endl;
		return 1;
	}
	Harl harl;
	harl.complain(av[1]);
	return 0;
}