#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
		std::cout << "Diamond Default Constructor called for " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"){
		this->_name = name;
		this->_pv = 100;
		this->_mana = 50;
		this->_ad = 30;
		std::cout << "Player " << _name << " asks DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& copy)
	: ClapTrap(copy), ScavTrap(copy), FragTrap(copy), _name(copy._name){
	std::cout << "Diamond Copy Constructor called for " << this->_name << std::endl;
	*this = copy;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const& rhs){
	if (this != &rhs) {
		ClapTrap::operator=(rhs);
		_name = rhs._name;
	}
	return *this;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "Diamond has shutdown " << this->_name << std::endl;
}

void	DiamondTrap::whoAmI(){
	std::cout << "My name is " << this->_name << " and my ClapTrap name is "
	<< ClapTrap::getName() << std::endl;
}