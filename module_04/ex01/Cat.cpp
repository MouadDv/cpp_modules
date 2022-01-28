#include "Cat.hpp"

Cat::Cat()
{
  std::cout << "Cat default constructor called!\n";
  this->type = "Cat";
  this->brain = new Brain;
}

Cat::Cat(const Cat &c)
{
  std::cout << "Cat copy constuctor called!\n";
  Animal::type = c.Animal::type;
  this->brain = new Brain;
  *this->brain = *c.brain;
}

Cat &Cat::operator=(const Cat &c)
{
  std::cout << "Cat assignation operator overload called\n";
  Animal::type = c.Animal::type;
  *this->brain = *c.brain;
  return (*this);
}

Cat::~Cat()
{
  std::cout << "Cat destructor called\n";
  delete brain;
}

void Cat::makeSound( void ) const
{
  std::cout << "Cat sound MEOW!\n";
}
