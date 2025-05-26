#include "header/Ice.hpp"
#include "header/Character.hpp"

Ice::Ice(std::string const & type) : AMateria(type){
	if (type != "ice")
		throw std::invalid_argument("Wrong materia type" + type);
}

Ice::Ice(Ice const & copy) : AMateria(copy){}


Ice& Ice::operator=(Ice const& rhs){
	if (this != &rhs)
		AMateria::operator=(rhs);
	return *this;
}


std::string const & Ice::getType() const{
	return this->_type;
}

Ice* Ice::clone() const{
	Ice* copy = new Ice;
	return copy;
}

void Ice::use(Character& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
