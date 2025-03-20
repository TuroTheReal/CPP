#include "easyfind.hpp"

int	main(){

	std::deque<int> deq;
	std::vector<int> vect;

	vect.push_back(62);
	vect.push_back(54);
	vect.push_back(1998);
	vect.push_back(2018);

	deq.push_back(0);
	deq.push_back(26);
	deq.push_back(10);
	deq.push_back(96);

	std::vector<int>::iterator it = vect.begin();
	std::vector<int>::iterator ite = vect.end();

	std::deque<int>::iterator lit = deq.begin();
	std::deque<int>::iterator lite = deq.end();

	for (; it < ite; it++)
		std::cout << *it << std::endl;

	for (; lit < lite; lit++)
		std::cout << *lit << std::endl;

	std::vector<int>::iterator test;

	try 						{ test = easyfind(vect, 1); std:: cout << *test << std::endl; }
	catch (std::exception &e)	{ std::cout << e.what()<<std::endl; }



	try 						{ test = easyfind(vect, 54); std:: cout << *test << std::endl; }
	catch (std::exception &e)	{ std::cout << e.what()<<std::endl; }



	try 						{ test = easyfind(vect, 2018); std:: cout << *test << std::endl; }
	catch (std::exception &e)	{ std::cout << e.what()<<std::endl; }



	try 						{ test = easyfind(vect, 62); std:: cout << *test << std::endl; }
	catch (std::exception &e)	{ std::cout << e.what()<<std::endl; }


	std::deque<int>::iterator test2;

	try 						{ test2 = easyfind(deq, 1); std:: cout << *test2 << std::endl; }
	catch (std::exception &e)	{ std::cout << e.what()<<std::endl; }

	return 0;
}
