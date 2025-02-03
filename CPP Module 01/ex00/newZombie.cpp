#include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name){
	Zombie* leNouveau = new Zombie(name);
	leNouveau->announce();
	return leNouveau;
}