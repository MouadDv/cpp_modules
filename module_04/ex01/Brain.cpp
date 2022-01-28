#include "Brain.hpp"

Brain::Brain()
{
  std::cout << "Brain default constructor called!\n";
}

Brain::Brain(const Brain &c)
{
  std::cout << "Brain copy constructor called!\n";
  for (int i = 0; i < 100; i++){
    this->ideas[i] = c.ideas[i];
  }
}

Brain &Brain::operator=(const Brain &c)
{
  std::cout << "Brain assignation operator overload called!\n";
  for (int i = 0; i < 100; i++){
    this->ideas[i] = c.ideas[i];
  }
  return (*this);
}

Brain::~Brain()
{
  std::cout << "Brain distructor called!\n";
}
