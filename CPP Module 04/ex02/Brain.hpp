#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{

	private:
		std::string _ideas[100];

	public:
		Brain();
		Brain(std::string type);
		Brain(Brain const& copy);
		~Brain();

		const std::string	getIdea(int index) const;
		void				setIdea(std::string idea);
		Brain&				operator=(Brain const& rhs);
};

#endif