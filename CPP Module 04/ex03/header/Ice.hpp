#pragma once

#include "AMateria.hpp"

class Ice : public AMateria {
	private:
		Ice(){}

	public:
		Ice(std::string const & type);
		Ice(Ice const & copy);
		~Ice (){}

		Ice& operator=(Ice const& rhs);

		std::string const & getType() const;
		Ice* clone() const;
		void use(Character& target);
};