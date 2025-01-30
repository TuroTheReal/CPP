
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <sstream>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();
		void	create(PhoneBook& phonebook);
		void	add(Contact& contact);
		void	search(PhoneBook& phonebook);

	private:
		Contact _contact[8];
		int		_index;
		int		_oldest;
};

#endif