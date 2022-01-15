#include "Fixed.hpp"


int main( void )
{
  Fixed a(10.334f);
  Fixed b(10.234f);

  std::cout << a << std::endl;
  std::cout << b << std::endl;
  if (a == b)
    std::cout << "equal\n";
  else {
    std::cout << "nequal\n";
  }
}


/*
int main( void ) {
  Fixed a;
  Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
  std::cout << a << std::endl;
  std::cout << ++a << std::endl;
  std::cout << a << std::endl;
  std::cout << a++ << std::endl;
  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << Fixed::max( a, b ) << std::endl;
  return 0;
}
*/
