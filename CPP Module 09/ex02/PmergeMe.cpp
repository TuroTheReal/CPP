#include "PmergeMe.hpp"

PmergeMe::PmergeMe(char **av, int siz) : _siz(siz), _av(av){
	_vec.reserve(_siz);
	parseInput();
	display();
}

PmergeMe::PmergeMe(PmergeMe const& copy) : _siz(copy._siz), _vec(copy._vec), _deq(copy._deq), _av(copy._av){
}

PmergeMe& PmergeMe::operator=(PmergeMe const& rhs){
	if (this != &rhs)
	{
		this->_vec = rhs._vec;
	}
	return *this;
}

void PmergeMe::display(){

	std::vector<unsigned int>::iterator it = _vec.begin();
	std::vector<unsigned int>::iterator ite = _vec.end();

	std::cout << "Before:	  ";
	for (size_t i = 1; i < _siz; i++)
		std::cout << _av[i] << " ";
	std::cout << std::endl;

	// PRINT VECTOR

	std::cout << "After:	  ";
	for (; it != ite; it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	// PRINT TIME
	std::cout << "Time to process a range of " << (_siz - 1) << " elements with std::vector : " << static_cast<double>(_vend - _vstart) / CLOCKS_PER_SEC << std::endl;
	std::cout << "Time to process a range of " << (_siz - 1) << " elements with std::deque : " << static_cast<double>(_dend - _dstart) / CLOCKS_PER_SEC << std::endl;
}

void PmergeMe::parseInput(){
	for (size_t i = 1; i < _siz; i++)
	{
		std::stringstream ss(_av[i]);
		long long	nb;

		while (ss >> nb)
		{
			if (nb < 0 || nb > INT_MAX)
			{
				if (nb < 0)
					std::cerr << "Error: Cannot sort negative number: " << nb << std::endl;
				else
					std::cerr << "Error: too big number: " << nb << std::endl;
				return ;
			}

			std::vector<unsigned int>::iterator it = std::find(_vec.begin(), _vec.end(), nb);
			if (it != _vec.end()){
				std::cerr << "Error: Cannot handle duplicate number: " << nb << std::endl;
				return ;
			}
			_vec.push_back(nb);
			_deq.push_back(nb);
		}
		if (!ss.eof())
		{
			ss.clear();
			std::string str;
			ss >> str;
			std::cerr << "Error: Invalid character: " << str << std::endl;
			return ;
		}
	}
}

void PmergeMe::sortVec(){
	_vstart = clock();

	_vend = clock();
}

void PmergeMe::sortDeq(){
	_dstart = clock();

	_dend = clock();
}