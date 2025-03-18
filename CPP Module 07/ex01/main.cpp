#include "Iter.hpp"

int	main(){

	std::string A[] = {"Salut", "ca", "va", "?"};

	int B[] = {1, 10, 26, 1996};

	::iter(A, 3, to_do<std::string>);

	::iter<int>(B, 4, to_do<int>);

	return 0;
}