#include "Bureaucrat.hpp"

int main(){

	// init au dessus dans un try
	try {
		Bureaucrat	JosephineLeFrigo("JosephineLeFrigo", 155);
	}
	catch(Bureaucrat::GradeTooLowException& e){
		std::cerr << e.what() << std::endl;
	}

	// decla variable
	Bureaucrat	JeanLaFrite;
	Bureaucrat	JacqueLaFrape("JacqueLaFrape", 149);
	JeanLaFrite = JacqueLaFrape;
	Bureaucrat	GusleSang("GusLeSang", 2);

	// print actuel
	std::cout << JacqueLaFrape << std::endl;
	std::cout << JeanLaFrite << std::endl;
	std::cout << GusleSang << std::endl;

	// 1er cas = too high, too low ignore
	try {
		GusleSang.upGrade();
		JeanLaFrite.upGrade();
		JacqueLaFrape.downGrade();
		GusleSang.upGrade(); // trop haut
		JacqueLaFrape.downGrade(); // trop bas
	}
	catch(Bureaucrat::GradeTooHighException& e){
		std::cerr << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException& e){
		std::cerr << e.what() << std::endl;
	}

	// print actuel
	std::cout << JacqueLaFrape << std::endl;
	std::cout << JeanLaFrite << std::endl;
	std::cout << GusleSang << std::endl;

	// 2eme cas = deux downGrade, 1 avant 1 apres
	try {
		GusleSang.downGrade();
		JacqueLaFrape.downGrade(); // trop bas
		GusleSang.downGrade();
	}
	catch(Bureaucrat::GradeTooHighException& e){
		std::cerr << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException& e){
		std::cerr << e.what() << std::endl;
	}

	// print actuel
	std::cout << JacqueLaFrape << std::endl;
	std::cout << JeanLaFrite << std::endl;
	std::cout << GusleSang << std::endl;

	return 0;
}