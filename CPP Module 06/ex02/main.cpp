#include "header/Base.hpp"

Base* generate(void){
	srand(static_cast<unsigned int>(time(0)));

	int random = rand() % 3;

	switch (random)
	{
		case 0:
			std::cout << "A created." << std::endl;
			return new A();
		case 1:
			std::cout << "B created." << std::endl;
			return new B();
		case 2:
			std::cout << "C created." << std::endl;
			return new C();
		default:
			return NULL;
	}
}

void	identify(Base* p){
	if (dynamic_cast<A*>(p))
		std::cout << "By ptr : It's an A." << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "By ptr : It's an B." << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "By ptr : It's an C." << std::endl;
	else
		std::cout << "By ptr : Not a Base type." << std::endl;
}

void	identify(Base &p){
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "By Ref : It's an A." << std::endl;
		return;
	}
	catch (std::exception& e) {}

	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "By Ref : It's an B." << std::endl;
		return;
	}
	catch (std::exception& e) {}

	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "By Ref : It's an C." << std::endl;
		return;
	}
	catch (std::exception& e) {}

	std::cout << "By Ref : Not a Base type." << std::endl;
}

int main(){

	Base* je = generate();

	identify(je);
	identify(*je);

	delete je;

	return 0;
}
