#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void) : _index(0), _oldest(0){
	(void)_index;
	(void)_oldest;
}

PhoneBook::~PhoneBook(void){
}

static bool is_numeric(std::string& buff){
	for (size_t i = 0; i < buff.size(); i++)
		if (!std::isdigit(buff[i]))
			return 0;
	return 1;
}

static bool is_alpha(std::string& buff){
	for (size_t i = 0; i < buff.size(); i++)
		if (!std::isalpha(buff[i]) && buff[i] != ' ' && buff[i] != '\'')
			return 0;
	return 1;
}

static bool is_space_n_ap(std::string& buff){
	for (size_t i = 0; i < buff.size(); i++)
		if (buff[i] != ' ' && buff[i] != '\'')
			return 0;
	return 1;
}

static void empty_loop(std::string& buff, int option, int index){
	while (1){
		std::getline(std::cin, buff);
		if (std::cin.eof())
			exit(0);
		if (buff.empty()){
			std::cout <<"Input cannot be blank!"<< std::endl;
			continue;
		}
		if (option == 0){
			if (!is_alpha(buff) || is_space_n_ap(buff)){
				if (!is_alpha(buff))
					std::cout <<"Input must be only letters!"<< std::endl;
				else
					std::cout <<"Input cannot be only space or \"\'\"!"<< std::endl;
				continue;
			}
			break;
		}
		if (option == 1){
			if (!is_numeric(buff)){
				std::cout <<"Input must be only number!"<< std::endl;
				continue;
			}
			break;
		}
		if (option == 2){
			if (!is_numeric(buff)){
				std::cout <<"Input must be only number!"<< std::endl;
				continue;
			}
			std::stringstream str(buff);
			int num;
			str >> num;
			if (num >= 1 && num <= 8){
				if (num <= index)
					return;
				else
					std::cout <<"Cannot find this contact, please try again" << std::endl;
			}
			else
			std::cout <<"Input must be between 1 & 8, please try again!"<< std::endl;
		}
	}
}

void PhoneBook::create(PhoneBook& phonebook){
	Contact contact;
	std::string buff;

	std::cout <<"Please enter your name:" << std::endl;
	empty_loop(buff, 0, 0);
	contact.set_name(buff);

	std::cout <<"Please enter your family name:" << std::endl;
	empty_loop(buff, 0, 0);
	contact.set_family_name(buff);

	std::cout <<"Please enter your nick name:" << std::endl;
	empty_loop(buff, 0, 0);
	contact.set_nickname(buff);

	std::cout <<"Please enter your phone number:" << std::endl;
	empty_loop(buff, 1, 0);
	contact.set_phone_number(buff);

	std::cout <<"Please enter your darkest secret:" << std::endl;
	empty_loop(buff, 0, 0);
	contact.set_darkest_secret(buff);

	phonebook.add(contact);
}

void PhoneBook::add(Contact& contact){
	if(_index < 8){
		_contact[_index] = contact;
		_index++;
	}
	else{
		_contact[_oldest] = contact;
		_oldest = (_oldest + 1) % 8;
	}
}

static void render_name(const std::string& str){
	if (str.size() > 9)
		std::cout << str.substr(0, 9) << ".|";
	else
	{
		for (unsigned long i = 0; i < (10 - str.size()); i++)
			std::cout << " ";
		std::cout << str << "|";
	}

}

static void render_index(int index){
	std::cout<<"|         "<<index<<"|";
}

static void render_phone(PhoneBook& phonebook, int index, Contact tab[]){
	for (int i = 0; i < index; i++)
	{
		render_index(i + 1);
		render_name(tab[i].get_name());
		render_name(tab[i].get_family_name());
		render_name(tab[i].get_nickname());
		std::cout << std::endl;
	}
	(void)phonebook;
	(void)tab;
}

static void render_contact(Contact tab[],const std::string& buff){
	std::stringstream str(buff);
	int num;
	str >> num;

	std::cout <<"First Name: "<<tab[num - 1].get_name()<< std::endl;
	std::cout <<"Last Name: "<<tab[num - 1].get_family_name()<< std::endl;
	std::cout <<"Nickname: "<<tab[num - 1].get_nickname()<< std::endl;
	std::cout <<"Phone Number: "<<tab[num - 1].get_phone_number()<< std::endl;
	std::cout <<"Darkest Secret: "<<tab[num - 1].get_darkest_secret()<< std::endl;
}
void PhoneBook::search(PhoneBook& phonebook){
	std::string buff;

	if (_index < 1)
	{
		std::cout <<"No contact in MyPhone, please enter a contact." << std::endl;
		return;
	}

	std::cout <<"PhoneBook search called" << std::endl;
	std::cout <<"+----------+----------+----------+----------+"<< std::endl;
	std::cout <<"|     Index|First name| Last name|  Nickname|"<< std::endl;
	std::cout <<"+----------+----------+----------+----------+"<< std::endl;

	render_phone(phonebook, _index, _contact);

	std::cout <<"+----------+----------+----------+----------+"<< std::endl;

	std::cout <<"Please enter the index of the contact you wanna know more about:" << std::endl;
	empty_loop(buff, 2, _index);
	render_contact(_contact, buff);
}