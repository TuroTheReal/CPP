#pragma once

#include <iostream>

template <typename T>
class Array {
	public:
		Array():_element(NULL), _size(0){}


		Array(unsigned int n) : _size(n){ _element = new T[n]();}


		Array(const Array& copy) : _size(copy._size){
			_element = new T[_size];
			for (unsigned int i = 0; i < _size ; i++)
				_element[i] = copy._element[i];
		}


		~Array(){ if (_element){delete [] _element;};}


		Array& operator=(const Array& rhs){
			if (this != &rhs)
			{
				if (_element != NULL)
					delete [] this->_element;
				_size = rhs._size;
				_element = new T[_size];
				for (unsigned int i = 0; i < _size ; i++)
					_element[i] = rhs._element[i];
			}
			return *this;
		}


		T& operator[](unsigned int index) const {
			if (index >= _size)
				throw std::exception();
			return _element[index];
		}


		unsigned int	size() const {return _size;}


	private:
		T*				_element;
		unsigned int	_size;
};