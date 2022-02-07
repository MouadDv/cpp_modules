#pragma once
#ifndef PRESIDENTIAL_PARDON_FORM_CLASS
#define PRESIDENTIAL_PARDON_FORM_CLASS

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class PresidentialPardonForm: public Form
{
public:
  PresidentialPardonForm( void );
  PresidentialPardonForm( std::string target );
  PresidentialPardonForm( const PresidentialPardonForm &c );
  PresidentialPardonForm &operator=(const PresidentialPardonForm &c);
  ~PresidentialPardonForm();
  void execute(Bureaucrat const & executor) const;
};

#endif
