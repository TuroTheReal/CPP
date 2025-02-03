#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _weapon(NULL), _name(name){
}

HumanB::~HumanB(){
}

Weapon const& HumanB::getWeapon(){
	return *_weapon;
}

void HumanB::setWeapon(Weapon& weapon){
	_weapon = &weapon;
}


void HumanB::attack(){
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " attacks with their hands, because they don't have weapon" << std::endl;

}