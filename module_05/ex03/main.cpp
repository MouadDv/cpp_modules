#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat exec("sad", 150);
	Intern someRandomIntern;
	Form* rrf = NULL;

	try
	{
		rrf = someRandomIntern.makeForm("roboftomy request", "Bender");
		rrf->beSigned(exec);
		rrf->execute(exec);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(char const* str)
	{
		std::cerr << str << '\n';
	}
	delete rrf;
}
