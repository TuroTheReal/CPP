#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	_inventory[4];

	public:
		MateriaSource(){}
		MateriaSource(std::string);
		MateriaSource(MateriaSource const& copy);
		~MateriaSource();

		MateriaSource& operator=(MateriaSource const& rhs);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};