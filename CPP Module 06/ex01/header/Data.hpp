#pragma once

#include <iostream>

class Data {

	public:
		int age;
		std::string const name;
		Data();
		Data(int age, std::string const name);
		Data(const Data& copy);
		~Data();

		Data& operator=(const Data& rhs);
};
