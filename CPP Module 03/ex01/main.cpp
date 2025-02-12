#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(){
	ScavTrap Skarner("Skarner");
	ScavTrap Azir(Skarner);

	std::cout << "Skarner pv = " << Skarner.getPv() << std::endl;
	std::cout << "Skarner mana = " << Skarner.getMana() << std::endl;
	std::cout << "Skarner ad = " << Skarner.getAd() << std::endl;

	std::cout << "Azir pv = " << Azir.getPv() << std::endl;
	std::cout << "Azir mana = " << Azir.getMana() << std::endl;
	std::cout << "Azir ad = " << Azir.getAd() << std::endl;

	Skarner.attack("Yumi");
	std::cout << "Skarner mana = " << Skarner.getMana() << std::endl;

	Skarner.takeDamage(99);
	std::cout << "Skarner hp = " << Skarner.getPv() << std::endl;

	Skarner.beRepaired(1);
	std::cout << "Skarner hp = " << Skarner.getPv() << std::endl;

	Skarner.guardGate();
	return 0;
}