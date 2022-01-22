#include "FragTrap.hpp"

FragTrap::FragTrap()
{
  std::cout << "FragTrap default constructor called!\n";
}

FragTrap::FragTrap(std::string Name)
{
  std::cout << "FragTrap constructor called with value " << Name << "\n";
  this->Name = Name;
  this->hp = 100;
  this->ep = 100;
  this->ad = 30;
}

FragTrap::FragTrap(const FragTrap &c)
{
  std::cout << "FragTrap copy constructor called!\n";
  this->Name = c.Name;
  this->hp = c.hp;
  this->ep = c.ep;
  this->ad = c.ad;
}

FragTrap& FragTrap::operator=(const FragTrap &c)
{
  std::cout << "FragTrap assignation operator overload called!\n";
  this->Name = c.Name;
  this->hp = c.hp;
  this->ep = c.ep;
  this->ad = c.ad;
  return (*this);
}

void FragTrap::highFivesGuys(void)
{
  std::cout << "High Five Guys!\n";
}

FragTrap::~FragTrap()
{
  std::cout << "FragTrap destructor called!\n";
}
