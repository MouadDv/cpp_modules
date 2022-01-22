#include "Cat.hpp"

Cat::Cat()
{
  std::cout << "Cat default constructor called!\n";
  this->type = "Cat";
}

Cat::Cat(const Cat &c)
{
  std::cout << "Cat copy constuctor called!\n";
  Animal::type = c.Animal::type;
}

Cat &Cat::operator=(const Cat &c)
{
  std::cout << "Cat assignation operator overload called\n";
  Animal::type = c.Animal::type;
  return (*this);
}

Cat::~Cat()
{
  std::cout << "Cat destructor called\n";
}

void Cat::makeSound( void ) const
{
  std::cout << "Cat sound MEOW!\n";
}
