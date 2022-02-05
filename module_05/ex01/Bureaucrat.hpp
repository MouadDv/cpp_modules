#pragma once

#include "Form.hpp"
#include <string>
#include <iostream>

class Form;

class Bureaucrat {
private:
  const std::string Name;
  int Grade;
public:
  Bureaucrat();
  Bureaucrat(std::string n, int g);
  Bureaucrat(const Bureaucrat &x);
  Bureaucrat &operator=(const Bureaucrat &x);
  ~Bureaucrat();

  class GradeTooHighException: public std::exception
  {
    const char * what () const throw ();
  };

  class GradeTooLowException: public std::exception
  {
    const char * what () const throw ();
  };

  std::string getName( void ) const;
  int getGrade( void ) const;
  void inc( void );
  void dec( void );
  void signForm(Form &c);
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);
