#pragma once
#include <string>
#include <iostream>

class ICharacter;

class AMateria{
	protected:
		std::string _type;

		public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const & copy);
		virtual ~AMateria (){}

		AMateria& operator=(AMateria const& rhs);

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};