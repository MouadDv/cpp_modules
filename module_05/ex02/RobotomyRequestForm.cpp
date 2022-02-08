#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(void): Form("RandomRobotName", 72, 45)
{
  std::cout << "RobotomyRequestForm default constructor called!\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robot", 72, 45)
{
  std::cout << "RobotmyRequestForm constructor called with target = " << target << "\n";
  this->setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & c) : Form(c)
{
  std::cout << "RobotmyRequestForm copy constructor called!\n";
  this->setTarget(c.getTarget());
}

RobotomyRequestForm::~RobotomyRequestForm()
{
  std::cout << "RobotmyRequestForm destructor called!\n";
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & c)
{
  std::cout << "RobotmyRequestForm assignation operator overload called!\n";
  this->setTarget(c.getTarget());
  return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
  if (this->getSigned() == true && executor.getGrade() <= this->getGradetoexec())
    {
      std::cout << "Drilling Noises!!!!!!!" << std::endl;
      srand(time(0));
      int nbr = rand();
      if (nbr % 2 < 0.5)
        std::cout << this->getTarget() << " has been robotomized successfully 50% of the time " << std::endl;
      else
        std::cout << this->getTarget() << " has been not robotomized the remaining 50% of the time " << std::endl;
    }
  else
    throw Form::GradeTooLowException();
}
