#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
  std::cout << "Bureaucrat default constructor called!\n";
}

Bureaucrat::Bureaucrat(std::string n, int g): Name(n), Grade(g)
{
  std::cout << "Bureaucrat constructor called with values " << n << " and " << g << " \n";
  if (this->Grade > 150)
    throw Bureaucrat::GradeTooLowException();
  else if (this->Grade < 1)
    throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &x): Name(x.Name)
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
	if (this->Grade - 1 > 150)
    	throw Bureaucrat::GradeTooLowException();
 	 else if (this->Grade - 1 < 1)
    	throw Bureaucrat::GradeTooHighException();
	this->Grade--;
}
void Bureaucrat::dec( void )
{
	if (this->Grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (this->Grade + 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->Grade++;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
  o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "\n";
  return (o);
}
