#ifndef WRONGCAT_CLASS
#define WRONGCAT_CLASS

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
  WrongCat();
  WrongCat(const WrongCat &c);
  WrongCat &operator=(const WrongCat &c);
  ~WrongCat();
  void makeSound( void ) const;
};

#endif
