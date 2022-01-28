#ifndef BRAIN_CLASS
#define BRAIN_CLASS

#include <iostream>

class Brain {
public:
  std::string ideas[100];
  Brain();
  Brain(const Brain &c);
  Brain &operator=(const Brain &c);
  ~Brain();

};


#endif
