#include "header/MateriaSource.hpp"
#include "header/AMateria.hpp"

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
}


MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
		_inventory[i] = NULL;
	}
}

void MateriaSource::learnMateria(AMateria *m){
	for(int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m->clone();
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for(int i = 0; i < 4; i++)
	{
		if (_inventory[i] && type == _inventory[i]->getType())
			return _inventory[i]->clone();
	}
	return NULL;
}
