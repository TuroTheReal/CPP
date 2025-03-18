#include "Array.hpp"

int	main(){

	Array<float> empty;

	std::cout << "Empty size = " << empty.size() << std::endl;

	try {
		std::cout << "Empty = " << empty[1] << std::endl;

	}
	catch (std::exception &e)
	{
		std::cout << "erreur attrapee pour operator[] " << e.what() << std::endl;
	}

	Array<std::string> Jean(2);

	Jean[0] = "Arthur";
	Jean[1] = "le boss";

	Array<std::string> LeSang(Jean);


	for (int i = 0; i < 2; i++){
		std::cout << "Jean = " << Jean[i] << std::endl;
		std::cout << "LeSang = " << LeSang[i] << std::endl;
	}

	LeSang[0] = "Gus";
	LeSang[1] = "LeChat";

	for (int i = 0; i < 2; i++){
		std::cout << "Jean = " << Jean[i] << std::endl;
		std::cout << "LeSang = " << LeSang[i] << std::endl;
	}

	Array<int>Jacques(4);

	for (int i = 0; i < 4; i++)
		std::cout << Jacques[i] << std::endl;

	for (int i = 0; i < 4; i++)
		Jacques[i] = i;

	for (int i = 0; i < 4; i++)
		std::cout << Jacques[i] << std::endl;
	return 0;
}