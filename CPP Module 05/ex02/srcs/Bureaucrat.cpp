#include "header/Bureaucrat.hpp"

static void checkGrade(unsigned int grade){
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat() : _name("Unknown"), _grade(150){
	std::cout << "Default Const called for Bur" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name), _grade(grade){
	std::cout << "Param Const called for Bur" << std::endl;
	checkGrade(_grade);
}

Bureaucrat::Bureaucrat(Bureaucrat const& copy) :  _name(copy._name), _grade(copy._grade){
	std::cout << "Copy Const called for Bur" << std::endl;
	checkGrade(_grade);
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& rhs){
	std::cout << "Op = called for Bur" << std::endl;
	if (this != &rhs)
		this->_grade = rhs.getGrade();
	checkGrade(_grade);
	return *this;
}

std::string	Bureaucrat::getName() const{
	return this->_name;
}

unsigned int	Bureaucrat::getGrade() const{
	return this->_grade;
}

void	Bureaucrat::downGrade(){
	int newGrade = this->_grade + 1;
	checkGrade(newGrade);
	this->_grade = newGrade;
}

void	Bureaucrat::upGrade(){
	int newGrade = this->_grade - 1;
	checkGrade(newGrade);
	this->_grade = newGrade;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Dest called for Bur" << std::endl;
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat const& rhs){
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return o;
}

void	Bureaucrat::signAForm(AForm& Aform){
	try {
		Aform.beSigned(*this);
		std::cout << getName() << " signed " << Aform.getName() << "." << std::endl;
	}
	catch (const AForm::AlreadySigned& e) {
		std::cout << getName() << " couldn’t sign " << Aform.getName()
		<< " because " << e.what() << std::endl;
	}
	catch (const AForm::GradeTooLowException& e) {
		std::cout << getName() << " couldn’t sign " << Aform.getName()
		<< " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form){
	try {
		form.beExecuted(*this);
		std::cout << getName() << " executed " << form.getName() << "." << std::endl;
	}
	catch (const AForm::GradeTooLowException& e) {
		std::cout << getName() << " couldn’t execute " << form.getName()
		<< " because " << e.what() << std::endl;
	}
}