#include "Zombie.hpp"

Zombie::Zombie(){
	std::cout << "A zombie has appeared." << std::endl;
}

Zombie::~Zombie(){
	std::cout << "A Zombie has died." << std::endl;
}

void Zombie::announce(){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name){
	this->_name = name;
}