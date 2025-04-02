#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <iomanip> // precision output , fixed empeche nota scientifique

class PmergeMe {
	private:
		unsigned int const			_siz;
		std::vector<unsigned int>	_vec;
		std::deque<unsigned int>	_deq;
		PmergeMe();

	public:
		PmergeMe(char **input);
		PmergeMe(PmergeMe const& copy);
		~PmergeMe(){}
		PmergeMe& operator=(PmergeMe const& rhs);
};