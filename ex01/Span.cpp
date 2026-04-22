#include "Span.hpp"

Span::Span() :
	_N(0),
	_count(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Span::Span(unsigned int N) :
	_N(N),
	_count(0)
{
	std::cout << "Parametrized constructor called" << std::endl;
}

Span::Span(const Span& other) :
	_N(other._N)
{
	std::cout << "Copy constructor called" << std::endl;
}

Span& Span::operator=(const Span& other)
{
	std::cout << "Assigment operator called" << std::endl;
	if (this != &other)
	{
		_N = other._N;
		_v = other._v;
	}
	return *this;
}

Span::~Span()
{
	std::cout << "Destructor called" << std::endl;
}

void Span::addNumber(int i)
{
	try
	{
		if (_count < _N)
		{
			_count++;
			_v.push_back(i);
		}
		else
			throw EnaughtNum();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

void Span::checkVector()
{
	for (unsigned int i = 0; i < _count; i++)
		std::cout << _v.at(i) << std::endl;
}

const char* Span::EnaughtNum::what() const throw()
{
	return "Cannot upload more numbers";
}