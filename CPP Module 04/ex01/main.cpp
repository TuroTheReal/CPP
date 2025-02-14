#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "WrongCat.hpp"

int main(){

	int	siz = 10;
	Animal* zoo[siz];

	for (int i = 0; i < siz; i++)
	{
		if (i < siz / 2)
			zoo[i] = new Dog();
		else
			zoo[i] = new Cat();
	}

	zoo[0]->makeSound();
	zoo[9]->makeSound();

	((Cat *)zoo[7])->getBrain()->setIdea("Croquette");

	Cat* copy = new Cat(*(Cat*)zoo[7]);

	copy->getBrain()->setIdea("Double");
	copy->getBrain()->setIdea("Wemby");
	copy->getBrain()->setIdea("Pammukale");

	((Cat *)zoo[7])->getBrain()->setIdea("Saumon");

	std::cout << "ORIGINAL         " << ((Cat *)zoo[7])->getBrain()->getIdea(0)
    << " " << ((Cat *)zoo[7])->getBrain()->getIdea(1) << std::endl;

	std::cout << "COPY         " << copy->getBrain()->getIdea(0)
	<< " " << copy->getBrain()->getIdea(1)
	<< " " << copy->getBrain()->getIdea(2)
	<< " " << copy->getBrain()->getIdea(3) << std::endl;

	delete copy;

	for (int i = 0; i < siz; i++)
		delete zoo[i];
		
	return 0;
}
