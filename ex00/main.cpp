#include "easyfind.hpp"

int main()
{
	std::vector<int> v;

	v.push_back(2);
	v.push_back(12);
	v.push_back(9);
	v.push_back(7);
	v.push_back(11);
	v.push_back(15);
	v.push_back(5);
	v.push_back(0);

	for (int i = 0; i < 16; i++)
	{
		std::cout << i << " = ";

		try
		{
			std::vector<int>::iterator it = ::easyfind(v, i);
			std::cout << *it << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	// std::vector<std::string> c;

	// c.push_back("aaa");
	// c.push_back("rrr");
	// c.push_back("ccc");
	// c.push_back("ddd");
	// c.push_back("aaa");
	// c.push_back("jjj");

	// try
	// {
	// 	std::vector<std::string>::iterator it = ::easyfind(c, "ccc");
	// 	std::cout << *it << std::endl;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }


	return 0;
}
