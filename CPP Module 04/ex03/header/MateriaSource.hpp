#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	_inventory[4];
		MateriaSource(std::string str){(void)str;}
		MateriaSource(MateriaSource const& copy){(void)copy;}
		MateriaSource& operator=(MateriaSource const& rhs){(void)rhs; return *this;}

	public:
		MateriaSource();
		~MateriaSource();

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};