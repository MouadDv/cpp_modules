#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	{
		try
			{
				Bureaucrat _bu("battata", 1);
				Form  _f("hhh", 15, 15);
				_f.beSigned(_bu);
				std::cout << _f;
			}
		catch (std::exception & e)
			{
				std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "-------test 1: ------" << std::endl;
		try
			{
				Bureaucrat b("b1",1);
				std::cout << b;
				Form f("f1", 1, 2);
				f.beSigned(b);
				std::cout << f;
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
				std::cout << b;
				f.beSigned(b);
				std::cout << f;
				b.signForm(f);
				b.dec();
				std::cout << b;
				f.beSigned(b);
			}
		catch(std::exception& e1)
			{
				std::cerr << e1.what() << '\n';
			}
		b.signForm(f);
		std::cout << f;
	}
}
