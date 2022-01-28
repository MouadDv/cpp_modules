#include "Dog.hpp"

Dog::Dog()
{
  std::cout << "Dog default constructor called!\n";
  this->type = "Dog";
  this->brain = new Brain;
}

Dog::Dog(const Dog &c)
{
  std::cout << "Dog copy constuctor called!\n";
  Animal::type = c.Animal::type;
  this->brain = new Brain;
  *this->brain = *c.brain;
}

Dog &Dog::operator=(const Dog &c)
{
  std::cout << "Dog assignation operator overload called\n";
  Animal::type = c.Animal::type;
  *this->brain = *c.brain;
  return (*this);
}

Dog::~Dog()
{
  std::cout << "Dog destructor called\n";
  delete brain;
}

void Dog::makeSound( void ) const
{
  std::cout << "Dog sound WOOF WOOF!\n";
}
