#include "WrongCat.hpp"

WrongCat::WrongCat()
{
  std::cout << "WrongCat default constructor called!\n";
}

WrongCat::WrongCat(const WrongCat &c)
{
  std::cout << "WrongCat copy constructor called!\n";
  this->type = c.type;
}

WrongCat& WrongCat::operator=(const WrongCat &c)
{
  std::cout << "WrongCat assignation operator overload called!\n";
  this->type = c.type;
  return (*this);
}

WrongCat::~WrongCat()
{
  std::cout << "WrongCat destructor called!\n";
}

void  WrongCat::makeSound( void ) const
{
  std::cout << "WrongCat sound MOOOOO!\n";
}
