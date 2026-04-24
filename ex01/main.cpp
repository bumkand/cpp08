#include "Span.hpp"

int main()
{
	Span	sp = Span(5);

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
	
	sp.checkVector();


	return 0;
}