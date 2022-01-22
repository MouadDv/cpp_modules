#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
  std::cout << "WrongAnimal default constructor called!\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &c)
{
  std::cout << "WrongAnimal copy constructor called!\n";
  this->type = c.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &c)
{
  std::cout << "WrongAnimal assignation operator overload called!\n";
  this->type = c.type;
  return (*this);
}

WrongAnimal::~WrongAnimal()
{
  std::cout << "WrongAnimal destructor called!\n";
}

std::string  WrongAnimal::getType( void )
{
  return (this->type);
}

void  WrongAnimal::makeSound( void ) const
{
  std::cout << "WrongAnimal making the wrongsound!\n";
}
