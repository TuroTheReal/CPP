#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {

	public:
		Contact();
		~Contact();
		void		set_name(const std::string& str);
		void		set_family_name(const std::string& str);
		void		set_nickname(const std::string& str);
		void		set_phone_number(const std::string& str);
		void		set_darkest_secret(const std::string& str);
		std::string	get_name();
		std::string	get_family_name();
		std::string	get_nickname();
		std::string	get_phone_number();
		std::string	get_darkest_secret();

	private:
	std::string	_name;
	std::string	_family_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
};
#endif