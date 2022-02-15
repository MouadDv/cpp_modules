#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Functions.hpp"

int	main()
{
	{
		std::cout << "-------------------------------------\n";
		Base *test = new Base;

		identify(test);
		delete test;
		std::cout << "-------------------------------------\n";
	}
	{
		std::cout << "-------------------------------------\n";
		Base *test = generate();
		Base &s = *test;

		identify(test);
		identify(s);
		delete test;
		std::cout << "-------------------------------------\n";
	}
	return (1);
}