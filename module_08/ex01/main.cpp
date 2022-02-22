#include "Span.hpp"

int RandomNumber ( void ) 
{
	return (std::rand()%100);
}

int	main()
{
	{
		Span test;
		Span size(5);

		size.addNumber(1);
		size.addNumber(2);
		size.addNumber(3);
		size.addNumber(4);
		size.addNumber(5);
		test = size;
		try
		{
			test.addNumber(10);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Error: " << e.what() << '\n';
		}
	}
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::srand (unsigned ( std::time(0) ));
		std::vector<int> myvector (10000);
		std::generate (myvector.begin(), myvector.end(), RandomNumber);
		Span test(10000);

		test.addRange(myvector.begin(), myvector.end());
		std::cout << test.shortestSpan() << std::endl;
		std::cout << test.longestSpan() << std::endl;
	}
	return (0);
}