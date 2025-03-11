#include "header/PresidentialPardonForm.hpp"
#include "header/RobotomyRequestForm.hpp"
#include "header/ShrubberyCreationForm.hpp"

int main(){

	Bureaucrat BriceDeNice("BriceDeNice", 150);
	Bureaucrat DedeElBaron("DedeElBaron", 54);
	Bureaucrat GusLeSang("GusLeSang", 1);

	ShrubberyCreationForm Larbre("BriceDeNice");
	RobotomyRequestForm Robot("DedeElBaron");
	PresidentialPardonForm Zidane("GusLeSang");
	PresidentialPardonForm Tyty(Zidane);


	std::cout << GusLeSang << std::endl;
	std::cout << DedeElBaron << std::endl;
	std::cout << BriceDeNice << std::endl;
	std::cout << "Zidane :" << Zidane << std::endl;
	std::cout << "Tyty :" << Tyty << std::endl;
	std::cout << "Robot :" << Robot << std::endl;
	std::cout << "Larbre :" << Larbre << std::endl;

	try {
		GusLeSang.signAForm(Zidane);
		std::cout << "Zidane :" << Zidane << std::endl;

		Zidane.execute(BriceDeNice);
		
		Tyty.execute(BriceDeNice);
		Robot.execute(DedeElBaron);
		Larbre.execute(BriceDeNice);
	}
	catch (AForm::AlreadySigned &e){
		std::cout << e.what() << std::endl;
	}
	catch (AForm::GradeTooHighException &e){
		std::cout << e.what() << std::endl;
	}

	try {
		Tyty.execute(GusLeSang);

		Robot.execute(GusLeSang);
		Robot.execute(GusLeSang);
		Robot.execute(GusLeSang);
		Robot.execute(GusLeSang);
		Robot.execute(GusLeSang);
		Robot.execute(GusLeSang);
		Robot.execute(GusLeSang);

		Larbre.execute(GusLeSang);
	}
	catch (AForm::AlreadySigned &e){
		std::cout << e.what() << std::endl;
	}
	catch (AForm::GradeTooHighException &e){
		std::cout << e.what() << std::endl;
	}

	DedeElBaron.executeForm(Larbre);
	DedeElBaron.executeForm(Robot);
	DedeElBaron.executeForm(Zidane);

	return 0;
}