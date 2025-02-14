#include "Animal.hpp"

AAnimal::AAnimal() : type("Animal"){
	std::cout << "Animal Constructor" << std::endl;
}

AAnimal::AAnimal(std::string type) : type(type){
	std::cout << "Animal STR Constructor" << std::endl;
}

AAnimal::AAnimal(AAnimal const& copy) : type(copy.type){
	std::cout << "Animal Copy Constructor" << std::endl;
}

std::string	AAnimal::getType() const{
	return this->type;
}

AAnimal::~AAnimal(){
	std::cout << "Animal Destructor" << std::endl;
}

AAnimal& AAnimal::operator=(AAnimal const& rhs){
	if (this != &rhs)
	{
		this->type = rhs.type;
	}
	return *this;
}
