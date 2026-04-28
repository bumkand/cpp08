#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <list>

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
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		iterator begin();
		iterator end();
		const_iterator begin() const;
		const_iterator end() const;
		reverse_iterator rbegin();
		reverse_iterator rend();
		const_reverse_iterator rbegin() const;
		const_reverse_iterator rend() const;
};

#include "MutantStack.tpp"

#endif