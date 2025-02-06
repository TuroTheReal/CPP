#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{

	private:
		int					_value;
		static int const	_bits = 8;

	public:
		Fixed(); // construtor by default
		Fixed(const int num); // construtor by  int
		Fixed(const float num); // construtor by float
		Fixed(Fixed const& copy); // constructor by copy
		~Fixed();

		// Equal
		Fixed&	operator=(Fixed const& rhs); // operator overloaded

		// Arithmetic
		Fixed	operator+(Fixed const& rhs) const; // operator overloaded
		Fixed	operator-(Fixed const& rhs) const; // operator overloaded
		Fixed	operator*(Fixed const& rhs) const; // operator overloaded
		Fixed	operator/(Fixed const& rhs) const; // operator overloaded

		// Comparaison
		bool	operator>(Fixed const& rhs) const; // operator overloaded
		bool	operator<(Fixed const& rhs) const; // operator overloaded
		bool	operator>=(Fixed const& rhs) const; // operator overloaded
		bool	operator<=(Fixed const& rhs) const; // operator overloaded
		bool	operator==(Fixed const& rhs) const; // operator overloaded
		bool	operator!=(Fixed const& rhs) const; // operator overloaded

		// Incrementation & Decrementation
		Fixed	operator++(int); // post overloaded
		Fixed&	operator++(); // pre overloaded
		Fixed	operator--(int); // post overloaded
		Fixed&	operator--(); // pre overloaded

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed&		min(Fixed& a, Fixed& b);
		static Fixed const&	min(Fixed const& a, Fixed const& b);
		static Fixed&		max(Fixed& a, Fixed& b);
		static Fixed const&	max(Fixed const& a, Fixed const& b);
};

std::ostream&	operator<<(std::ostream& o, Fixed const& rhs);

#endif