#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "Scav Default Constructor called for " << this->_name << std::endl;
}


ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name){
		this->_pv = 100;
		this->_mana = 50;
		this->_ad = 20;
		std::cout << "Player " << this->_name << " ask ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& copy)
	: ClapTrap(copy){
	std::cout << "Scav Copy Constructor called for " << this->_name << std::endl;}

ScavTrap::~ScavTrap(){
	std::cout << "Scavtrap has shutdown " << this->_name << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& rhs){
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return *this;
}

void ScavTrap::attack(const std::string& target){
	if (this->_mana > 0 || this->_pv > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target <<
		" causing, " << this->_ad << " points of damage!" << std::endl;
		this->_mana--;
	}
	else
	{
		if (this->_mana <= 0)
		{
			std::cout << "ScavTrap " << this->_name << " cannot attacks " << target <<
			" because he is out of mana!" << std::endl;
		}
		else
		{
			std::cout<< "ScavTrap " << this->_name << " cannot attacks " << target <<
			" because he has no hp left!" << std::endl;
		}
	}
}

void	ScavTrap::guardGate(){
	std::cout << "Scavtrap " << this->_name << " is now in Gate keeper mode!" << std::endl;
}
