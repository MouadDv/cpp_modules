#include "Data.hpp"
#include "Serialization.hpp"
#include <iostream>

int	main( void )
{
	Data *data = new Data;
	uintptr_t p;

	std::cout << "data address: " << data << "\n";
	p = serialize(data);
	std::cout << "address casted to uintptr_t: " << p << "\n";
	data = deserialize(p);
	std::cout << "address recasted to Data *: " << data << "\n";
}