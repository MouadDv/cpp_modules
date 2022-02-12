#pragma once
#ifndef INTERN_CLASS
#define INTERN_CLASS

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
public:
	Intern( void );
	Intern(const Intern &c);
	Intern &operator=(const Intern &c);
	Form  *makeForm(std::string f, std::string t);
	~Intern();
};



#endif