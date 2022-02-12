#pragma once
#ifndef FIXED_CLASS
#define FIXED_CLASS

#include <iostream>
#include <cmath>

class Fixed {
private:
  int fpv;
  static const int fb;
public:
  Fixed();
  Fixed(const int d);
  Fixed(const Fixed &s);
  Fixed(const float f);
  Fixed &operator=(const Fixed &r);
  int getRawBits( void ) const;
  void setRawBits( int const raw );
  float toFloat( void ) const;
  int toInt( void ) const;
  ~Fixed();
};

std::ostream &operator<<(std::ostream& os, const Fixed& c);

#endif
