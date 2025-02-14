#include "Dog.hpp"

Dog::Dog()
	: Animal::Animal(){
	this->type = "Dog";
	std::cout << "Dog Constructor" << std::endl;
}

Dog::Dog(std::string type)
	: Animal::Animal(type){
		std::cout << "Dog STR Constructor" << std::endl;
}

Dog::Dog(Dog const& copy)
	: Animal::Animal(copy){
		std::cout << "Dog Copy Constructor" << std::endl;
}

Dog::~Dog(){
	std::cout << "Dog Destructor" << std::endl;
}

Dog& Dog::operator=(Dog const& rhs){
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

void	Dog::makeSound() const{
	std::cout << "Woof" << std::endl;
}
