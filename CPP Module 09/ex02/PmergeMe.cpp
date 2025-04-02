#include "PmergeMe.hpp"

PmergeMe::PmergeMe(char **input){
}

PmergeMe::PmergeMe(PmergeMe const& copy) : _vec(copy._vec), _deq(copy._deq){
}

PmergeMe& PmergeMe::operator=(PmergeMe const& rhs){
	if (this != &rhs)
	{
		this->_vec = rhs._vec;
	}
	return *this;
}
