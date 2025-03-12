#include "header/Intern.hpp"

int main(){

	Intern someRandomIntern;
	AForm* wrong;
	AForm* rrf;

	try {
		rrf = someRandomIntern.makeForm("RRForm", "Bender");
		std::cout << *rrf << std::endl;

		delete rrf;
		rrf = someRandomIntern.makeForm("SCForm", "NaaaaaaN");
		std::cout << *rrf << std::endl;

		delete rrf;
		rrf = someRandomIntern.makeForm("PPForm", "Yo");
		std::cout << *rrf << std::endl;

		wrong = someRandomIntern.makeForm("Ouioui", "Bender");
		std::cout << *rrf << std::endl;

	}
	catch (const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	delete rrf;
	return 0;
}