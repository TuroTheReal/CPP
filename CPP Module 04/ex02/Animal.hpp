#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal{
	protected:
		std::string type;

	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(AAnimal const& copy);
		virtual ~AAnimal();

		std::string		getType() const;
		AAnimal&			operator=(AAnimal const& rhs);
		virtual void	makeSound() const = 0;
};

#endif