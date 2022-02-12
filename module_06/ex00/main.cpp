#include <string>
#include <iostream>
#include <iomanip>

bool is_float(std::string str)
{
	if (str.find("f") != std::string::npos)
		return (true);
	return (false);
}

bool is_point(std::string str)
{
	if (str.find(".") != std::string::npos)
		return (true);
	return (false);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		if (is_point(av[1]))
		{
			if (is_float(av[1]))
			{
				float f = strtof(av[1], nullptr);
				int i = static_cast<int>(f);

				if (i >= 32 && i <= 127)
					std::cout << "char: '" << static_cast<char>(i) << "'\n";
				else
					std::cout << "char: Non displayable\n";
				std::cout << "Int: " << i << "\n";
				std::cout << "Float: " << std::fixed << std::setprecision(1) << f << "f\n";
				std::cout << "Double: " << std::fixed << std::setprecision(1) << static_cast<double>(f) << "\n";
			}
			else
			{
				double d = strtod(av[1], nullptr);
				int i = static_cast<int>(d);

				if (i >= 32 && i <= 127)
					std::cout << "char: '" << static_cast<char>(i) << "'\n";
				else
					std::cout << "char: Non displayable\n";
				std::cout << "Int: " << i << "\n";
				std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f\n";
				std::cout << "Double: " << std::fixed << std::setprecision(1) << d << "\n";
			}
		}
		else
		{
			try
			{
				std::string t = av[1];
				int p = static_cast<int>(std::stoi(t.c_str()));
				(void)p;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
			
		}
	}
	return (1);
}