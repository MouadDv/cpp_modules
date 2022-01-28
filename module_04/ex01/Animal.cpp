#include "Animal.hpp"

Animal::Animal()
{
  std::cout << "Animal default constructor called!\n";
}

Animal::Animal(const Animal &c)
{
  std::cout << "Animal copie constructor called!\n";
  this->type = c.type;
}

Animal & Animal::operator=(const Animal &c)
{
  std::cout << "Animal assignation operator overload called!\n";
  this->type = c.type;
  return (*this);
}

Animal::~Animal()
{
  std::cout << "Animal destructor called!\n";
}

void Animal::makeSound( void ) const
{
  std::cout << "Animal makes a lot of sounds\n";
}

std::string Animal::getType( void ) const
{
  return (this->type);
}
