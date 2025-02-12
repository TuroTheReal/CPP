#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name){
		this->setPv(100);
		this->setMana(50);
		this->setAd(20);
		std::cout << "Player " << this->getName() << " ask ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& copy)
	: ClapTrap(copy){
	std::cout << "Scav Copy Constructor called for " << this->getName() << std::endl;}

ScavTrap::~ScavTrap(){
	std::cout << "Scavtrap has shutdown " << this->getName() << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& rhs){
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return *this;
}

void ScavTrap::attack(const std::string& target){
	if (this->getMana() > 0 || this->getPv() > 0)
	{
		std::cout << "ScavTrap " << this->getName() << " attacks " << target <<
		" causing, " << this->getAd() << " points of damage!" << std::endl;
		setMana(this->getMana() - 1);
	}
	else
	{
		if (this->getMana() <= 0)
		{
			std::cout << "ScavTrap " << this->getName() << " cannot attacks " << target <<
			" because he is out of mana!" << std::endl;
		}
		else
		{
			std::cout<< "ScavTrap " << this->getName() << " cannot attacks " << target <<
			" because he has no hp left!" << std::endl;
		}
	}
}

void	ScavTrap::guardGate(){
	std::cout << "Scavtrap " << this->getName() << " is now in Gate keeper mode!" << std::endl;
}
