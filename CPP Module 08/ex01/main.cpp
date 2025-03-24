#include "Span.hpp"

int	main(){

	Span span1(1);
	span1.addNumber(667);

	std::cout << span1._cont[0] << std::endl;

	try { span1.addNumber(1996); }
	catch (std::exception &e){ std::cout << e.what() << std::endl;}

	Span span2(12);
	span2.addNumber(1000);
	span2.addNumber(3);
	span2.addNumber(50);
	span2.addNumber(7);
	span2.addNumber(99);
	span2.addNumber(77);
	span2.addNumber(88);
	span2.addNumber(66);
	span2.addNumber(777);
	span2.addNumber(654);
	span2.addNumber(5743);

	for (size_t i = 0; i < span2._cont.size(); i++)
		std::cout << span2._cont[i] << " ";
	std::cout << std::endl;

	std::cout << span2.longestSpan() << std::endl;
	std::cout << span2.shortestSpan() << std::endl;


	try {
		srand(std::time(0));
		Span span3(100000);

		for (int i = 0; i < 100000; i++)
			span3.addNumber(rand());

		std::cout << span3.longestSpan() << std::endl;
		std::cout << span3.shortestSpan() << std::endl;
		std::cout << "Test 100k Ok" << std::endl;
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl;}

	try {
		srand(std::time(0));
		Span span4(10000);

		for (int i = 0; i < 10000; i++)
			span4.addNumber(rand());

		std::cout << span4.longestSpan() << std::endl;
		std::cout << span4.shortestSpan() << std::endl;
		std::cout << "Test 10k Ok" << std::endl;
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl;}

	try {
		Span span5(10);
		span5.addNumber(2);

		for (size_t i = 0; i < span5._cont.size(); i++)
			std::cout << span5._cont[i] << " ";
		std::cout << std::endl;

		int arr[] = {26,10,1996,2018};

		span5.addMore(arr, arr + 3);

		for (size_t i = 0; i < span5._cont.size(); i++)
			std::cout << span5._cont[i] << " ";
		std::cout << std::endl;

		std::vector<int> levecteur;
		levecteur.push_back(9877);
		levecteur.push_back(6545);
		levecteur.push_back(96);
		levecteur.push_back(654);
		levecteur.push_back(98);
		span5.addMore(levecteur.begin(), levecteur.end());

		for (size_t i = 0; i < span5._cont.size(); i++)
			std::cout << span5._cont[i] << " ";
		std::cout << std::endl;

		std::vector<int> levecteur2;
		levecteur2.push_back(9877);
		levecteur2.push_back(6545);
		levecteur2.push_back(96);
		levecteur2.push_back(654);
		levecteur2.push_back(984);
		levecteur2.push_back(98);
		span5.addMore(levecteur2.begin(), levecteur2.end());

		for (size_t i = 0; i < span5._cont.size(); i++)
			std::cout << span5._cont[i] << " ";
		std::cout << std::endl;

	}
	catch (std::exception &e) { std::cout << e.what() << std::endl;}

	return 0;
}

// int main()
// {
// 	Span sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return 0;
// }