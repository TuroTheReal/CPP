#pragma once

#include <iostream>
#include <map>
#include <sstream>

class BitcoinExchange {
	private:
		std::map<std::string, float> _dataBase;

	public:
		BitcoinExchange(){}
		BitcoinExchange(BitcoinExchange const& copy) : _dataBase(copy._dataBase){}
		~BitcoinExchange(){}
		BitcoinExchange& operator=(BitcoinExchange const& rhs);

		void	loadCSV(std::string input);
		void	loadInput();
};