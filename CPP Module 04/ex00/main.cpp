#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(){
	Animal* a;
	Animal* b;
	Animal* c;

	const Animal* meta = new Animal();

	WrongAnimal *e;

	a = new Dog();
	std::cout << "Type is : " << a->getType() << " " << std::endl;
	a->makeSound();

	b = new Cat("Gus");
	std::cout << "Type is : " << b->getType() << " " << std::endl;
	b->makeSound();

	c = a;
	std::cout << "Type is : " << c->getType() << " " << std::endl;
	c->makeSound();

	Animal* d(b);
	std::cout << "Type is : " << d->getType() << " " << std::endl;
	d->makeSound();

	std::cout << "Type is : " << meta->getType() << " " << std::endl;
	meta->makeSound();

	e = new WrongCat();
	std::cout << "Type is : " << e->getType() << " " << std::endl;
	e->makeSound();

	delete e;
	delete meta;
	delete b;
	delete a;

	return 0;
}

// int main()
// {

// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();

// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;

// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound();
// 	meta->makeSound();

// 	delete meta;
// 	delete i;
// 	delete j;
// 	return 0;
// }