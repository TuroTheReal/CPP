#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{

	private:
		Brain* _brain;

	public:
		Dog();
		Dog(std::string type);
		Dog(Dog const& copy);
		~Dog();

		Brain*	getBrain() const;
		Dog& operator=(Dog const& rhs);
		void	makeSound() const;
};

#endif