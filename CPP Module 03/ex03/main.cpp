#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(){
	DiamondTrap Faker("Faker");
	DiamondTrap Caliste(Faker);

	std::cout << "Faker pv = " << Faker.getPv() << std::endl;
	std::cout << "Faker mana = " << Faker.getMana() << std::endl;
	std::cout << "Faker ad = " << Faker.getAd() << std::endl;

	std::cout << "Caliste pv = " << Caliste.getPv() << std::endl;
	std::cout << "Caliste mana = " << Caliste.getMana() << std::endl;
	std::cout << "Caliste ad = " << Caliste.getAd() << std::endl;

	Faker.attack("Caliste");
	Caliste.whoAmI();
	Faker.whoAmI();

	return 0;
}