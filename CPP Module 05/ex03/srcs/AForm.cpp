#include "header/AForm.hpp"
#include "header/Bureaucrat.hpp"

static void checkGrade(unsigned int toSign, unsigned int toExec){
	if (toSign > 150)
		throw AForm::GradeTooLowException();
	if (toSign < 1)
		throw AForm::GradeTooHighException();
	if (toExec > 150)
		throw AForm::GradeTooLowException();
	if (toExec < 1)
		throw AForm::GradeTooHighException();
}
AForm::AForm() : _name("Unknow"), _isSigned(0), _rGradeSign(88), _rGradeExec(8){
	std::cout << "Default Const called for Aform" << std::endl;
}

AForm::AForm(std::string name, unsigned int isSigned, \
unsigned int rGradeSign, unsigned int rGradeExec) :
_name(name), _isSigned(isSigned), _rGradeSign(rGradeSign), _rGradeExec(rGradeExec){
	std::cout << "Param Const called for Aform" << std::endl;
	checkGrade(_rGradeSign, _rGradeExec);
}

AForm::AForm(AForm const& copy) :
_name(copy._name), _isSigned(copy._isSigned), _rGradeSign(copy._rGradeSign), _rGradeExec(copy._rGradeExec){
	std::cout << "Copy Const called for Aform" << std::endl;
	checkGrade(_rGradeSign, _rGradeExec);
}

AForm&	AForm::operator=(AForm const& rhs){
	std::cout << "Op = called for Aform" << std::endl;

	if (this != &rhs)
		_isSigned = rhs.getIsSigned();
	checkGrade(_rGradeSign, _rGradeExec);
	return *this;
}

AForm::~AForm(){
	std::cout << "Dest called for Aform" << std::endl;
}

void	AForm::beSigned(Bureaucrat& Bureau){
	if (_isSigned)
		throw AForm::AlreadySigned();
	if (Bureau.getGrade() <= _rGradeSign)
		_isSigned = 1;
	else
		throw AForm::GradeTooLowException();
}

void	AForm::beExecuted(Bureaucrat const & Bureau) const {
	if (Bureau.getGrade() > _rGradeExec)
		throw AForm::GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& o, AForm const& rhs){
	o << "This form is " << rhs.getName();
	if (rhs.getIsSigned() == 0)
		o << " is not signed." << "\n";
	else
		o << " is signed." << "\n";
	o << "can be sign by grade " << rhs.getRGradeSign() << "." << "\n";
	o << "can be exec by grade " << rhs.getRGradeExec() << "." << "\n";;
	return o;
}
