#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& copy){
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=(Fixed const& rhs){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits called" << std::endl;
	return this->_value;
}

void	Fixed::setRawBits(int const raw){
	this->_value = raw;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}