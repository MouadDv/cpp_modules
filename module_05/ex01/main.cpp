#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "-------test 1: ------" << std::endl;
	try
	{
		Bureaucrat b("b1",1);
		std::cout << b << std::endl;
		Form f("f1", 1, 2);
		f.beSigned(b);
		std::cout << f << std::endl;
		b.signForm(f);
	}
	catch(std::exception& e1)
	{
		std::cerr << e1.what() << '\n';
	}
	std::cout << "-------test 2: ------" << std::endl;

	Form f("f2", 20 , 14);
	Bureaucrat b("b2", 14);
	try
	{
		std::cout << b << std::endl;
		f.beSigned(b);
		std::cout << f << std::endl;
		b.signForm(f);
		b.dec();
		std::cout << b << std::endl;
		f.beSigned(b);
	}
	catch(std::exception& e1)
	{
		std::cerr << e1.what() << '\n';
	}
	b.signForm(f);
	std::cout << f << std::endl;
}
