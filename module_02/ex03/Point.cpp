#include "Point.hpp"

Point::Point()
{
  this->x.setRawBits(0);
  this->y.setRawBits(0);
}

Point::Point(const Point &c)
{
  this->x = c.x;
  this->y = c.y;
}

Point::Point(float r, float l)
{
  Fixed t(r);
  Fixed te(l);

  this->x = t;
  this->y = te;
}

Point &Point::operator=(Point &c)
{
  this->x = c.x;
  this->y = c.y;

  return (*this);
}

Point::~Point()
{
  std::cout << "Destructor called!\n";
}
