#include "Zombie.hpp"

int main(){
	Zombie *zomb = NULL;
	zomb = zomb->newZombie("by newZombie");
	zomb->randomChump("by randomChump");
	delete zomb;
	return (0);
}