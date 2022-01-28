#ifndef ANIMAL_CLASS
#define ANIMAL_CLASS

#include <iostream>

class Animal {
protected:
  std::string type;
public:
  Animal();
  Animal(const Animal &c);
  Animal &operator=(const Animal &c);
  virtual ~Animal();
  virtual void makeSound( void ) const = 0;
  std::string getType( void ) const;
};


#endif
