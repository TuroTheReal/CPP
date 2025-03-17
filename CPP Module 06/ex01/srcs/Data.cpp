#include "header/Data.hpp"

Data::Data(){}

Data::Data(int age, std::string const name) : age(age), name(name){}

Data::Data(const Data& copy) : age(copy.age), name(copy.name){}

Data& Data::operator=(const Data& rhs){
	if (this != &rhs)
		age = rhs.age;
	return *this;
}

Data::~Data(){}