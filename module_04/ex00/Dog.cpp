#include "Dog.hpp"

Dog::Dog()
{
  std::cout << "Dog default constructor called!\n";
  this->type = "Dog";
}

Dog::Dog(const Dog &c)
{
  std::cout << "Dog copy constuctor called!\n";
  Animal::type = c.Animal::type;
}

Dog &Dog::operator=(const Dog &c)
{
  std::cout << "Dog assignation operator overload called\n";
  Animal::type = c.Animal::type;
  return (*this);
}

Dog::~Dog()
{
  std::cout << "Dog destructor called\n";
}

void Dog::makeSound( void ) const
{
  std::cout << "Dog sound WOOF WOOF!\n";
}
