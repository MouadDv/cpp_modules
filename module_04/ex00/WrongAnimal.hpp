#ifndef WRONGANIMAL_CLASS
#define WRONGANIMAL_CLASS

#include <iostream>

class WrongAnimal {
protected:
  std::string type;
public:
  WrongAnimal();
  WrongAnimal(const WrongAnimal &c);
  WrongAnimal &operator=(const WrongAnimal &c);
  ~WrongAnimal();
  std::string getType( void );
  void makeSound( void ) const;
};

#endif
