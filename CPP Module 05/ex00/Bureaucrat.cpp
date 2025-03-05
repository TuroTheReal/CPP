#include "Bureaucrat.hpp"

static void checkGrade(int grade){
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat() : _name("Unknown"), _grade(150){
	std::cout << "Default Const called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name), _grade(grade){
	std::cout << "Param Const called" << std::endl;
	checkGrade(_grade);
}

Bureaucrat::Bureaucrat(Bureaucrat const& copy) :  _name(copy._name), _grade(copy._grade){
	std::cout << "Copy Const called" << std::endl;
	checkGrade(_grade);
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& rhs){
	std::cout << "Op = called" << std::endl;
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
	std::cout << "Dest called" << std::endl;
}

std::ostream&	operator<<(std::ostream& o, Bureaucrat const& rhs){
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return o;
}