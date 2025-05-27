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
	{
		if (copy._inventory[i])
			_inventory[i] = copy._inventory[i]->clone();
	}
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
		{
			if (rhs._inventory[i])
				_inventory[i] = rhs._inventory[i]->clone();
		}
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
			_inventory[i] = m;
			return;
		}
	}
	delete m;
}

void Character::addUnused(AMateria* m){
	for (int i = 0; i < 10; i++){
		if (_unused[i] == NULL){
			_unused[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx){
	if (!idx || idx >= 4)
		return;
	if (_inventory[idx]){
		addUnused(_inventory[idx]);
		_inventory[idx] = NULL;
	}
}


void Character::use(int idx, ICharacter& target){
	if (idx >= 0 && idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
}

Character::~Character(){
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
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
