#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

	private:
		std::string	_name;
		int			_pv;
		int			_mana;
		int			_ad;

	public:
		ScavTrap(std::string);
		ScavTrap(ScavTrap const&);
		~ScavTrap();

		ScavTrap&	operator=(ScavTrap const& rhs);

		void		guardGate();
};

#endif
