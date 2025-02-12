#include "FragTrap.hpp"


FragTrap::FragTrap(){
		std::cout << "Frag Default Constructor called for " << this->_name << std::endl;
}

FragTrap::FragTrap(std::string name)
	: ClapTrap(name){
		this->_pv = 100;
		this->_mana = 100;
		this->_ad = 30;
		std::cout << "Player " << this->_name << " ask FragTrap" << std::endl;
}

FragTrap::FragTrap(FragTrap const& copy)
	: ClapTrap(copy){
	std::cout << "Frag Copy Constructor called for " << this->_name << std::endl;}

FragTrap::~FragTrap(){
	std::cout << "Fragtrap has shutdown " << this->_name << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const& rhs){
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return *this;
}

void	FragTrap::highFivesGuys(void){
	std::cout << "Fragtrap " << this->_name << ": Give me a five !" << std::endl;
}
