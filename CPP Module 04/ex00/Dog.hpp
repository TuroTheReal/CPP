#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal{
	public:
		Dog();
		Dog(std::string type);
		Dog(Dog const& copy);
		~Dog();

		Dog&	operator=(Dog const& rhs);
		void	makeSound() const;
};

#endif