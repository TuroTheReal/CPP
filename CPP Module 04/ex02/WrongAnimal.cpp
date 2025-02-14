#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Inconnu"){
	std::cout << "WrongAnimal Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type){
	std::cout << "WrongAnimal STR Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& copy){
	*this = copy;
		std::cout << "WrongAnimal Copy Constructor" << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal Destructor" << std::endl;
}

std::string	WrongAnimal::getType() const{
	return this->type;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& rhs){
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

void	WrongAnimal::makeSound() const{
	std::cout << "*WrongAnimal noise*" << std::endl;
}
