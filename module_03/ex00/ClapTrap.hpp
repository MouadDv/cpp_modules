#pragma once
#ifndef CLAPTRAP_CLASS
#define CLAPTRAP_CLASS

#include <string>
#include <iostream>
class ClapTrap {
private:
  std::string Name;
  int hp;
  int ep;
  int ad;
public:
  ClapTrap(std::string N);
  ClapTrap(const ClapTrap &c);
  ClapTrap();
  ClapTrap& operator=(const ClapTrap &c);
  void attack(std::string const & target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  ~ClapTrap();
  // Geters
  std::string getName();
  int getHp();
  int getEp();
  int getAd();
};


#endif
