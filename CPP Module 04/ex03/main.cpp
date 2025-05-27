#include "header/MateriaSource.hpp"
#include "header/Cure.hpp"
#include "header/Ice.hpp"
#include "header/Character.hpp"

// int main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	delete bob;
// 	delete me;
// 	delete src;
// 	return 0;
// }

int main (void){

	ICharacter* Levi = new Character("Levi");
	ICharacter* Armin = new Character("Armin");

	IMateriaSource* ms = new MateriaSource();
	AMateria* m;
	AMateria* m2;

	ms->learnMateria(new Ice());
	ms->learnMateria(new Cure());

	m2 = ms->createMateria("ice");
	m = ms->createMateria("other"); //rien

	Levi->equip(m);
	m = ms->createMateria("ice");
	Levi->equip(m);
	m = ms->createMateria("cure");
	Levi->equip(m);
	m = ms->createMateria("ice");
	Levi->equip(m);
	m = ms->createMateria("cure");
	Levi->equip(m);
	Armin->equip(m2);

	Armin->use(0, *Levi);
	Levi->use(0, *Armin);
	Levi->use(1, *Armin);
	Levi->use(2, *Armin);
	Levi->use(3, *Armin);
	Levi->use(4, *Armin); // rien meme si index 4

	Levi->unequip(1);
	Levi->use(1, *Armin);

	Levi->unequip(1); // pas de leak meme au sol

	m = ms->createMateria("cure");
	Levi->equip(m);
	Levi->use(1, *Armin); //switch

	delete ms;
	delete Levi;
	delete Armin;
	return 0;
}