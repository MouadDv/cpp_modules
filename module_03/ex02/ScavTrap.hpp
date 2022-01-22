#ifndef SCAVTRAP_CLASS
#define SCAVTRAP_CLASS

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap: virtual public ClapTrap
{
private:

public:
  ScavTrap();
  ScavTrap(std::string Name);
  ScavTrap(const ScavTrap &c);
  ScavTrap &operator=(const ScavTrap &c);
  ~ScavTrap();
  void guardGate();
  void attack(std::string const & target);
};
#endif
