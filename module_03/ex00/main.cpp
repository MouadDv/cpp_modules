#include "ClapTrap.hpp"

int main( void )
{
  ClapTrap copy("first");
  ClapTrap first;

  first = copy;
  first.attack("second");
  first.takeDamage(10);
  first.beRepaired(10);
}
