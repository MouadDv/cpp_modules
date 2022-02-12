#include "Fixed.hpp"

int main( void ) {
  {
	Fixed a(5.05f);
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "Value of a: " << a << std::endl;
	std::cout << "Value of b: " << b << std::endl;
	std::cout << "Value of a divided by b: " << b / a << std::endl;
	std::cout << "Value of a plus b: " << a + b << std::endl;
	std::cout << "Value of a minus b: " << a - b << std::endl;
	std::cout << "Value of a multiplied by b: " << a * b << std::endl;
	std::cout << "Value of a: " << a << std::endl;
	std::cout << "Value of ++a: " << ++a << std::endl;
	std::cout << "Value of a: " << a << std::endl;
	std::cout << "Value of a++: " << a++ << std::endl;
	std::cout << "Value of a: " << a << std::endl;
	std::cout << "Value of the minimum between a and b: " << Fixed::min( a, b ) << std::endl;
  }
  {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
  }
  return 0;
}
