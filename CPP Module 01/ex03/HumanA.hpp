#ifndef HUMANA_CPP
#define HUMANA_CPP

#include <iostream>
#include "Weapon.hpp"

class HumanA{
	private:
		Weapon& _weapon;
		std::string _name;

	public:
		HumanA(Weapon& weapon, std::string name);
		~HumanA();
		void attack();
};
#endif