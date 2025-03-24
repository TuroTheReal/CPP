#pragma once

#include <iostream>
#include <stack>
#include <iterator>
#include <vector>
#include <list>
#include <map>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T> {
	public:

	MutantStack<T>() : std::stack<T>(){}
	MutantStack<T>(MutantStack<T> const& copy) : std::stack<T>(copy){}
	~MutantStack<T>(){}

	MutantStack&	operator=(MutantStack const& rhs){
		if (this != &rhs) { std::stack<T>::operator=(rhs);}
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_reverse_iterator;

	iterator				begin() { return this->c.begin(); }
	iterator				end() { return this->c.end(); }

	const_iterator			begin() const{ return this->c.begin(); }
	const_iterator			end() const{ return this->c.end(); }

	reverse_iterator		rbegin() { return this->c.rbegin(); }
	reverse_iterator		rend() { return this->c.rend(); }

	const_reverse_iterator	rbegin() const{ return this->c.rbegin(); }
	const_reverse_iterator	rend() const{ return this->c.rend(); }
};