#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Functions.hpp"

int	main()
{
	Base *test = generate();
	Base &ss = *test;

	identify(test);
	return (1);
}