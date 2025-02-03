#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
	private:
	std::string _name;
	void announce(void);

	public:
	Zombie();
	~Zombie();

	void	setName(std::string name);
	Zombie*	ZombieHorde(int N, std::string name);
};
#endif