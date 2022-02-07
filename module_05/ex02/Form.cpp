#include "Form.hpp"

Form::Form(): Name("noneF") ,Signed(false), Grade_to_sign(1), Grade_to_exec(1)
{
  std::cout << "Form default constructor called!\n";
}

Form::Form(std::string n, int gs, int ge): Name(n), Signed(false), Grade_to_sign(gs), Grade_to_exec(ge)
{
  std::cout << "Form constructor called with values " << n << " and " << gs << " and " << ge << "\n";
}

Form::Form(const Form &c): Name(c.Name), Signed(false), Grade_to_sign(c.Grade_to_sign), Grade_to_exec(c.Grade_to_exec)
{
  std::cout << "Form copy constructor called!\n";
}

Form &Form::operator=(const Form &c)
{
  std::cout << "Form assignment operator overload called!\n";
  this->Signed = c.Signed;
  return (*this);
}

Form::~Form()
{
  std::cout << "Form destructor called!\n";
}

std::string Form::getName( void ) const
{
  return (this->Name);
}
int Form::getGradetosign( void ) const
{
  return (this->Grade_to_sign);
}
int Form::getGradetoexec( void ) const
{
  return (this->Grade_to_exec);
}

bool Form::getSigned( void ) const
{
  return (this->Signed);
}

std::string Form::getTarget( void ) const
{
  return (this->Target);
}

void Form::setTarget(std::string t)
{
  this->Target = t;
}

void Form::setSigned(bool s)
{
  this->Signed = s;
}


const char * Form::GradeTooHighException::what () const throw ()
{
  return ("Grade too High");
}


const char * Form::GradeTooLowException::what () const throw ()
{
  return ("Grade too low");
}

void Form::beSigned(Bureaucrat &s)
{
  if (s.getGrade() < this->Grade_to_sign)
    this->Signed = true;
  else
    throw Form::GradeTooLowException();
}

std::ostream & operator<<(std::ostream & o, Form const & rhs)
{
	if (rhs.getSigned() == true)
		o << "Form " << rhs.getName() << " is successfully signed !!\n";
	else
		o << "Form " << rhs.getName() << " is not signed !!\n";
	return (o);
}
