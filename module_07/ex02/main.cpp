#include "Array.hpp"
#include <iostream>

int main() {
	std::cout << "------Simple test------" << std::endl;
    Array<int> a(3);
	a[0] = 43;
	a[1] = -1;
	a[2] = 5;
	int ret = a.size();
	std::cout << "size: "<< ret << std::endl;
	std::cout << "a[1]: " << a[1] << std::endl;
	std::cout << "------test 2------" << std::endl;
	Array<int> *b = new Array<int>();
	try
	{
		std::cout << (*b)[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete b;
	
	
	std::cout << "------- test with index out of bounds------" << std::endl;
	try
	{
    	Array<char> b(3);
		b[0] = 'a';
		b[1] = 'b';
		b[2] = 'c';
		std::cout << b[-2] << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';	
	}
	std::cout << "------copy constructor------" << std::endl;
	Array<int> c(a);
	for (unsigned int i = 0; i < c.size(); i++)
	{
		std::cout << "c["<<i<<"]= " << c[i] << "\n";
	}
	
    return 0;
}
