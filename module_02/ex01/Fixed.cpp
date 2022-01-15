#include "Fixed.hpp"


Fixed::Fixed(const int d)
{
  this->fpv = d << this->fb;
  std::cout << "Int constructor called" << std::endl;
}

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

Fixed::Fixed(const float f)
{
  this->fpv = roundf(f * (1 << this->fb));
  std::cout << "Float constructor called" << std::endl;
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

float Fixed::toFloat( void ) const
{
  return ((float)this->fpv / (float)(1 << this->fb));
}

int Fixed::toInt( void ) const
{
  return (this->fpv >> this->fb);
}

std::ostream &operator<<(std::ostream& os, const Fixed& c)
{
  os << c.toFloat();
  return (os);
}
const int Fixed::fb = 8;
