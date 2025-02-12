#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{

	public:
		ScavTrap(std::string);
		ScavTrap(ScavTrap const&);
		ScavTrap();
		~ScavTrap();

		ScavTrap&	operator=(ScavTrap const& rhs);

		void		guardGate();
		void		attack(const std::string& target);
};

#endif
