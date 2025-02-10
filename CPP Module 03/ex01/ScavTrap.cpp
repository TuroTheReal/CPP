#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name){
		this->_pv = 100;
		this->_mana = 50;
		this->_ad = 20;
		std::cout << "Player " << this->_name << " ask ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& copy)
	: ClapTrap(copy){
	std::cout << "Scav Copy Constructor called" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "Scavtrap shutdown " << this->_name << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& rhs){
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return *this;
}

//void		guardGate();
