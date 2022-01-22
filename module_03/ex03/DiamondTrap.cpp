#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
  std::cout << "DiamondTrap default constructor called!\n";
}

DiamondTrap::DiamondTrap(std::string Name)
{
  std::cout << "DiamondTrap constructor called with value " << Name << "\n";
  this->Name = Name;
  ClapTrap::Name = Name + "_clap_name";
  this->hp = FragTrap::hp;
  this->ep = ScavTrap::ep;
  this->ad = FragTrap::ad;
}

DiamondTrap::DiamondTrap(const DiamondTrap &c)
{
  std::cout << "DiamondTrap copy constructor called!\n";
  this->Name = c.Name;
  ClapTrap::Name = c.ClapTrap::Name;
  this->ep = c.ep;
  this->ad = c.ad;
  this->hp = c.hp;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &c)
{
  std::cout << "DiamondTrap assignation operator overload called!\n";
  this->Name = c.Name;
  this->ep = c.ep;
  ClapTrap::Name = c.ClapTrap::Name;
  this->ad = c.ad;
  this->hp = c.hp;
  return (*this);
}

void DiamondTrap::attack(std::string const & target)
{
  ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
  std::cout << "Name of DiamondTrap: " << this->Name << ", and the name of ClapTrap is: " << ClapTrap::Name << "\n";
}

DiamondTrap::~DiamondTrap()
{
  std::cout << "DiamondTrap destructor called!\n";
}
