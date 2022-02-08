#pragma once
#ifndef SHRUBBERYCREATIONFORM_CLASS
#define SHRUBBERYCREATIONFORM_CLASS
#include <iostream>
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const & c);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & c);
	void execute(Bureaucrat const & executor) const;
	class WriteErrException: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};



#endif
