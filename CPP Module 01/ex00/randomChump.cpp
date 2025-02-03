#include "Zombie.hpp"

void Zombie::randomChump(std::string name){
	Zombie leRandom(name);
	leRandom.announce();
}