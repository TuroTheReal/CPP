#include "Template.hpp"

int	main(){

	int a = 26;
	int b = 10;

	std::cout << "A = " << a << std::endl;
	std::cout << "B = " << b << std::endl;

	std::cout << "MAX = " <<  ::max(a,b) << std::endl;
	std::cout << "MIN = " <<  ::min<int>(a,b) << std::endl;

	::swap<int>(a,b);

	std::cout << "A = " << a << std::endl;
	std::cout << "B = " << b << std::endl;


	std::string as = "Salut";
	std::string bs = "LeSang";

	std::cout << "As = " << as << std::endl;
	std::cout << "Bs = " << bs << std::endl;

	std::cout << "MAX = " <<  ::max(as,bs) << std::endl;
	std::cout << "MIN = " <<  ::min<std::string>(as,bs) << std::endl;

	::swap<std::string>(as,bs);

	std::cout << "As = " << as << std::endl;
	std::cout << "Bs = " << bs << std::endl;

	return 0;
}

// int main( void ) {
// 	int a = 2;
// 	int b = 3;
// 	::swap( a, b );
// 	std::cout << "a = " << a << ", b = " << b << std::endl;
// 	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// 	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
// 	::swap(c, d);
// 	std::cout << "c = " << c << ", d = " << d << std::endl;
// 	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// 	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// 	return 0;
// }