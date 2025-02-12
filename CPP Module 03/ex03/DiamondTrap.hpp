#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{

	private:
		std::string _name;

	public:
		DiamondTrap(std::string);
		DiamondTrap(DiamondTrap const&);
		DiamondTrap();
		~DiamondTrap();

		DiamondTrap&	operator=(DiamondTrap const& rhs);

		using			ScavTrap::attack;
		using			ClapTrap::operator=;
		void			whoAmI();
};

#endif
