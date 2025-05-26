#pragma once

#include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure();
		Cure(std::string const & type);
		Cure(Cure const & copy);
		~Cure (){}

		Cure& operator=(Cure const& rhs);

		std::string const & getType() const;
		Cure* clone() const;
		void use(ICharacter& target);
};