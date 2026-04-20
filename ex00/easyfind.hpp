#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <list>
#include <exception>
#include <vector>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &t, int i)
{
	typename T::iterator it = std::find(t.begin(), t.end(), i);

	if (it != t.end())
		return it;
	else
		throw std::exception();
}


#endif