#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>
#include <climits>


class Span
{
	private:
		unsigned int		_N;
		std::vector<int>	_v;
	
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();

		void addNumber(int i);
		template <typename Iterator> void addNumber(Iterator begin, Iterator end);
		int shortestSpan();
		int longestSpan();
		void checkVector();

		class EnoughNum : public std::exception
		{
			const char* what() const throw();
		};
		class NoNum : public std::exception
		{
			const char* what() const throw();
		};
		class OneNum : public std::exception
		{
			const char* what() const throw();
		};
};

#endif