#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{
	protected:
		std::string type;

	public:
		Animal();
		Animal(std::string type);
		Animal(Animal const& copy);
		virtual ~Animal();

		std::string		getType() const;
		Animal&			operator=(Animal const& rhs);
		virtual void	makeSound() const;
};

#endif