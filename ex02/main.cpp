#include "MutantStack.hpp"

int main()
{
	std::cout << "--- MutantStack Output Below ---" << std::endl << std::endl;
	MutantStack<int> mstack;
	mstack.push(4);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "--- MutantStack Output Above ---" << std::endl << std::endl;

	std::cout << "--- std::list Output Below ---" << std::endl;
	
	std::list<int>	list;
	list.push_back(4);
	list.push_back(17);
	std::cout << list.back() << std::endl;
	list.pop_back();
	std::cout << list.size() << std::endl;
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);

	std::list<int>::iterator list_it = list.begin();
	std::list<int>::iterator list_ite = list.end();
	++list_it;
	--list_it;

	while (list_it != list_ite)
	{
		std::cout << *list_it << std::endl;
		++list_it;
	}

	std::cout << "--- std::list Output Above ---" << std::endl;

	return 0;
}