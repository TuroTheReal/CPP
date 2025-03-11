#include "header/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm ("SCFrom", 0, 145, 137){
	std::cout << "Default Const called for SCFrom" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("SCFrom", 0, 145, 137), _target(target){
	std::cout << "Param Const called for SCFrom" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& copy)
	: AForm(copy), _target(copy._target){
	std::cout << "Copy Const called for SCFrom" << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const& rhs){
	std::cout << "Op = called for SCFrom" << std::endl;

	if (this != &rhs)
	{
		AForm::operator=(rhs);
		_target = rhs._target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "Dest called for SCFrom" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (getIsSigned())
		throw AForm::AlreadySigned();
	if (executor.getGrade() > getRGradeExec())
		throw AForm::GradeTooHighException();

	std::ofstream outFile((_target + "_shrubbery").c_str());
	if (!outFile)
		std::cerr << "Error: cannot create output file." << std::endl;
	outFile << "        *\n";
	outFile << "       ***\n";
	outFile << "      *****\n";
	outFile << "     *******\n";
	outFile << "    *********\n";
	outFile << "       |||\n";
	outFile.close();
	std::cout << _target + "_shrubbery" << " file has been created." << std::endl;
}