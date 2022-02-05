#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): Name("noneB")
{
  std::cout << "Bureaucrat default constructor called!\n";
}

Bureaucrat::Bureaucrat(std::string n, int g): Name(n), Grade(g)
{
  std::cout << "Bureaucrat constructor called with values " << n << " and " << g << " \n";
  if (this->Grade > 150)
    throw Bureaucrat::GradeTooHighException();
  else if (this->Grade < 1)
    throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &x)
{
  std::cout << "Bureaucrat copyconstructor called!\n";
  this->Grade = x.Grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &x)
{
  std::cout << "Bureaucrat assignement operator overload called!\n";
  this->Grade = x.Grade;
  return (*this);
}

Bureaucrat::~Bureaucrat()
{
  std::cout << "Bureaucrat destructor called!\n";
}

const char * Bureaucrat::GradeTooHighException::what () const throw ()
{
  return "--- Error: Grade too high (1-150) ---\n";
}

const char * Bureaucrat::GradeTooLowException::what () const throw ()
{
  return "--- Error: Grade too low (1-150) ---\n";
}

std::string Bureaucrat::getName( void ) const
{
  return (this->Name);
}

int Bureaucrat::getGrade( void ) const
{
  return (this->Grade);
}

void Bureaucrat::inc( void )
{
  this->Grade++;
  if (this->Grade > 150)
    throw Bureaucrat::GradeTooHighException();
  else if (this->Grade < 1)
    throw Bureaucrat::GradeTooLowException();
}
void Bureaucrat::dec( void )
{
  this->Grade--;
  if (this->Grade > 150)
    throw Bureaucrat::GradeTooHighException();
  else if (this->Grade < 1)
    throw Bureaucrat::GradeTooLowException();
}


void Bureaucrat::signForm(Form &c)
{
  try {
    c.beSigned(*this);
    std::cout << this->getName() << " succesfuly signed!\n";
  }
  catch (std::exception &e) {
    std::cout << this->getName() << " couldn't sign " << c.getName() << " because " << e.what() << "\n";
  }

}


std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
  o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "\n";
  return (o);
}
