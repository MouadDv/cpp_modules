#include <iostream>
#include "iter.hpp"

template<typename T>
void print(T const &r)
{
	std::cout << "value is :" << r << "\n";
}

int main( void )
{
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	iter(a, 10, print);
	std::cout << "----------------------------------------------------------\n";
	char b[10] = {'a','b','c','d','e','f','g','h','j','k'};
	iter(b, 10, print);
	return (0);
}
