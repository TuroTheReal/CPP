#include "header/Intern.hpp"

Intern::Intern(){
	std::cout << "Default Const called for Intern" << std::endl;
}

Intern::Intern(Intern const& copy){
	std::cout << "Copy Const called for Intern" << std::endl;
	(void)copy;
}

Intern::~Intern(){
	std::cout << "Dest called for Intern" << std::endl;
}

Intern&	Intern::operator=(Intern const& rhs){
	std::cout << "Op = called for Intern" << std::endl;
	if (this != &rhs){}
	return *this;
}

AForm*	Intern::makeForm(std::string formName, std::string formTarget){

	std::string	tab[3] = {"PPForm", "RRForm", "SCForm"};

	int	index = 0;

	for (; index < 3; index++)
		if (tab[index] == formName)
			break;

	switch (index){
	case 0:
		std::cout << "Intern creates PPForm" << std::endl;
		return new PresidentialPardonForm(formTarget);
	case 1:
		std::cout << "Intern creates RRForm" << std::endl;
		return new RobotomyRequestForm(formTarget);
	case 2:
		std::cout << "Intern creates SCForm" << std::endl;
		return new ShrubberyCreationForm(formTarget);
	default:
		throw std::invalid_argument("Unknown form type: " + formName);
	}
	return NULL;
}