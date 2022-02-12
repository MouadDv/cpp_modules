#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ): Form("RandomPresidentialName", 25, 5)
{
  std::cout << "PresidentialPardonForm default constructor called!\n";
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ):  Form("Presidential", 25, 5)
{
  std::cout << "PresidentialPardonForm constructor called with target = " << target << "\n";
  this->setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &c ): Form(c.getName(), c.getGradetosign(), c.getGradetoexec())
{
  std::cout << "PresidentialPardonForm copy constructor called!\n";
  this->setTarget(c.getTarget());
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &c)
{
  std::cout << "PresidentialPardonForm assignation operator overload called!\n";
  this->setTarget(c.getTarget());
  return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
  std::cout << "PresidentialPardonForm destructor called!\n";
}


void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
  if (this->getSigned() == true && this->getGradetoexec() > executor.getGrade())
    std::cout << this->getTarget()<< " has been pardoned by Zafod Beeblebrox" << std::endl;
  else
    throw Form::GradeTooLowException();
}
