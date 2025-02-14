#include "Brain.hpp"

Brain::Brain(){
	for (int i = 0; i < 100; i++)
		_ideas[i] = "";
	std::cout << "Brain Constructor" << std::endl;
}

Brain::Brain(std::string idea){
	for (int i = 0; i < 100; i++)
		_ideas[i] = "";
	_ideas[0] = idea;
	std::cout << "Brain STR Constructor" << std::endl;
}

Brain::Brain(Brain const& copy){
	*this = copy;
	std::cout << "Brain Copy Constructor" << std::endl;
}

Brain::~Brain(){
	std::cout << "Brain Destructor" << std::endl;
}

const std::string	Brain::getIdea(int index) const{
	return this->_ideas[index];
}

void	Brain::setIdea(std::string idea){
	for (int i = 0; i < 100; i++)
	{
		if (_ideas[i].empty())
		{
			_ideas[i] = idea;
			break;
		}
	}
}

Brain&	Brain::operator=(Brain const& rhs){
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}