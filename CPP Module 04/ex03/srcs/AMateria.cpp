#include "header/AMateria.hpp"

AMateria::AMateria() : _type("default"){}

AMateria::AMateria(std::string const & type) : _type(type){}

AMateria::AMateria(AMateria const & copy) : _type(copy.getType()){};

AMateria& AMateria::operator=(AMateria const& rhs){
	if (this != &rhs)
		this->_type = rhs.getType();
	return *this;
}

std::string const& AMateria::getType() const{
	return this->_type;
}

void AMateria::use(ICharacter& target){
	(void)target;
	std::cout << "Something happen" << std::endl;
}