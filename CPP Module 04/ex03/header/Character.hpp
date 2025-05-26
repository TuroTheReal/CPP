#pragma once

#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		AMateria*	_inventory[4];
		AMateria*	_unused[10];
		std::string	_name;
		Character(){}

	public:
		Character(std::string);
		Character(Character const& copy);
		~Character();

		Character&	operator=(Character const& rhs);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		void addUnused(AMateria* m);
};