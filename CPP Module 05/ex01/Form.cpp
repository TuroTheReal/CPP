#include "Form.hpp"

static void checkGrade(unsigned int toSign, unsigned int toExec){
	if (toSign > 150)
		throw Form::GradeTooLowException();
	if (toSign < 1)
		throw Form::GradeTooHighException();
	if (toExec > 150)
		throw Form::GradeTooLowException();
	if (toExec < 1)
		throw Form::GradeTooHighException();
}
Form::Form() : _name("Unknow"), _isSigned(0), _rGradeSign(88), _rGradeExec(8){
	std::cout << "Default Const called" << std::endl;
}

Form::Form(std::string name, unsigned int isSigned, \
unsigned int rGradeSign, unsigned int rGradeExec) :
_name(name), _isSigned(isSigned), _rGradeSign(rGradeSign), _rGradeExec(rGradeExec){
	std::cout << "Param Const called" << std::endl;
	checkGrade(_rGradeSign, _rGradeExec);
}

Form::Form(Form const& copy) :
_name(copy._name), _isSigned(copy._isSigned), _rGradeSign(copy._rGradeSign), _rGradeExec(copy._rGradeExec){
	std::cout << "Copy Const called" << std::endl;
	checkGrade(_rGradeSign, _rGradeExec);
}

Form&	Form::operator=(Form const& rhs){
	std::cout << "Op = called" << std::endl;

	if (this != &rhs)
		_isSigned = rhs.getIsSigned();
	checkGrade(_rGradeSign, _rGradeExec);
	return *this;
}

Form::~Form(){
	std::cout << "Dest called" << std::endl;
}

void	Form::beSigned(Bureaucrat& Bureau){
	if (_isSigned)
		throw Form::AlreadySigned();
	if (Bureau.getGrade() <= _rGradeSign)
		_isSigned = 1;
	else
		throw Form::GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& o, Form const& rhs){
	o << "Form " << rhs.getName();
	if (rhs.getIsSigned() == 0)
		o << " is not signed." << "\n";
	else
		o << " is signed." << "\n";
	o << "can be sign by grade " << rhs.getRGradeSign() << "." << "\n";
	o << "can be exec by grade " << rhs.getRGradeExec() << "." << "\n";;
	return o;
}
