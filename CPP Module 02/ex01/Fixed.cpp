#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num) : _value(num.toInt) {
		std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const float num) : _value(num.toFloat) {
		std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& copy){
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
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

// float	Fixed::toFloat(void) const{
// }

// int	Fixed::toInt(void) const{
// }

// std::ostream& operator<<(std::ostream& o, Fixed const& rhs){
// }