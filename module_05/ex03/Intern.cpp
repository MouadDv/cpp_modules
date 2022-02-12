#include "Intern.hpp"

Intern::Intern( void )
{
	std::cout << "Intern default constructor called!\n";
}

Intern::Intern(const Intern &c)
{
	std::cout << "Intern copy constructor called!\n";
	(void) c;
}

Intern &Intern::operator=(const Intern &c)
{
	std::cout << "Intern assignation operator overload called!\n";
	(void) c;
	return (*this);
}

Form  *Intern::makeForm(std::string f, std::string t)
{
	std::string forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	Form* (*table[3])(const std::string target);
	
	table[0] = PresidentialPardonForm::create;
	table[1] = RobotomyRequestForm::create;
	table[2] = ShrubberyCreationForm::create;

	int i = 0;

	while (i < 3)
	{
		if (forms[i] == f)
			return (table[i](t));
		i++;
	}
	throw "Error: Form not found";
}

Intern::~Intern()
{
	std::cout << "Intern destructor called!\n";
}