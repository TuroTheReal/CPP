#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

	protected:
		std::string	_name;
		int			_pv;
		int			_mana;
		int			_ad;

	public:
		ClapTrap(std::string);
		ClapTrap(ClapTrap const&);
		ClapTrap();
		~ClapTrap();

		ClapTrap&	operator=(ClapTrap const& rhs);

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		int			getPv() const;
		int			getMana() const;
		int			getAd() const;
		std::string	getName() const;

		void		setPv(int num);
		void		setMana(int num);
		void		setAd(int num);

};

#endif
