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
  int getRawBits( void ) const;
  void setRawBits( int const raw );
  float toFloat( void ) const;
  int toInt( void ) const;
  Fixed &operator=(const Fixed &r);
  bool operator==(const Fixed &s);
  bool operator!=(const Fixed &s);
  bool operator<=(const Fixed &s);
  bool operator>=(const Fixed &s);
  bool operator>(const Fixed &s);
  bool operator<(const Fixed &s);
  Fixed operator+(const Fixed &s);
  Fixed operator-(const Fixed &s);
  Fixed operator*(const Fixed &s);
  Fixed operator/(const Fixed &s);
  Fixed &operator++();
  Fixed &operator--();
  Fixed operator++(int);
  Fixed operator--(int);
  static Fixed &min(Fixed &l, Fixed &r);
  static const Fixed &min(const Fixed &l, const Fixed &r);
  static Fixed &max(Fixed &l, Fixed &r);
  static const Fixed &max(const Fixed &l, const Fixed &r);
  ~Fixed();
};

std::ostream &operator<<(std::ostream& os, const Fixed& c);

#endif
