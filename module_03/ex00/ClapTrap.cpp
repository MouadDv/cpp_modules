#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string N)
{
  std::cout << "ClapTrap constractor called with value \"" << N << "\"\n";
  this->Name = N;
  this->hp = 10;
  this->ep = 10;
  this->ad = 0;
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
  std::cout << "ClapTrap CopyConstructor called\n";
  this->Name = c.Name;
  this->hp = c.hp;
  this->ep = c.ep;
  this->ad = c.ad;
}
ClapTrap::ClapTrap()
{
  std::cout << "Default constractor called!\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap &c)
{
  std::cout << "assignation operator overload called!\n";
  this->Name = c.Name;
  this->hp = c.hp;
  this->ep = c.ep;
  this->ad = c.ad;
  return (*this);
}

void ClapTrap::attack(std::string const & target)
{
  std::cout << "ClapTrap " << this->Name << " attacked " << target << " causing " << this->ad << " damage\n";
}
void ClapTrap::takeDamage(unsigned int amount)
{
  this->hp -= amount;
  std::cout << "ClapTrap " << this->Name << " took " << amount << " of damage\n";
}
void ClapTrap::beRepaired(unsigned int amount)
{
  this->hp += amount;
  std::cout << "ClapTrap " << this->Name << " repaired with " << amount << " of HP\n";
}

ClapTrap::~ClapTrap()
{
  std::cout << "Destractor called!\n";
}
