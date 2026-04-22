#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <list>
#include <exception>
#include <vector>
#include <algorithm>


class Span
{
	private:
		unsigned int		_N;
		unsigned int		_count;
		std::vector<int>	_v;
	
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

		void addNumber(int i);
		std::iterator* shortestSpan();
		void checkVector();

		class EnaughtNum : public std::exception
		{
			const char* what() const throw();
		};
};

#endif