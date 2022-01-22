#ifndef FRAGTRAP_CLASS
#define FRAGTRAP_CLASS

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap: virtual public ClapTrap
{
public:
  FragTrap();
  FragTrap(std::string Name);
  FragTrap(const FragTrap &c);
  FragTrap &operator=(const FragTrap &c);
  void highFivesGuys(void);
  ~FragTrap();
  void attack(std::string const & target);
};

#endif
