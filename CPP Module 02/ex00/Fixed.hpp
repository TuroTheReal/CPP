#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{

	private:
		int					_value;
		static int const	bits = 8;

	public:
		Fixed(); // construtor by default
		Fixed(Fixed const& copy); // constructor by copy
		~Fixed();

		Fixed&	operator=(Fixed const& rhs); // operator overloaded

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};
#endif