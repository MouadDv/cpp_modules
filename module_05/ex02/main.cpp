#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	std::cout << "-------test 1: ------" << std::endl;
	try
	{
		Bureaucrat b("b1",13);
		std::cout << b << std::endl;
		ShrubberyCreationForm s("home");
		s.beSigned(b);
		std::cout << s << std::endl;
		s.execute(b);
		b.signForm(s);
	}
	catch(std::exception& e1)
	{
		std::cerr << e1.what() << '\n';
	}
	std::cout << "-------test 2: ------" << std::endl;
	try
	{
		Bureaucrat b("b2",45);
		std::cout << b << std::endl;
		RobotomyRequestForm r("robot");
		r.beSigned(b);
		std::cout << r << std::endl;
		r.execute(b);
		b.signForm(r);
	}
	catch(std::exception& e1)
	{
		std::cerr << e1.what() << '\n';
	}
	std::cout << "-------test 3: ------" << std::endl;
	try
	{
		Bureaucrat b("b2",3);
		std::cout << b << std::endl;
		PresidentialPardonForm p("president");
		p.beSigned(b);
		std::cout << p << std::endl;
		p.execute(b);
		b.signForm(p);
	}
	catch(std::exception& e1)
	{
		std::cerr << e1.what() << '\n';
	}
}
