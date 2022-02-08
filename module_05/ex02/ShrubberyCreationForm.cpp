#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("RandomShrubberyName", 145, 137)
{
  std::cout << "RobotomyRequestForm default constructor called!\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("jg", 145, 137)
{
  std::cout << "RobotmyRequestForm constructor called with target = " << target << "\n";
  this->setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & c) : Form(c)
{
  std::cout << "RobotmyRequestForm copy constructor called!\n";
  this->setTarget(c.getTarget());
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
  std::cout << "RobotmyRequestForm destructor called!\n";
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & c)
{
  std::cout << "RobotmyRequestForm assignation operator overload called!\n";
  this->setTarget(c.getTarget());
  return (*this);
}

const char* ShrubberyCreationForm::WriteErrException::what() const throw()
{
  return ("Error: unable to writle to file!");
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
  if (this->getSigned() == true && executor.getGrade() <= this->getGradetoexec())
    {
      std::string fd = this->getTarget() + "_shrubbery";
      std::ofstream outFile(fd.c_str());
      if (!outFile.is_open())
        throw ShrubberyCreationForm::WriteErrException();
      outFile << "                                               |" << std::endl;
      outFile << "                                              -x-" << std::endl;
      outFile << "                                               |" << std::endl;
      outFile << "              v .   ._, |_  .," << std::endl;
      outFile << "           `-._\\/  .  \\ /    |/_" << std::endl;
      outFile << "               \\  _\\, y | \\//" << std::endl;
      outFile << "         _\\_.___\\, \\/ -.\\||" << std::endl;
      outFile << "           `7-,--.`._||  / / ," << std::endl;
      outFile << "           /'     `-. `./ / |/_.'" << std::endl;
      outFile << "                     |    |//" << std::endl;
      outFile << "                     |_    /" << std::endl;
      outFile << "                     |-   |" << std::endl;
      outFile << "                     |   =|" << std::endl;
      outFile << "                     |    |" << std::endl;
      outFile << "--------------------/ ,  . \\--------._" << std::endl;
    }
  else
    throw Form::GradeTooLowException();
}
