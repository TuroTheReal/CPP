#include "Contact.hpp"

Contact::Contact(void){
}

Contact::~Contact(void){
}

void Contact::set_name(const std::string& str){
	this->_name = str;
}

void Contact::set_family_name(const std::string& str){
	this->_family_name = str;
}

void Contact::set_nickname(const std::string& str){
	this->_nickname = str;
}

void Contact::set_phone_number(const std::string& str){
	this->_phone_number = str;
}

void Contact::set_darkest_secret(const std::string& str){
	this->_darkest_secret = str;
}

std::string Contact::get_name(){
	return _name;
}

std::string Contact::get_family_name(){
	return _family_name;
}

std::string Contact::get_nickname(){
	return _nickname;
}

std::string Contact::get_phone_number(){
	return _phone_number;
}

std::string Contact::get_darkest_secret(){
	return _darkest_secret;
}