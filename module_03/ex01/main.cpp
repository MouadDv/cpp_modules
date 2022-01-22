#include "ScavTrap.hpp"

int main( void )
{
  ScavTrap copy("first");
  ScavTrap first;

  first = copy;
  first.attack("second");
  first.takeDamage(10);
  first.beRepaired(10);
  first.guardGate();
}
