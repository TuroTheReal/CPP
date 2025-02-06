#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed() : _value(0) {
}

Fixed::Fixed(const int num){
		this->_value = num << _bits;
}

Fixed::Fixed(const float num){
		this->_value = roundf(num * (1 << _bits));
}

Fixed::Fixed(Fixed const& copy){
	*this = copy;
}

Fixed::~Fixed(){
}

Fixed& Fixed::operator=(Fixed const& rhs){
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const {
	return this->_value;
}

void	Fixed::setRawBits(int const raw){
	this->_value = raw;
}

float	Fixed::toFloat(void) const{
	return (float)this->_value / (float)(1 << _bits);
}

int	Fixed::toInt(void) const{
	return this->_value >> _bits;
}

std::ostream& operator<<(std::ostream& o, Fixed const& rhs){
	o << rhs.toFloat();
	return o;
}

// New from subject

//Arithmetic
Fixed	Fixed::operator+(Fixed const& rhs) const{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(Fixed const& rhs) const{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(Fixed const& rhs) const{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(Fixed const& rhs) const{
	return Fixed(this->toFloat() / rhs.toFloat());
}

//Comparaison
bool	Fixed::operator>(Fixed const& rhs) const{
	return this->getRawBits() > rhs.getRawBits();
}

bool	Fixed::operator<(Fixed const& rhs) const{
	return this->getRawBits() < rhs.getRawBits();
}

bool	Fixed::operator>=(Fixed const& rhs) const{
	return this->getRawBits() >= rhs.getRawBits();
}

bool	Fixed::operator<=(Fixed const& rhs) const{
	return this->getRawBits() <= rhs.getRawBits();
}

bool	Fixed::operator==(Fixed const& rhs) const{
	return this->getRawBits() == rhs.getRawBits();
}

bool	Fixed::operator!=(Fixed const& rhs) const{
	return this->getRawBits() != rhs.getRawBits();
}

// Incrementation & Decrementation
Fixed&	Fixed::operator++() {
	this->_value++;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp(*this);
	operator++();
	return tmp;
}

Fixed&	Fixed::operator--() {
	this->_value--;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp(*this);
	operator--();
	return tmp;
}

Fixed&	Fixed::min(Fixed& a, Fixed& b){
	return (a < b) ? a : b;
}

Fixed const&	Fixed::min(Fixed const& a, Fixed const& b){
		return (a < b) ? a : b;
}

Fixed&	Fixed::max(Fixed& a, Fixed& b){
	return (a > b) ? a : b;
}

Fixed const&	Fixed::max(Fixed const& a, Fixed const& b){
		return (a > b) ? a : b;
}
