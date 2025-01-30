#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main()
{
	std::string	input;
	PhoneBook phonebook;
	while (!std::cin.eof())
	{
		std::cout<<"Welcome to MyPhone, what you want to do?"<<std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
			phonebook.create(phonebook);
		if (input == "SEARCH")
			phonebook.search(phonebook);
		if (input == "EXIT")
			break;
	}
	return (0);
}