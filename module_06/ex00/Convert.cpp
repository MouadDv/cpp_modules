#include "Convert.hpp"

Convert::Convert( void )
{

}

Convert::Convert(char *s)
{
	this->str = s;
}

Convert::Convert( const Convert &c )
{
	this->str = c.str;
}

Convert &Convert::operator=( const Convert &c )
{
	this->str = c.str;
	return (*this);
}

Convert::~Convert( void )
{

}

void Convert::Toint( void )
{
	int s;
	try
	{
		s = std::stoi(this->str.c_str());
		try
		{
			char e = charret(static_cast<char>(s));
			std::cout << "char: '" << e << "'\n";
		}
		catch(const char *r)
		{
			std::cout << "char: " << r << "\n";
		}
		std::cout << "Int: " << static_cast<int>(s) << "\n";
		std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(s) << "f\n";
		std::cout << "Double: " << std::fixed << std::setprecision(1) << static_cast<double>(s) << "\n";
	}
	catch(...)
	{
		std::cout << "char: '" << "impossible" << "'\n";
		std::cout << "Int: " << "impossible" << "\n";
		std::cout << "Float: " << "nan" << "f\n";
		std::cout << "Double: " << "nan" << "\n";
	}
}

void Convert::Tochar( void )
{
	char s;

	s = this->str.c_str()[0];
	std::cout << "char: '" << s << "'\n";
	std::cout << "Int: " << static_cast<int>(s) << "\n";
	std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(s) << "f\n";
	std::cout << "Double: " << std::fixed << std::setprecision(1) << static_cast<double>(s) << "\n";
}

void Convert::Tofloat( void )
{
	float s;
	try
	{
		s = std::stof(this->str.c_str());
		try
		{
			char e = charret(static_cast<char>(s));
			std::cout << "char: '" << e << "'\n";
		}
		catch(const char *r)
		{
			std::cout << "char: " << r << "\n";
		}
		std::cout << "Int: " << static_cast<int>(s) << "\n";
		std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(s) << "f\n";
		std::cout << "Double: " << std::fixed << std::setprecision(1) << static_cast<double>(s) << "\n";
	}
	catch(...)
	{
		std::cout << "char: '" << "impossible" << "'\n";
		std::cout << "Int: " << "impossible" << "\n";
		std::cout << "Float: " << "nan" << "f\n";
		std::cout << "Double: " << "nan" << "\n";
	}
}

void Convert::Todouble( void )
{
	float s;
	try
	{
		s = std::stod(this->str.c_str());
		try
		{
			char e = charret(static_cast<char>(s));
			std::cout << "char: '" << e << "'\n";
		}
		catch(const char *r)
		{
			std::cout << "char: " << r << "\n";
		}
		std::cout << "Int: " << static_cast<int>(s) << "\n";
		std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(s) << "f\n";
		std::cout << "Double: " << std::fixed << std::setprecision(1) << static_cast<double>(s) << "\n";
	}
	catch(...)
	{
		std::cout << "char: '" << "impossible" << "'\n";
		std::cout << "Int: " << "impossible" << "\n";
		std::cout << "Float: " << "nan" << "f\n";
		std::cout << "Double: " << "nan" << "\n";
	}
}

char Convert::charret(int s)
{
	char   ret;

	if (s >= 32 && s <= 127)
		ret = static_cast<char>(s);
	else
		throw ("Non displayable");
	return (ret);
}

void Convert::convert( void )
{
	if (is_point())
	{
		if (is_float())
			Tofloat();
		else
			Todouble();
	}
	else if (this->str.length() == 1 && (this->str.c_str()[0] < '0' || this->str.c_str()[0] > '9'))
		Tochar();
	else
		Toint();
}

bool Convert::is_float( void )
{
	if (str.find("f") != std::string::npos)
		return (true);
	return (false);
}

bool Convert::is_point( void )
{
	if (str.find(".") != std::string::npos)
		return (true);
	return (false);
}