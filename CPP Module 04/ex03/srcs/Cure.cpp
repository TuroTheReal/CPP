#include "header/Cure.hpp"
#include "header/Character.hpp"

Cure::Cure() : AMateria("cure"){}

Cure::Cure(std::string const & type) : AMateria(type){
	if (type != "cure")
		std::cout << "Wrong materia type: " << type << std::endl;
}

Cure::Cure(Cure const & copy) : AMateria(copy){}


Cure& Cure::operator=(Cure const& rhs){
	if (this != &rhs)
		AMateria::operator=(rhs);
	return *this;
}


std::string const & Cure::getType() const{
	return this->_type;
}

Cure* Cure::clone() const{
	Cure* copy = new Cure;
	return copy;
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds*" << std::endl;
}