#pragma once
#ifndef FIXED_CLASS
#define FIXED_CLASS

#include <iostream>


class Fixed {

private:
  int fpv;
  static const int fb;
public:
  Fixed();
  Fixed(const Fixed &s);
  Fixed &operator=(const Fixed &r);
  int getRawBits( void ) const;
  void setRawBits( int const raw );
  ~Fixed();
};


#endif
