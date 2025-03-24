#include "Span.hpp"

Span::Span() : _maxSize(0) { std::cout << "DFT const" << std::endl; }

Span::Span(unsigned int nb) : _maxSize(nb) {
	 std::cout << "PRM const" << std::endl;
	_cont.reserve(nb); // opti, reserve n bit
}

Span::Span(Span const& copy) : _maxSize(copy._maxSize) {
	std::cout << "CPY const" << std::endl;
	_cont = copy._cont;
}

Span::~Span() { std::cout << "Dest" << std::endl; }

Span&	Span::operator=(Span const& rhs) {
	std::cout << "OP=" << std::endl;
	if (this != &rhs)
	{
		if (rhs._cont.size() > _maxSize)
			throw maxSizeExceeded();
		_maxSize = rhs._maxSize;
		_cont = rhs._cont;
	}
	return *this;
}

void	Span::addNumber(int nb) {
	if (_cont.size() >= _maxSize)
		throw maxSizeExceeded();
	_cont.push_back(nb);
}

int	Span::shortestSpan() {
	if (_cont.size() < 2)
		throw cannotFind();
	std::vector<int> tmp = _cont;

	std::sort(tmp.begin(), tmp.end());

	int	to_ret = std::numeric_limits<int>::max();

	for (size_t i = 1; i < tmp.size(); i++)
	{
		int span = tmp[i] - tmp[i - 1];
		if (span < to_ret)
			to_ret = span;
	}
	return to_ret;
}

int	Span::longestSpan() {
	if (_cont.size() < 2)
		throw cannotFind();

	int min = *std::min_element(_cont.begin(), _cont.end());
	int max = *std::max_element(_cont.begin(), _cont.end());
	return max - min;
}
