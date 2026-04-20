#include "easyfind.hpp"

int main()
{
	std::vector<int> v;

	v.push_back(1);
	v.push_back(9);
	v.push_back(7);
	v.push_back(2);
	v.push_back(6);
	v.push_back(8);
	v.push_back(4);

	try
	{
		std::vector<int>::iterator it = ::easyfind(v, 9);
		std::cout << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	return 0;
}
