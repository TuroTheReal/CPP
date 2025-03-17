#pragma once

#include <iostream>
#include <limits>
#include <cmath>
#include <cctype>
#include <iomanip>

class ScalarConverter {
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& copy);
		~ScalarConverter();

		ScalarConverter& operator=(const ScalarConverter& rhs);

	public:
		static void	convert(const std::string str);
};
