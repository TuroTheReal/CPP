#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(){
	ClapTrap Teemo("Teemo");
	ScavTrap Skarner("Skarner");
	ScavTrap Azir(Skarner);

	FragTrap Nidalee("Nidalee");
	FragTrap Shaco(Nidalee);


	std::cout << "Teemo pv = " << Teemo.getPv() << std::endl;
	std::cout << "Teemo mana = " << Teemo.getMana() << std::endl;
	std::cout << "Teemo ad = " << Teemo.getAd() << std::endl;

	std::cout << "Skarner pv = " << Skarner.getPv() << std::endl;
	std::cout << "Skarner mana = " << Skarner.getMana() << std::endl;
	std::cout << "Skarner ad = " << Skarner.getAd() << std::endl;

	std::cout << "Azir pv = " << Azir.getPv() << std::endl;
	std::cout << "Azir mana = " << Azir.getMana() << std::endl;
	std::cout << "Azir ad = " << Azir.getAd() << std::endl;


	std::cout << "Nidalee pv = " << Nidalee.getPv() << std::endl;
	std::cout << "Nidalee mana = " << Nidalee.getMana() << std::endl;
	std::cout << "Nidalee ad = " << Nidalee.getAd() << std::endl;

	std::cout << "Shaco pv = " << Shaco.getPv() << std::endl;
	std::cout << "Shaco mana = " << Shaco.getMana() << std::endl;
	std::cout << "Shaco ad = " << Shaco.getAd() << std::endl;

	Skarner.attack("Yumi");
	std::cout << "Skarner mana = " << Skarner.getMana() << std::endl;

	Skarner.takeDamage(99);
	std::cout << "Skarner hp = " << Skarner.getPv() << std::endl;

	Skarner.beRepaired(1);
	std::cout << "Skarner hp = " << Skarner.getPv() << std::endl;


	std::cout << "Teemo mana = " << Teemo.getMana() << std::endl;

	Teemo.attack("Yumi");
	std::cout << "Teemo mana = " << Teemo.getMana() << std::endl;

	Teemo.takeDamage(8);
	std::cout << "Teemo hp = " << Teemo.getPv() << std::endl;

	Teemo.beRepaired(4);
	std::cout << "Teemo hp = " << Teemo.getPv() << std::endl;

	Skarner.guardGate();
	Shaco.highFivesGuys();
	return 0;
}