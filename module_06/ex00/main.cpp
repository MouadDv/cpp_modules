#include "Convert.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		Convert test(av[1]);
		test.convert();
	}
	return (1);
}