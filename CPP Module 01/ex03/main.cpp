#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main()
{
	Weapon gun;
	Weapon bow;

	HumanA AGun(gun, "A");
	HumanA BBow(bow, "B");
	HumanB CHand("C");
	HumanB DGun("D");
	HumanB EBow("E");

	gun.setType("gun");
	bow.setType("bow");

	DGun.setWeapon(gun);
	EBow.setWeapon(bow);

	AGun.attack();
	BBow.attack();
	CHand.attack();
	DGun.attack();
	EBow.attack();
	return (0);
}