#include "DiamondTrap.hpp"

int main( void )
{
  DiamondTrap copy("first");
  DiamondTrap first(copy);

  // first = copy;
  first.attack("second");
  first.takeDamage(10);
  first.beRepaired(10);
  first.highFivesGuys();
  first.guardGate();
  first.whoAmI();
}
