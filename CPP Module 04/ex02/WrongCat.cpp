#include "WrongCat.hpp"

WrongCat::WrongCat()
	: WrongAnimal::WrongAnimal("WrongCat"){
	this->type = WrongAnimal::type;
	std::cout << "WrongCat Constructor" << std::endl;
}

WrongCat::WrongCat(std::string type)
	: WrongAnimal::WrongAnimal(type){
		std::cout << "WrongCat STR Constructor" << std::endl;
}

WrongCat::WrongCat(WrongCat const& copy)
	: WrongAnimal::WrongAnimal(copy){
		std::cout << "WrongCat Copy Constructor" << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat Destructor" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const& rhs){
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

void	WrongCat::makeSound() const{
	std::cout << "WrongMiaou" << std::endl;
}
