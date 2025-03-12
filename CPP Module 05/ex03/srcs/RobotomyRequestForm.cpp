#include "header/RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm()
	: AForm ("RRForm", 0, 72, 45){
	std::cout << "Default Const called for RRForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm("RRForm", 0, 72, 45), _target(target){
	std::cout << "Param Const called for RRForm" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& copy)
	: AForm(copy), _target(copy._target){
	std::cout << "Copy Const called for RRForm" << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const& rhs){
	std::cout << "Op = called for RRForm" << std::endl;

	if (this != &rhs)
	{
		AForm::operator=(rhs);
		_target = rhs._target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "Dest called for RRForm" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (getIsSigned())
		throw AForm::AlreadySigned();
	if (executor.getGrade() > getRGradeExec())
		throw AForm::GradeTooHighException();

	std::string	tab = "01";

	int randomIndex = rand() % 2;

	std::cout << "RANDOM NUMBER = " << randomIndex << std::endl;
	if (randomIndex == 0)
		std::cout << _target << " has been Robotomized." << std::endl;
	else
		std::cout << "Robotomization failed on " << _target << "." << std::endl;
}