#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(){
	FragTrap Nidalee("Nidalee");
	FragTrap Shaco(Nidalee);

	std::cout << "Nidalee pv = " << Nidalee.getPv() << std::endl;
	std::cout << "Nidalee mana = " << Nidalee.getMana() << std::endl;
	std::cout << "Nidalee ad = " << Nidalee.getAd() << std::endl;

	std::cout << "Shaco pv = " << Shaco.getPv() << std::endl;
	std::cout << "Shaco mana = " << Shaco.getMana() << std::endl;
	std::cout << "Shaco ad = " << Shaco.getAd() << std::endl;

	Shaco.highFivesGuys();
	return 0;
}