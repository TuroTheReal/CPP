#include "Animal.hpp"

Animal::Animal() : type("Animal"){
	std::cout << "Animal Constructor" << std::endl;
}

Animal::Animal(std::string type) : type(type){
	std::cout << "Animal STR Constructor" << std::endl;
}

Animal::Animal(Animal const& copy) : type(copy.type){
	// *this = copy;
	std::cout << "Animal Copy Constructor" << std::endl;
}

std::string	Animal::getType() const{
	return this->type;
}

Animal::~Animal(){
	std::cout << "Animal Destructor" << std::endl;
}

Animal& Animal::operator=(Animal const& rhs){
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return *this;
}

void	Animal::makeSound() const{
	std::cout << "*Animal noise*" << std::endl;
}
