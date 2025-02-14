#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{
	protected:
		std::string type;

	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const& copy);
		virtual ~WrongAnimal();

		std::string		getType() const;
		WrongAnimal&	operator=(WrongAnimal const& rhs);
		void			makeSound() const;
};

#endif