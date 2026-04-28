#include "Span.hpp"
#include "list"

int main()
{
	std::cout << "------- Test Span -------" << std::endl;
	Span	sp = Span(50);

	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(4);
		sp.addNumber(9);
		sp.addNumber(11);
		//sp.addNumber(5);

		std::cout << std::endl << "Shortest span = ";
		std::cout << sp.shortestSpan() << std::endl;
		std::cout<< "Longest span = ";
		std::cout << sp.longestSpan() << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "Span vector = " << std::endl;
	sp.checkVector();
	std::cout << std::endl;

	std::cout << "------- Compare Adding With List -------" << std::endl;

	std::list<int>	l;

	try
	{
		l.push_back(6);
		l.push_back(3);
		l.push_back(4);
		l.push_back(9);
		l.push_back(11);
		//sp.addNumber(5);

		std::cout << std::endl << "Shortest span = ";
		std::cout << sp.shortestSpan() << std::endl;
		std::cout<< "Longest span = ";
		std::cout << sp.longestSpan() << std::endl << std::endl;

		sp.addNumber(l.begin(), l.end());
		std::cout << "Span vector after adding list container values = " << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	sp.checkVector();
	std::cout << std::endl;

	std::cout << "------- Test With More Than 10 000 Numbers -------" << std::endl;

	Span	bigSp(20000);
	std::vector<int>	bigVector;
	srand(time(NULL));

	for(int i = 0; i < 20000; i++)
		bigVector.push_back(rand());
	
	bigSp.addNumber(bigVector.begin(), bigVector.end());

	std::vector<int>::iterator it = bigVector.begin();
	//std::vector<int>::iterator ite = bigVector.end();
	for (int i = 0; i < 20; i++)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "Big Shortest: " << bigSp.shortestSpan() << std::endl;
	std::cout << "Big Longest: " << bigSp.longestSpan() << std::endl;


	return 0;
}