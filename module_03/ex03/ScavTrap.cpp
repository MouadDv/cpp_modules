#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
  std::cout << "ScavTrap default constructor called!\n";
  this->hp = 100;
  this->ep = 50;
  this->ad = 20;
}
ScavTrap::ScavTrap(std::string Name)
{
  this->Name = Name;
  this->hp = 100;
  this->ep = 50;
  this->ad = 20;
  std::cout << "ScavTrap constructor called with value " << Name << "\n";
}
ScavTrap::ScavTrap(const ScavTrap &c)
{
  std::cout << "ScavTrap copy constructor called!\n";
  this->Name = c.Name;
  this->hp = c.hp;
  this->ep = c.ep;
  this->ad = c.ad;
}
ScavTrap& ScavTrap::operator=(const ScavTrap &c)
{
  std::cout << "ScavTrap assignation operator overload called!\n";
  this->Name = c.Name;
  this->hp = c.hp;
  this->ep = c.ep;
  this->ad = c.ad;

  return (*this);
}

void ScavTrap::attack(std::string const & target)
{
  std::cout << "ScavTrap " << this->Name << " attacked " << target << " causing " << this->ad << " damage\n";
}

void ScavTrap::guardGate( void )
{
  std::cout << this->Name << " has entred the Gate Keeper mode!\n";
}

ScavTrap::~ScavTrap()
{
  std::cout << "ScavTrap destructor called!\n";
}
