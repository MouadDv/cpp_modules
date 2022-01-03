#include "Fixed.hpp"

Fixed::Fixed ()
{
  this->fpv = 0;
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed (const Fixed &s)
{
  fpv=s.fpv;
  std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
  std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &l)
{
  fpv=l.fpv;
  std::cout << "Assignation operator called" << std::endl;
  return (*this);
}

int Fixed::getRawBits( void ) const
{
  return (this->fpv);
  std::cout << "getRawBits member function called" << std::endl;
}

void Fixed::setRawBits( int const raw )
{
  this->fpv = raw;
  std::cout << "setRawBits member function called" << std::endl;
}

const int Fixed::fb = 8;
