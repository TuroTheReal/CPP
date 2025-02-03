#ifndef WEAPON_CPP
#define WEAPON_CPP

#include <iostream>

class Weapon{
	private:
		std::string _type;

	public:
		void setType(std::string const& type);
		Weapon();
		~Weapon();
		std::string const& getType();
};
#endif