#include "Cat.hpp"

Cat::Cat()
	: Animal::Animal(){
	this->type = "Cat";
	std::cout << "Cat Constructor" << std::endl;
}

Cat::Cat(std::string type)
	: Animal::Animal(type){
		std::cout << "Cat STR Constructor" << std::endl;
}

Cat::Cat(Cat const& copy)
	: Animal(copy){
		std::cout << "Cat Copy Constructor" << std::endl;
}

Cat::~Cat(){
	std::cout << "Cat Destructor" << std::endl;
}

Cat& Cat::operator=(Cat const& rhs){
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

void	Cat::makeSound() const{
	std::cout << "Miaou" << std::endl;
}
