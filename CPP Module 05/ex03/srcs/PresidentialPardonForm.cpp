#include "header/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: AForm ("PPForm", 0, 25, 5){
	std::cout << "Default Const called for PPForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm("PPForm", 0, 25, 5), _target(target){
	std::cout << "Param Const called for PPForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& copy)
	: AForm(copy), _target(copy._target){
	std::cout << "Copy Const called for PPForm" << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const& rhs){
	std::cout << "Op = called for PPForm" << std::endl;

	if (this != &rhs)
	{
		AForm::operator=(rhs);
		_target = rhs._target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "Dest called for PPForm" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (getIsSigned())
		throw AForm::AlreadySigned();
	if (executor.getGrade() > getRGradeExec())
		throw AForm::GradeTooHighException();

	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
