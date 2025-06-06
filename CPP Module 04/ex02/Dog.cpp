#include "Dog.hpp"

Dog::Dog()
	: AAnimal::AAnimal(), _brain(new Brain()){
	this->type = "Dog";
	std::cout << "Dog Constructor" << std::endl;
}

Dog::Dog(std::string type)
	: AAnimal::AAnimal(type), _brain(new Brain()){
		std::cout << "Dog STR Constructor" << std::endl;
}

Dog::Dog(Dog const& copy)
	: AAnimal(copy), _brain(new Brain(*copy._brain)){
		std::cout << "Dog Copy Constructor" << std::endl;
}

Dog::~Dog(){
	delete this->_brain;
	std::cout << "Dog Destructor" << std::endl;
}

Dog& Dog::operator=(Dog const& rhs){
	if (this != &rhs)
	{
		AAnimal::operator=(rhs);
		delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
	}
	return *this;
}

void	Dog::makeSound() const{
	std::cout << "Miaou" << std::endl;
}

Brain* Dog::getBrain()const{
	return this->_brain;
}