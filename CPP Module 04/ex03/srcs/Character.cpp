#include "header/Character.hpp"

Character::Character(std::string name) : _name(name){
	for (int i = 0; i < 4; ++i)
		_inventory[i] = NULL;
	for (int i = 0; i < 10; ++i)
		_unused[i] = NULL;
}

Character::Character(Character const& copy) : _name(copy._name){
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
		_inventory[i] = NULL;
	}
	for (int i = 0; i < 4; i++)
		_inventory[i] = copy._inventory[i]->clone();
	for (int i = 0; i < 10; i++)
	{
		if (_unused[i])
			delete _unused[i];
		_unused[i] = NULL;
	}
}

Character& Character::operator=(Character const& rhs){
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			_inventory[i] = NULL;
		}
		for (int i = 0; i < 4; i++)
			_inventory[i] = rhs._inventory[i]->clone();
		for (int i = 0; i < 10; i++)
		{
			if (_unused[i])
				delete _unused[i];
			_unused[i] = NULL;
		}
		this->_name = rhs._name;
	}
	return *this;
}

std::string const & Character::getName() const{
	return this->_name;
}

void Character::equip(AMateria* m){
	if (!m)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m->clone();
			break;
		}

	}
}

void Character::addUnused(AMateria* m){
	for (int i = 0; i < 10; i++){
		if (_unused[i] == NULL)
			_unused[i] = m;
	}
}

void Character::unequip(int idx){
	if (!idx)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (i == idx){
			addUnused(_inventory[i]);
			_inventory[i] = NULL;
			break;
		}
	}
}


void Character::use(int idx, ICharacter& target){
	for (int i = 0; i < 4; i++)
	{
		if (i == idx)
			_inventory[i]->use(target);
	}
}

Character::~Character(){
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
		_inventory[i] = NULL;
	}
	for (int i = 0; i < 10; i++)
	{
		if (_unused[i])
			delete _unused[i];
		_unused[i] = NULL;
	}
}
