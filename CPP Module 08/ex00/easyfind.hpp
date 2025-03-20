#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>

template<typename T>
typename T::iterator easyfind (T & cont, int val){
	typename T::iterator it = std::find(cont.begin(), cont.end(),val);
	if (it == cont.end())
		throw std::exception();
	else
		return it;
}