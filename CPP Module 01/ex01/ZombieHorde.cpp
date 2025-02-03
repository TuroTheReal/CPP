#include "Zombie.hpp"

Zombie* Zombie::ZombieHorde(int N, std::string name){
	if (N <= 0)
	{
		std::cout<< "No zombie in the area!" << std::endl;
		return NULL;
	}
	Zombie* Horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		Horde[i].setName(name);
		Horde[i].announce();
	}
	return Horde;
}
