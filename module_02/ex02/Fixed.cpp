#include "Fixed.hpp"

Fixed::Fixed(const int d)
{
  this->fpv = d << this->fb;
}

Fixed::Fixed ()
{
  this->fpv = 0;
}

Fixed::Fixed (const Fixed &s)
{
  fpv=s.fpv;
}

Fixed::Fixed(const float f)
{
  this->fpv = roundf(f * (1 << this->fb));
}

Fixed::~Fixed()
{
}

Fixed& Fixed::operator=(const Fixed &l)
{
  fpv=l.fpv;
  return (*this);
}

int Fixed::getRawBits( void ) const
{
  return (this->fpv);
}

void Fixed::setRawBits( int const raw )
{
  this->fpv = raw;
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

bool  Fixed::operator==(const Fixed &s)
{
  return (this->fpv == s.fpv);
}

bool  Fixed::operator!=(const Fixed &s)
{
  return (this->toFloat() != s.toFloat());
}

bool  Fixed::operator<=(const Fixed &s)
{
  return (this->fpv <= s.fpv);
}

bool  Fixed::operator>=(const Fixed &s)
{
  return (this->fpv >= s.fpv);
}

bool  Fixed::operator>(const Fixed &s)
{
  return (this->fpv > s.fpv);
}

bool  Fixed::operator<(const Fixed &s)
{
  return (this->fpv < s.fpv);
}


Fixed Fixed::operator+(const Fixed &s)
{
  Fixed tmp(this->toFloat() + s.toFloat());

  return (tmp);
}
Fixed Fixed::operator-(const Fixed &s)
{
  Fixed tmp(this->toFloat() - s.toFloat());

  return (tmp);
}

Fixed Fixed::operator*(const Fixed &s)
{
  Fixed tmp(this->toFloat() * s.toFloat());

  return (tmp);
}

Fixed Fixed::operator/(const Fixed &s)
{
  Fixed tmp(this->toFloat() / s.toFloat());

  return (tmp);
}

Fixed &Fixed::operator++()
{
  this->fpv++;
  return (*this);
}

Fixed &Fixed::operator--()
{
  this->fpv--;
  return (*this);
}

Fixed Fixed::operator++(int)
{
  Fixed tmp = *this;

  ++this->fpv;
  return (tmp);
}

Fixed Fixed::operator--(int)
{
  Fixed tmp = *this;

  --this->fpv;
  return (tmp);
}

Fixed &Fixed::min(Fixed &l, Fixed &r)
{
  if (l > r)
    return (r);
  return (l);
}

const Fixed &Fixed::min(const Fixed &l, const Fixed &r)
{
  if (l.toFloat() > r.toFloat())
    return (r);
  return (l);
}

Fixed &Fixed::max(Fixed &l, Fixed &r)
{
  if (l < r)
    return (r);
  return (l);
}

const Fixed &Fixed::max(const Fixed &l, const Fixed &r)
{
  if (l.toFloat() < r.toFloat())
    return (r);
  return (l);
}


const int Fixed::fb = 8;
