#include "Harl.hpp"


Harl::Harl(){
}

Harl::~Harl(){
}

void Harl::debug(){
	std::cout << "[DEBUG] - I love having extra bacon for my 7XL-double-cheese-tripe-pickle-special ketchup burger. I really do!" << std::endl;
}

void Harl::info(){
	std::cout << "[INFO] - I cannot believe adding extra bacon costs more money. You didn\'t put enough bacon in my burger! If you did, I wouldn\'t be asking for more!" << std::endl;
}

void Harl::warning(){
	std::cout << "[WARNING] - I think I deserve to have some extra bacon for free. I\'ve been coming for years whereas you started here since last month." << std::endl;
}

void Harl::error(){
	std::cout << "[ERROR] - This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level){
	void (Harl::*message[4])() = \
	{&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string choose[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++){
		if (level == choose[i]){
			(this->*message[i])();
			return ;
		}
	}
		std::cerr << "Invalid level." << std::endl;
}
