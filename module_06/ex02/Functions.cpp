#include "Functions.hpp"

Base * generate(void)
{
	Base *ret = nullptr;
	srand(time(0));
	int ran = rand();

	if (ran % 3 == 0)
		ret = new A;
	else if (ran % 3 == 1)
		ret = new B;
	else if (ran % 3 == 2)
		ret = new C;
	return (ret);	
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "A\n";
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "B\n";
	else if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "C\n";
	else
		std::cout << "Unknown class\n";
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A\n";
	}
	catch(const std::bad_cast& e)
	{
		try
		{
			(void)dynamic_cast<B&>(p);
			std::cout << "B\n";
		}
		catch(const std::exception& e)
		{
			try
			{
				(void)dynamic_cast<C&>(p);
				std::cout << "C\n";
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		
	}
	
}