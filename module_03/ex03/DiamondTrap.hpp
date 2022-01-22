#ifndef DIAMONDTRAP_CLASS
#define DIAMONDTRAP_CLASS

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
private:
  std::string Name;
public:
  DiamondTrap();
  DiamondTrap(std::string Name);
  DiamondTrap(const DiamondTrap &c);
  DiamondTrap &operator=(const DiamondTrap &c);
  ~DiamondTrap();
  void attack(std::string const & target);
  void whoAmI();
};


#endif
