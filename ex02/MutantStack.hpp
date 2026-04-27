#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack()
		{
			//std::cout << "Default constructor called" << std::endl;
		};
		MutantStack(const MutantStack& other) :
			std::stack<T>(other)
		{
			//std::cout << "Copy constructor called" << std::endl;
		};
		MutantStack& operator=(const MutantStack& other)
		{
			if (this != &other)
				std::stack<T>::operator=(other);
			//std::cout << "Assigment operator called" << std::endl;
			return *this;
		};
		~MutantStack()
		{
			//std::cout << "Destructor called" << std::endl;
		};
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin();
		iterator end();
};

#include "MutantStack.tpp"

#endif