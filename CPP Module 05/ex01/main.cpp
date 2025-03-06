#include "Bureaucrat.hpp"

int main(){

	// decla variable
	Bureaucrat	GinetteLaSirene("GinetteLaSirene", 148);
	Bureaucrat	GusleSang("GusLeSang", 1);

	Form	LaMaisonAPhuket("LaMaisonAPhuket", 0, 148, 1);
	Form	LeCondoABangkok("LeCondoABangkok", 0, 50, 10);
	Form	Lautre;
	Form	LeSuivant(LeCondoABangkok);
	Lautre = LeCondoABangkok;

	// print actuel
	std::cout << Lautre << std::endl;
	std::cout << LeCondoABangkok << std::endl;
	std::cout << LaMaisonAPhuket << std::endl;
	std::cout << LeSuivant << std::endl;

	// check grade pour signed
	GinetteLaSirene.signForm(Lautre);
	GinetteLaSirene.signForm(LeCondoABangkok);
	GinetteLaSirene.signForm(LaMaisonAPhuket);
	GinetteLaSirene.signForm(LeSuivant);

	std::cout << LaMaisonAPhuket << std::endl;
	std::cout << LeCondoABangkok << std::endl;
	std::cout << Lautre << std::endl;
	std::cout << LeSuivant << std::endl;

	// check signed ou pas
	GusleSang.signForm(Lautre);
	GusleSang.signForm(LeCondoABangkok);
	GusleSang.signForm(LaMaisonAPhuket);
	GusleSang.signForm(LeSuivant);

	std::cout << LaMaisonAPhuket << std::endl;
	std::cout << LeCondoABangkok << std::endl;
	std::cout << Lautre << std::endl;
	std::cout << LeSuivant << std::endl;

	return 0;
}