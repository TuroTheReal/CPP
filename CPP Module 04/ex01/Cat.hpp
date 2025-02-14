#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{

	private:
		Brain* _brain;

	public:
		Cat();
		Cat(std::string type);
		Cat(Cat const& copy);
		~Cat();

		Brain*	getBrain() const;
		Cat&	operator=(Cat const& rhs);
		void	makeSound() const;
};

#endif