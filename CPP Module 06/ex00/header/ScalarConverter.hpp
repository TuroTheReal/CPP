#pragma once

#include <iostream>
#include <limits> // numeric_limits<T> max/min
#include <cmath> // atol/i/f strtod
#include <cctype> // is_digit
#include <iomanip> // precision output , fixed empeche nota scientifique

class ScalarConverter {
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& copy);
		~ScalarConverter();

		ScalarConverter& operator=(const ScalarConverter& rhs);

	public:
		static void	convert(const std::string str);
};
