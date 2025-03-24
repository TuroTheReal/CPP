#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>
#include <ctime>

class Span {

	private:

	public:
		unsigned int		_maxSize;
		std::vector<int>	_cont;
		Span();
		Span(unsigned int nb);
		Span(Span const& copy);
		~Span();

		Span& operator=(Span const& rhs);

		void	addNumber(int nb);

		template <typename Iterator>
		void	addMore(Iterator begin, Iterator end) {
			if (std::distance(begin, end) + _cont.size() > _maxSize)
				throw maxSizeExceeded();
			_cont.insert(_cont.end(), begin, end);
		}

		int		shortestSpan();
		int		longestSpan();

		class cannotFind : public std::exception {
			public:
				virtual const char* what() const throw()
					{ return "Cannot find occurence."; }
		};

		class maxSizeExceeded : public std::exception {
			public:
				virtual const char* what() const throw()
					{ return "Max size exceeded."; }
		};
};