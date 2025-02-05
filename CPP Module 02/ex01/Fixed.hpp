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

		Fixed&			operator=(Fixed const& rhs); // operator overloaded

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream&	operator<<(std::ostream& o, Fixed const& rhs);

#endif