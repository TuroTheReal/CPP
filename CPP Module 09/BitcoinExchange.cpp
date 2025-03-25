#include "BitcoinExchange.hpp"

BitcoinExchange & BitcoinExchange::operator=(BitcoinExchange const& rhs){
	if (this != &rhs)
		_dataBase = rhs._dataBase;
	return *this;
}