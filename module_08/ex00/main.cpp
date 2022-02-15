#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <iostream>

int main()
{
	{
		std::vector<int> g1;
		std::vector<int>::iterator it;
	
		for (int i = 1; i <= 5; i++)
			g1.push_back(i);
		try
		{
			it = easyfind(g1, 1);
			std::cout << "Found!\n";
			std::cout << *it << "\n";
		}
		catch(const char *s)
		{
			std::cerr << s << '\n';
		}
	}
	{
		std::deque<int> g1;
		std::deque<int>::iterator it;
	
		for (int i = 1; i <= 5; i++)
			g1.push_back(i);
		try
		{
			it = easyfind(g1, 10);
			std::cout << "Found!\n";
			std::cout << *it << "\n";
		}
		catch(const char *s)
		{
			std::cerr << s << '\n';
		}
	}
}