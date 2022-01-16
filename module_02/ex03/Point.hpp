#pragma once
#ifndef CLASS_POINT
#define CLASS_POINT
#include "Fixed.hpp"

class Point
{
private:
  Fixed x;
  Fixed y;
public:
  Point();
  Point(const Point &c);
  Point(float r, float l);
  Point &operator=(Point &c);
  ~Point();
};
#endif
