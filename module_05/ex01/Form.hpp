#pragma once

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

class Bureaucrat;

class Form {
private:
  const std::string Name;
  bool Signed;
  const int Grade_to_sign;
  const int Grade_to_exec;
public:
  Form();
  Form(const Form &c);
  Form(std::string n, int gs, int ge);
  Form &operator=(const Form &c);
  ~Form();

  std::string getName( void ) const;
  int getGradetosign( void ) const;
  int getGradetoexec( void ) const;
  bool getSigned( void ) const;

  void setSigned(bool s);


  class GradeTooHighException: public std::exception
  {
    const char * what () const throw ();
  };

  class GradeTooLowException: public std::exception
  {
    const char * what () const throw ();
  };

  void beSigned(Bureaucrat &s);
};


std::ostream & operator<<(std::ostream & o, Form const & rhs);
