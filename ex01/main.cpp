#include "Span.hpp"
#include "list"

int main()
{
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


	return 0;
}