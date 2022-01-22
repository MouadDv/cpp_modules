#ifndef FRAGTRAP_CLASS
#define FRAGTRAP_CLASS

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap: public ClapTrap
{
public:
  FragTrap();
  FragTrap(std::string Name);
  FragTrap(const FragTrap &c);
  FragTrap &operator=(const FragTrap &c);
  void highFivesGuys(void);
  ~FragTrap();

};

#endif
