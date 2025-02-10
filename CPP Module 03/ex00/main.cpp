#include "ClapTrap.hpp"

int	main(){
	ClapTrap Teemo("Teemo");
	ClapTrap Yumi(Teemo);

	std::cout << "Yumi name = " << Yumi.getName() << std::endl;
	std::cout << "Yumi hp = " << Yumi.getPv() << std::endl;
	std::cout << "Yumi mana = " << Yumi.getMana() << std::endl;
	std::cout << "Yumi ad = " << Yumi.getAd() << std::endl;

	std::cout << "Teemo mana = " << Teemo.getMana() << std::endl;

	Teemo.attack("Yumi");
	std::cout << "Teemo mana = " << Teemo.getMana() << std::endl;

	Teemo.takeDamage(8);
	std::cout << "Teemo hp = " << Teemo.getPv() << std::endl;

	Teemo.beRepaired(4);
	std::cout << "Teemo hp = " << Teemo.getPv() << std::endl;

	std::cout << "Teemo mana = " << Teemo.getMana() << std::endl;
	Teemo.attack("Yumi");
	std::cout << "Teemo mana = " << Teemo.getMana() << std::endl;
	Teemo.attack("Yumi");
	std::cout << "Teemo mana = " << Teemo.getMana() << std::endl;
	Teemo.attack("Yumi");
	std::cout << "Teemo mana = " << Teemo.getMana() << std::endl;
	Teemo.attack("Yumi");
	std::cout << "Teemo mana = " << Teemo.getMana() << std::endl;
	Teemo.attack("Yumi");
	std::cout << "Teemo mana = " << Teemo.getMana() << std::endl;
	Teemo.attack("Yumi");
	std::cout << "Teemo mana = " << Teemo.getMana() << std::endl;
	Teemo.attack("Yumi");
	std::cout << "Teemo mana = " << Teemo.getMana() << std::endl;
	Teemo.attack("Yumi");
	std::cout << "Teemo mana = " << Teemo.getMana() << std::endl;
	Teemo.attack("Yumi");
	std::cout << "Teemo mana = " << Teemo.getMana() << std::endl;
	Teemo.attack("Yumi");
	return 0;
}