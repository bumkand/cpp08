#include "Span.hpp"

Span::Span() :
	_N(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Span::Span(unsigned int N) :
	_N(N)
{
	//std::cout << "Parametrized constructor called" << std::endl;
}

Span::Span(const Span& other) :
	_N(other._N),
	_v(other._v)
{
	//std::cout << "Copy constructor called" << std::endl;
}

Span& Span::operator=(const Span& other)
{
	//std::cout << "Assigment operator called" << std::endl;
	if (this != &other)
	{
		_N = other._N;
		_v = other._v;
	}
	return *this;
}

Span::~Span()
{
	//std::cout << "Destructor called" << std::endl;
}

void Span::addNumber(int i)
{
	if (_v.size() >= _N)
		throw EnoughNum();
	else
		_v.push_back(i);
}

//template <typename Iterator>
//void Span::addNumber(Iterator begin, Iterator end)
//{
//	if (_v.size() + std::distance(begin, end) > _N)
//		throw EnoughNum();
//	else
//		_v.insert(begin, end);
//}

int Span::shortestSpan()
{
	if (_v.size() == 0)
		throw NoNum();
	if (_v.size() == 1)
		throw OneNum();

	int minDiff = INT_MAX;
	int diff = INT_MAX;

	std::vector<int> tmp = _v;
	sort(tmp.begin(), tmp.end());

	for (long unsigned int i = 0; i < tmp.size() - 1; i++)
	{
		diff = tmp[i + 1] - tmp[i];
		if (diff < minDiff)
			minDiff = diff;
	}

	return minDiff;
}

int Span::longestSpan()
{
	if (_v.size() == 0)
		throw NoNum();
	if (_v.size() == 1)
		throw OneNum();

	std::vector<int> tmp = _v;
	sort(tmp.begin(), tmp.end());
	
	int diff = tmp.back() - tmp.front();

	return diff;
}

void Span::checkVector()
{
	for (unsigned int i = 0; i < _v.size(); i++)
		std::cout << _v.at(i) << std::endl;
}

const char* Span::EnoughNum::what() const throw()
{
	return "Cannot upload more numbers";
}

const char* Span::NoNum::what() const throw()
{
	return "No number inputed";
}

const char* Span::OneNum::what() const throw()
{
	return "Just one number inputed";
}