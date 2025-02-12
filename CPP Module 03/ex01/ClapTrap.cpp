#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _pv(10), _mana(10), _ad(0){
	std::cout << "Player " << this->_name << " has spawn" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& copy){
	std::cout << "Copy Constructor called" << std::endl;
	*this = copy;
}


ClapTrap&	ClapTrap::operator=(ClapTrap const& rhs){
	std::cout << "Copy assignment called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_pv = rhs.getPv();
		this->_mana = rhs.getMana();
		this->_ad = rhs.getAd();
	}
	return *this;
}

ClapTrap::~ClapTrap(){
	std::cout << "Player " << this->_name << " has been slayed" << std::endl;
}

std::string ClapTrap::getName() const{
	return this->_name;
}

int ClapTrap::getPv() const{
	return this->_pv;
}

int ClapTrap::getMana() const{
	return this->_mana;
}

int ClapTrap::getAd() const{
	return this->_ad;
}

void ClapTrap::setPv(int num){
	this->_pv = num;
}

void ClapTrap::setMana(int num){
	this->_mana = num;
}

void ClapTrap::setAd(int num){
	this->_ad = num;
}

void ClapTrap::attack(const std::string& target){
	if (this->_mana > 0 || this->_pv > 0)
	{
		std::cout << this->_name << " attacks " << target <<
		" causing, " << this->_ad << " points of damage!" << std::endl;
		this->_mana--;
	}
	else
	{
		if (this->_mana <= 0)
		{
			std::cout << this->_name << " cannot attacks " << target <<
			" because he is out of mana!" << std::endl;
		}
		else
		{
			std::cout << this->_name << " cannot attacks " << target <<
			" because he has no hp left!" << std::endl;
		}
	}
}

void ClapTrap::takeDamage(unsigned int amount){
		std::cout << this->_name << " has lost " << amount << " hp!" << std::endl;
		this->_pv -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
		std::cout << this->_name << " has repaired " << amount << " hp!" << std::endl;
		this->_pv += amount;
}