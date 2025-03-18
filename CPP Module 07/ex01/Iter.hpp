#pragma once

#include <iostream>

template <typename T>
void	to_do(T const & value){
	std::cout << value << " " << std::endl;
}

template< typename T, typename U, typename V>
void iter(T* array, const U len,const V function){
	for (U i = 0; i < len; i++)
		function(array[i]);
}
