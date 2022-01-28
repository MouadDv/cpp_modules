#ifndef CAT_CLASS
#define CAT_CLASS

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
private:
  Brain *brain;
public:
  Cat();
  Cat(const Cat &c);
  Cat &operator=(const Cat &c);
  ~Cat();
  void makeSound( void ) const;
};

#endif
