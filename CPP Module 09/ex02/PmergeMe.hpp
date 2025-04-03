#pragma once

#include <iostream>
#include <sstream>
#include <vector>
#include <deque>
#include <algorithm>
#include <climits>
#include <cmath>
#include <ctime>

class PmergeMe {
	private:
		unsigned int const			_siz;
		std::vector<unsigned int>	_vec;
		std::deque<unsigned int>	_deq;
		char **						_av;
		clock_t						_vstart;
		clock_t						_dstart;
		clock_t						_vend;
		clock_t						_dend;

		PmergeMe();

	public:
		PmergeMe(char **, int);
		PmergeMe(PmergeMe const& copy);
		~PmergeMe(){}
		PmergeMe& operator=(PmergeMe const& rhs);

		void parseInput();
		void display();
		void sortVec();
		void sortDeq();
};