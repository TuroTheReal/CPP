#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
	: ClapTrap(name){
		this->setPv(100);
		this->setMana(100);
		this->setAd(30);
		std::cout << "Player " << this->getName() << " ask FragTrap" << std::endl;
}

FragTrap::FragTrap(FragTrap const& copy)
	: ClapTrap(copy){
	std::cout << "Frag Copy Constructor called for " << this->getName() << std::endl;}

FragTrap::~FragTrap(){
	std::cout << "Fragtrap has shutdown " << this->getName() << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const& rhs){
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return *this;
}

void	FragTrap::highFivesGuys(void){
	std::cout << "Fragtrap " << this->getName() << ": Give me a five !" << std::endl;
}
