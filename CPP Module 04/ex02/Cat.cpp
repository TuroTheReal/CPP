#include "Cat.hpp"

Cat::Cat()
	: AAnimal::AAnimal(), _brain(new Brain()){
	this->type = "Cat";
	std::cout << "Cat Constructor" << std::endl;
}

Cat::Cat(std::string type)
	: AAnimal::AAnimal(type), _brain(new Brain()){
		std::cout << "Cat STR Constructor" << std::endl;
}

Cat::Cat(Cat const& copy)
	: AAnimal(copy), _brain(new Brain(*copy._brain)){
		std::cout << "Cat Copy Constructor" << std::endl;
}

Cat::~Cat(){
	delete this->_brain;
	std::cout << "Cat Destructor" << std::endl;
}

Cat& Cat::operator=(Cat const& rhs){
	if (this != &rhs)
	{
		AAnimal::operator=(rhs);
		delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
	}
	return *this;
}

void	Cat::makeSound() const{
	std::cout << "Miaou" << std::endl;
}

Brain* Cat::getBrain()const{
	return this->_brain;
}